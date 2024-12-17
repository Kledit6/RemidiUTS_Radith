#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Masukkan nilai N: ";
    cin >> n;

    if (n <= 0) {
        cout << "Nilai a kilangan bulat posiť" << endl;
    return 0;
 }

    cout << "Bilangan dari 1 hingga " << n << " adalah: ";
    for (int i=1; i <= n; i++) {
        cout << i << " ";

    }

    return 0;
}
