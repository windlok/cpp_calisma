#include<iostream>
#include<string>

int main() {
	int puanlar[4]{ 10,11,12,13 };

	int* ptr = puanlar+4;

	std::cout << *ptr;
}