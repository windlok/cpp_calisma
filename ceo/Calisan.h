#ifndef CALISAN_H
#define CALISAN_H
#include <iostream>
#include <string>


class Calisan {
protected:
	std::string ad;
	int id;
	double tabanmaas;
public:
	Calisan(std::string ad, int id, double tabanmaas);

	virtual ~Calisan();
	virtual double maasHesaplama() = 0; // Pure virtual function
	virtual void bilgileriGoster() = 0; // Pure virtual function

};

#endif // !KUTUPHANE_H

