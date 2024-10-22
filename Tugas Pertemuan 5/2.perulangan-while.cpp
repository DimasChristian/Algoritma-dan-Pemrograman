#include <iostream>
using namespace std;

int main() {
    int n;

    // Meminta input dari user
    cout << "Masukkan jumlah bintang pada baris paling atas: ";
    cin >> n;

    cout << "\nMenggunakan perulangan 'while':\n";
    int i = n;
    while (i > 0) {
        int j = 0;
        while (j < i) {
            cout << "*";
            j++;
        }
        cout << endl;
        i--;
    }

    return 0;
}
