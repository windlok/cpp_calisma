#include <iostream>
class Silah {
public:
	int d{};

    Silah() {
		std::cout << "Silah olusturuldu." << std::endl;
    }
	~Silah() {
		std::cout << "Silah yok edildi." << std::endl;
	}
};
int main()
{
	std::shared_ptr<Silah> ptr = std::make_shared<Silah>();
	std::shared_ptr<Silah> ptr2 = ptr;

	std::cout<< ptr->d << std::endl << "ptr kullaniliyor." << std::endl;
	
	std::cout << "ptr gercek adresi: " << ptr.get() << std::endl;
	std::cout << "ptr referans sayisi: " << ptr.use_count() << std::endl;
}
