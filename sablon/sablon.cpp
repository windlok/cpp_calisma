#include <iostream>
template<typename T>
T max(T a, T b) {
        return (a > b) ? a : b;
}
template<typename C>

class mat {
public:
    C a{};
    C b{};

    C topla(C a,C b) {
        return a + b;
	}
};
int max(int a, int b) {
        return (a > b) ? a : b;

}
int main()
{
    std::cout << max(16,50)<<std::endl;
	std::cout << "-------------------\n";
	std::cout << max<>(16.5, 50.1);
}
