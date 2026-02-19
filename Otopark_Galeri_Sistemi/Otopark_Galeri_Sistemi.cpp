#include<iostream>
#include<string>
using namespace std;

class araba {
private:
	int fiyat;
public:
	std::string marka;
	int model;
	bool satildi;


	araba(string m, int mod,bool sat) {
		marka = m;
		model = mod;
		satildi = sat;
		fiyat = 0;
	}
	int fiyatBelirle(int yeniFiyat) {
		if (yeniFiyat < 0) {
			cout << "Fiyat negatif olamaz!" << endl;
		}
		else
		{
			cout << "Fiyat belirlendi: " << yeniFiyat << " TL" << endl;
			fiyat = yeniFiyat;
		}
		return yeniFiyat;
	}
	void arabaBilgisi() {
		
		cout << "Araba bilgileri:" << endl
			<< "marka: " <<marka
			<< "model: " <<model
			<<"fiyat: " <<fiyat;
	}
	int fiyatGetir() {
		cout << "araba fiyati: " << fiyat << " TL" << endl;
		return 0;
	}
	int satisyap() {

		if (satildi == true) {
			cout << "Bu araba zaten satıldı!" << endl;
		}
		else
		{
			cout << "Araba satıldı!" << endl;
			satildi = true;
		}
		return satildi;
	}
};



int main() {
	araba araba1("toyota",2012,true);
	araba1.fiyatBelirle(50000);
	araba1.fiyatGetir();
	return 0;
}