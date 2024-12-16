#include <iostream>
using namespace std;

void tukarAngka(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void kalikanDengan5(int* angka) {
    *angka *= 5;
}

int main() {
    int pilihan;
    int angka1, angka2;
    int angka;

    do {
        cout << "Menu Operasi\n";
        cout << "1. Tukar Dua Angka\n";
        cout << "2. Kalikan dengan 5\n";
        cout << "3. Keluar\n";
        cout << "Masukkan pilihan: ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                cout << "Masukkan angka pertama: ";
                cin >> angka1;
                cout << "Masukkan angka kedua: ";
                cin >> angka2;

                cout << "Sebelum ditukar:\n";
                cout << "Angka 1: " << angka1 << endl;
                cout << "Angka 2: " << angka2 << endl;

                tukarAngka(&angka1, &angka2);

                cout << "Setelah ditukar:\n";
                cout << "Angka 1: " << angka1 << endl;
                cout << "Angka 2: " << angka2 << endl;
                break;
            case 2:
                cout << "Masukkan angka: ";
                cin >> angka;

                cout << "Sebelum dikalikan: " << angka << endl;
                kalikanDengan5(&angka);
                cout << "Setelah dikalikan dengan 5: " << angka << endl;
                break;
            case 3:
                cout << "Terima kasih!\n";
                break;
            default:
                cout << "Pilihan salah. Silakan coba lagi.\n";
        }
    } while (pilihan != 3);

   return 0;
}
