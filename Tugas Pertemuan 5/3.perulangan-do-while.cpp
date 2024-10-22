#include <iostream>
using namespace std;

int main() {
    int n;

    // Meminta input dari user
    cout << "Masukkan jumlah bintang pada baris paling atas: ";
    cin >> n;

    cout << "\nMenggunakan perulangan 'do-while':\n";
    int i = n;
    do {
        int j = 0;
        do {
            cout << "*";
            j++;
        } while (j < i);
        cout << endl;
        i--;
    } while (i > 0);

    return 0;
}
