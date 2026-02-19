#include <iostream>
#include <string>
using namespace std;

// ==========================================
// 1. SOYUTLAMA (ABSTRACTION) & SINIF YAPISI
// ==========================================
// "Karakter" tek başına var olamaz, sadece bir taslaktır.
class Karakter {

    // ==========================================
    // 2. KAPSÜLLEME (ENCAPSULATION)
    // ==========================================
protected: // "Sadece ben ve çocuklarım (miras alanlar) görebilir"
    string isim;
    int can;

public: // "Herkes görebilir"

    // ==========================================
    // 3. KURUCU METOT (CONSTRUCTOR)
    // ==========================================
    // Karakter doğarken isim ve can istiyor.
    Karakter(string ad, int saglik) {
        this->isim = ad;    // "Bu sınıfın ismi = gelen ad"
        this->can = saglik; // "Bu sınıfın canı = gelen sağlık"
        cout << "[Karakter Olusturuldu]: " << isim << endl;
    }

    // ==========================================
    // 4. SANAL METOT (POLYMORPHISM TEMELİ)
    // ==========================================
    // "virtual" demek: "Çocuklarım bu hareketi değiştirebilir!" demektir.
    // "= 0" demek: "Benim (Karakter'in) özel bir saldırısı yok, 
    // bunu ÇOCUKLARIM YAPMAK ZORUNDA (Saf Sanal / Pure Virtual)" demektir.
    virtual void saldir() = 0;

    // Normal bir fonksiyon (Herkes aynısını kullanır)
    void bilgiGoster() {
        cout << isim << " (Can: " << can << ")" << endl;
    }
};

// ==========================================
// 5. MİRAS ALMA (INHERITANCE)
// ==========================================
// Savasci, Karakter'in tüm özelliklerini (isim, can, fonksiyonlar) alır.
class Savasci : public Karakter {
public:

    // ==========================================
    // !!! DÜN TAKILDIĞIN YER (ZİNCİR KURUCU) !!!
    // ==========================================
    // Savasci doğarken (string ad) alıyor.
    // İki nokta (:) ile babası Karakter'e sesleniyor:
    // "Baba, sana bu adı veriyorum, canı da ben 100 olarak sabitliyorum."
    Savasci(string ad) : Karakter(ad, 100) {
        // Burası boş, çünkü işi babaya (Karakter) yaptırdık.
    }

    // ==========================================
    // 6. METOT EZME (OVERRIDE / POLYMORPHISM)
    // ==========================================
    // Babada "= 0" olan emri burada gerçeğe dönüştürüyoruz.
    void saldir() override {
        cout << isim << " KILIC ile vurdu! (GUM!)" << endl;
    }
};

class Buyucu : public Karakter {
public:
    // Yine zincirleme: Adı al, babaya ver. Canı 50 yap.
    Buyucu(string ad) : Karakter(ad, 50) {
    }

    // Büyücü saldırıyı farklı yorumluyor.
    void saldir() override {
        cout << isim << " ATES TOPU atti! (VIZZZ!)" << endl;
    }
};

int main() {
    // ==========================================
    // 7. NESNE OLUŞTURMA (OBJECT)
    // ==========================================
    // "Savasci" kalıbından "sav1" adında gerçek bir ürün çıkardık.
    Savasci sav1("Arthur"); // Constructor çalışır -> "Arthur oluşturuldu"
    Buyucu buy1("Merlin");  // Constructor çalışır -> "Merlin oluşturuldu"

    cout << "----------------" << endl;

    // ==========================================
    // 8. ÇOK BİÇİMLİLİK (POLYMORPHISM)
    // ==========================================
    // Bir "Karakter" pointer'ı (etiketi), hem Savaşçıyı hem Büyücüyü gösterebilir.
    Karakter* k1 = &sav1;
    Karakter* k2 = &buy1;

    // İkisine de aynı emri veriyoruz: "saldir()"
    // Ama biri kılıç vuruyor, diğeri ateş atıyor.
    k1->saldir();
    k2->saldir();

    return 0;
}