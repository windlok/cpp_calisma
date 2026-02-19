#include<iostream>
#include<string>

int toplam(int a, int b) {
	return a + b;
}

int getir(int(*fint)(int, int)) {
	int a = fint(10, 10);
	return a;
}

int main() {
	std::cout<<getir(toplam);
}