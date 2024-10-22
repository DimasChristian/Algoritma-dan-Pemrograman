#include <iostream>
using namespace std;

int main() {
    int n;

    // Meminta input dari user
    cout << "Masukkan jumlah bintang pada baris paling atas: ";
    cin >> n;

    cout << "\nMenggunakan perulangan 'for':\n";
    for (int i = n; i > 0; i--) {
        for (int j = 0; j < i; j++) {
            cout << "*";
        }
        cout << endl;
    }
}
