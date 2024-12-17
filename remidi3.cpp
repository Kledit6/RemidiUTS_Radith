#include <iostream>
using namespace std;

int main() {
    int n, jumlah = 0;

    cout << "Masukkan nilai N: ";
    cin >> n;

    for (int i = 2; i <= n; i += 2) {
        jumlah += i;
    }

    cout << "Jumlah bilangan genap dari 1 hingga " << n << " adalah: " << jumlah << endl;

return 0;
}
