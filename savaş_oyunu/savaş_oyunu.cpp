#include<iostream>
#include<string>

class karakter {
public:
	std::string isim;
	int verecegiHasar;
	int can;
	std::string renk;

	karakter() {
		can = 100;
	}
	virtual void saldir(karakter* dusman) {
		std::cout << this->isim << " " << dusman->isim << " karakterine saldiriyor!" << std::endl;
		dusman->can -= this->verecegiHasar;
	}
	void hasarAl(int hasar) {
		this->can -= hasar;
		if (can < 0) can = 0;

		std::cout << this->isim << " karakteri " << hasar << " hasar aldı! Kalan can: " << this->can << std::endl;
	}
};

class Buyucu :public karakter{
	public:
		Buyucu() {
			isim = "Buyucu";
			verecegiHasar = 50;
			can = 100;
		}
};
class YakinDovus :public karakter {
	public:
		YakinDovus() {
			isim = "Savasci";
			verecegiHasar = 60;
			can = 150;
		}
};
class Menzilli :public karakter {
	public:
		Menzilli() {
			isim = "Okcu";
			verecegiHasar = 40;
			can = 120;
		}
};
karakter* karakterOlustur() {
		int secim;
	std::cout << "Karakter seciniz: 1. Buyucu 2. Savasci 3. Okcu" << std::endl;
	std::cin >> secim;
	switch (secim) {
	case 1:
		return new Buyucu();
	case 2:
		return new YakinDovus();
	case 3:
		return new Menzilli();
	default:
		std::cout << "Geçersiz seçim!" << std::endl;
		return nullptr;
	}

}

int main() {
	karakter* oyuncu1 = karakterOlustur();
	if (!oyuncu1) return 1;
	karakter* oyuncu2 = karakterOlustur();
	if (!oyuncu2) return 1;

	std::cout << "Oyun basladi!" << std::endl;

	while (oyuncu1->can > 0 && oyuncu2->can > 0) {
		oyuncu1->saldir(oyuncu2);
		if (oyuncu2->can <= 0) {
			std::cout << oyuncu2->isim << " karakteri oldu! " << oyuncu1->isim;
			break;
		}
		oyuncu1->saldir(oyuncu1);
		if (oyuncu2->can <= 0) {
			std::cout << oyuncu1->isim << " karakteri oldu! " << oyuncu2->isim;
			break;
		}

		std::cout << "-----------------------------" << std::endl;
	}
	delete oyuncu1;
	delete oyuncu2;

	return 0;
}
