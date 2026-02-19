#include<iostream>
class silah {
public:
	silah() {
		std::cout << std::endl << "Silah nesnesi oluşturuldu." << std::endl;
	}
	~silah() {
		std::cout << std::endl << "Silah nesnesi yok edildi." << std::endl;
	}
};
int main() {
	int adet = 0;

	std::cout << "dizinin boyutu nedir" << std::endl;
	std::cin >> adet;
	int* dizi=new int[adet];

	for (int i = 0; i < adet; i++)
	{
		std::cin >> dizi[i];
	}
	std::cout << "Dizinin elemanları: " << std::endl;
	for (int i = 0; i < adet; i++)
	{
		std::cout << dizi[i];
	}
	delete[] dizi; // Bellekteki diziyi serbest bırakır	
	//int* a = new int; // Bellekte bir tamsayı için yer ayırır
	//*a = 42; // Ayırdığımız belleğe 42 değerini atar

	//std::cout << "Bellekteki Deger: " << *a << std::endl; // Bellekteki değeri ekrana yazdırır
	//std::cout << "Bellegin Adresi: " << a << std::endl; // Bellekteki değeri ekrana yazdırır

	//delete a; // Bellekteki alanı serbest bırakır

	//silah* s1 = new silah; // Bellekte bir silah nesnesi için yer ayırır

	//delete s1;
	silah* s1;

	{

		s1 = new silah;
	}
	delete s1;

	return 0;
}