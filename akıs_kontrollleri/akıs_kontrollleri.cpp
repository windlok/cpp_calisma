#include <iostream>

int main()
{
    int a;
    int b;
    char islem;
    std::cout << "a sayisini giriniz:";
    std::cin >> a;
    std::cout << "b sayisini giriniz:";
    std::cin >> b;
    std::cout << "islem seciniz + - * / :" << std::endl;
    std::cin >> islem;
    if (islem=='+')
    {
        std::cout << a+b;
    }
    if (islem == '-')
    {
        std::cout << a - b;
    }
    if (islem == '*')
    {
        std::cout << a * b;
    }
    if (islem == '/')
    {
        std::cout << a / b;
    }
}
