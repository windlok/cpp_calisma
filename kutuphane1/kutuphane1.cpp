#include<iostream>
using namespace std;

namespace btk {
	int sayi = 100;
	void merhaba(){}
}
void merhaba() {
	cout << "Merhaba Dünya!" << endl;
}
int main()
{

	btk::merhaba();

	return 0;
}