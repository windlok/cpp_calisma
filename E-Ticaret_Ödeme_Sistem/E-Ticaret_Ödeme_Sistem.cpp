#include<iostream>
#include<string>
using namespace std;

class PaymentSystem {
protected:
	string sahip;
	int bakiye;
public:
	PaymentSystem(string s,int b) {
		sahip = s;
		bakiye = b;
	}
	virtual void odemeYap(int a) = 0; // Saf sanal fonksiyon
};

class CreditCard : public PaymentSystem {
public:
	CreditCard(string s,int b) : PaymentSystem(s,b) {
	}
	void odemeYap(int a) override {
		if (a < 0) {
			cout << "gecerli bir tutar giriniz";
		}
		else
		{
			bakiye -= a;
			cout << sahip << " kredi karti ile odeme yapildi." << endl << "Bakiye :" << bakiye;
			
		}
		
	}
};
class Bitcoin : public PaymentSystem {
public:
	Bitcoin(string s,int b) : PaymentSystem(s,b) {
	}
	void odemeYap(int a) override {
		if (a < 0) {
			cout << "gecerli bir tutar giriniz";
		}
		else
		{
			bakiye -= a;
			cout << endl << sahip << " Bitcoin ile odeme yapildi." << endl << "Bakiye :" << bakiye;
			
		}
		
	}
};
void sanalpos(PaymentSystem* ps, int a) {
	ps->odemeYap(a);
}
int main() {
	CreditCard cc("ahmet", 1000);
	Bitcoin btc("mehmet", 5000);

	sanalpos(&cc, 200); // Kredi kartı ile ödeme yap


	return 0;
}