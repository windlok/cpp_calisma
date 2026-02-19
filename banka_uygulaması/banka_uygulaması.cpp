#include <iostream>
#include <string>

class banka {
private:
    std::string ad;
    std::string soyad;
	int hesap_numarasi;
	int bakiye;
public:
    int indirim;

    banka(std::string ad, std::string soyad, int hesap_numarasi, int bakiye) {
        this->ad = ad;
        this->soyad = soyad;
        this->hesap_numarasi = hesap_numarasi;
        this->bakiye = bakiye;
	}
	void paraYatirma(int miktar) {
        if(miktar<0){
			std::cout << "Hata: Negatif miktar yatırılamaz." << std::endl;
        }
        else
        {
			std::cout << "Para yatırıldı: " << miktar << std::endl;
            bakiye += miktar;
        }
    }
    void paraCekme(int miktar) {
        if (miktar < 0 && miktar>bakiye) {
            std::cout << "Hatali tutar girdiniz veya karanizdan çok deger girdiniz." << std::endl;
        }
        else
        {
            std::cout << "Para çekildi: " << miktar << std::endl;
            bakiye -= miktar;
        }
    }
    void bakiyeGoruntule() {
            std::cout << "Mevcut bakiye: " << bakiye << std::endl;
        }
};

int main()
{
	banka musteri1("Ahmet", "Yilmaz", 123456, 1000);

	musteri1.paraYatirma(500);

	musteri1.paraCekme(200);

    musteri1.bakiyeGoruntule();
	return 0;
}
