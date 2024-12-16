#include <iostream>
using namespace std;

double hitungLuas(double jariJari) {
    const double pi = 3.14159;
    return pi * (jariJari * jariJari);
}

double rataRata(int arr[], int ukuran) {
    int sum = 0;
    for (int i = 0; i < ukuran; i++) {
        sum += arr[i];
    }
    return (double)sum / ukuran;
}

long long faktorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * faktorial(n - 1);
    }
}

int main() {
    int pilihan;

    do {
        cout << "Menu Operasi\n";
        cout << "1. Hitung Luas Lingkaran\n";
        cout << "2. Rata-Rata Array\n";
        cout << "3. Faktorial\n";
        cout << "4. Keluar\n";
        cout << "Masukkan pilihan: ";
        cin >> pilihan;

        switch (pilihan) {
            case 1: {
                double jariJari;
                cout << "Masukkan jari-jari lingkaran: ";
                cin >> jariJari;
                cout << "Luas lingkaran: " << hitungLuas(jariJari) << endl;
                break;
            }
            case 2: {
                const int ukuran = 5;
                int arr[ukuran];
                cout << "Masukkan " << ukuran << " angka:\n";
                for (int i = 0; i < ukuran; i++) {
                    cin >> arr[i];
                }
                cout << "Rata-rata: " << rataRata(arr, ukuran) << endl;
                break;
            }
            case 3: {
                int angka;
                cout << "Masukkan angka: ";
                cin >> angka;
                cout << "Faktorial " << angka << ": " << faktorial(angka) << endl;
                break;
            }
            case 4:
                cout << "Terima kasih!\n";
                break;
            default:
                cout << "Pilihan salah. Silakan coba lagi.\n";
        }
    } while (pilihan != 4);

    return 0;
}
