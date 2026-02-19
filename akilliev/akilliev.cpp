#include<iostream>
#include<string>
using namespace std;
class akillicihaz {
	public:
		std::string marka;
		bool acikMi;
		int enerjiTuketimi,para;
		akillicihaz() {
			marka = "Bilinmiyor";
			acikMi = false;
			enerjiTuketimi = 0;
			para = 0;
		}
		
		void bilgigoster() {
			cout << "-----------------------------" << std::endl;
			cout << "cihaz :" << marka << std::endl
				<< "acik mi: " << acikMi << std::endl
				<< "enerji tuketimi: " << enerjiTuketimi << std::endl;
		}

		bool ac() {
			cout << "cihaz acildi !" << std::endl;
			acikMi = true;
			return 0;
		}

		bool kapat() {
			cout << "cihaz kapatildi !" << std::endl;
			acikMi = false;
			return 0;
		}

};
class Lamba:public akillicihaz {
public:
	int parlaklik;

};
class Klima :public akillicihaz {
	public:
		int sicaklik;

};

int main() {
	Lamba lamba1;
	Lamba lamba2;
	Klima klima1;

	lamba1.marka = "Philips";
	lamba1.enerjiTuketimi = 10;
	lamba1.parlaklik = 100;

	klima1.marka = "Samsung";
	klima1.enerjiTuketimi = 50;
	klima1.sicaklik = 24;

    lamba2.ac();
	lamba2.parlaklik = 50;

	klima1.ac();
	klima1.sicaklik = 22;

	lamba1.bilgigoster();
	klima1.bilgigoster();
	
    return 0;
}