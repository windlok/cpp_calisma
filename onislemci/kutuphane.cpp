#include "kutuphane.h"

// 1. Kurucu (Constructor) İşlemi
Mat::Mat(int a, int b) {
    this->a = a;
    this->b = b;
}

// 2. Degergetir İşlemi
void Mat::degergetir() {
    std::cout << "a: " << a << ", b: " << b << std::endl;
}

// 3. Sınıfın Topla İşlemi
int Mat::topla() {
    return this->a + this->b;
}

// 4. Global Topla İşlemi (Sınıftan bağımsız)
int topla(int a, int b) {
    return a + b;
}