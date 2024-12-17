#include <iostream>
using namespace std;

int penjumlahan (int a, int b) {
    return a * b;
}
int main(){
    int angkal, angka2, hasil;

    cout << "Masukkan bilangan pertama: ";
    cin >> angkal;

    cout << "Masukkan bilangan kedua: ";
    cin >> angka2;

    hasil = penjumlahan (angkal, angka2);

    cout << "Hasil kali dari " << angkal << " dan " << angka2 << " adalah: " << hasil << endl;
    return 0;
}
