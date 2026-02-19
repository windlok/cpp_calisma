#ifndef CALISAN_H
#define CALISAN_H
#include <iostream>
#include <string>
using namespace std;


class Calisan {
protected:
	string ad;
	int id;
	double tabanmaas;
public:
	Calisan(string ad, int id, double tabanmaas) {};

	~Calisan(){
		cout << "Calisan destructor called for " << ad << endl;
	}
	virtual double maasHesaplama() = 0; // Pure virtual function
	virtual void bilgileriGoster() = 0; // Pure virtual function

};

#endif // !KUTUPHANE_H

