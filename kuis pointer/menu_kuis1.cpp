#include <iostream>
using namespace std;


int kali(int* a, int* b) {
    return (*a) * (*b);
}

int maksimal(int a, int b) {
    return (a > b) ? a : b;
}

string cekganjilgenap(int* angka) {
    if (*angka % 2 == 0) {
        return "Genap";
    } else {
        return "Ganjil";
    }
}

int main() {
    int pilihan;
    int angka1, angka2;

    do {
        cout << "Menu Operasi Matematika\n";
        cout << "1. Perkalian Dua Angka\n";
        cout << "2. Nilai Terbesar Dua Angka\n";
        cout << "3. Cek Ganjil/Genap\n";
        cout << "4. Keluar\n";
        cout << "Masukkan pilihan: ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                cout << "Masukkan angka pertama: ";
                cin >> angka1;
                cout << "Masukkan angka kedua: ";
                cin >> angka2;
                cout << "Hasil perkalian: " << kali(&angka1, &angka2) << endl;
                break;
            case 2:
                cout << "Masukkan angka pertama: ";
                cin >> angka1;
                cout << "Masukkan angka kedua: ";
                cin >> angka2;
                cout << "Nilai terbesar: " << maksimal(angka1, angka2) << endl;
                break;
            case 3:
                cout << "Masukkan angka: ";
                cin >> angka1;
                cout << angka1 << " adalah " << cekganjilgenap(&angka1) << endl;
                break;
            case 4:
                cout << "Terima kasih!\n";
                break;
            default:
                cout << "Pilihan salah. Silakan coba lagi.\n";
        }
    } while (pilihan != 4);

    return 0;
}


