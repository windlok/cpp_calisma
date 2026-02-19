#include <iostream>
#include<string>
using namespace std;

class Silah {
    public:
    int* a =nullptr;
	int* b =nullptr;
    Silah(int toplambirincisayi,int toplamikincisayi){
        a = new int;
		b = new int;

		*a = toplambirincisayi;
		*b = toplamikincisayi;
    }
    ~Silah() {
        delete a;
        delete b;
        cout << "Silah sınıfının yıkıcı fonksiyonu çalıştı." << endl;
        
    }
    
};

int main()
{
	Silah* silah1 = new Silah(10, 20);
    
	cout << "Silah 1'in birinci sayısı: " << *silah1->a << endl;
}
