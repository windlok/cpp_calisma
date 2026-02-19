#include <iostream>
#include "kutuphane.h" // Sadece menüyü çağırıyoruz, cpp'yi değil!

int main()
{
    // Global fonksiyonu deniyoruz
    std::cout << "Global Toplam: " << topla(5, 10) << std::endl;

    // Mat sınıfını deniyoruz
    Mat mat(3, 4);

    mat.degergetir(); // Ekrana a ve b'yi yazdırır
    std::cout << "Mat sinifinin topla fonksiyonu: " << mat.topla() << std::endl;

    return 0;
}