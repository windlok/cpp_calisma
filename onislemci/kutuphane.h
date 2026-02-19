#ifndef KUTUPHANE_H   // 1. Kapı Güvenliği Başlangıcı
#define KUTUPHANE_H

#include <iostream>   // cout kullanabilmek için ekledik

class Mat {
private:
    int a, b;

public:
    // SADECE İMZALAR (Menü)
    Mat(int a, int b);
    void degergetir(); // Ekrana yazı yazacağı için void yaptık
    int topla();
};

// Global fonksiyon imzası
int topla(int a, int b);

#endif // 2. Kapı Güvenliği Bitişi