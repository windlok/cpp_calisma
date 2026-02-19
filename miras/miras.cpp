#include <iostream>
#include<string>

class Silah {
	public:
		std::string isim;
		int mermiKapasitesi;
		std::string renk;
};

class Ak47 :public Silah {
	public:
		/*std::string isim;		//miras alarak kullandık 
		int mermiKapasitesi;*/
		bool seriTek;
		int kayisUzunluğu;
		bool durbun;
		
		void atesEt() {

		}
};
class Pistol :public Silah {
public:
	/*std::string isim;			//miras alarak kullandık 
	int mermiKapasitesi;*/
	int kurmaKoluDeseni;

	void atesEt() {

	}
};
class M1 :public Silah {
public:
	/*std::string isim;			//miras alarak kullandık 
	int mermiKapasitesi;*/
	int kurmaKoluDeseni;
	bool seriTek;
	int kayisUzunluğu;

	void atesEt() {

	}
};

int main()
{
	Ak47 ak47;
	ak47.isim = "ak47 Yeni";
	ak47.renk = "sarı";




	return 0;
}

