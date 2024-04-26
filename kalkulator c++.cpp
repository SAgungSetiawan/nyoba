#include<iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

int angka1,angka2;
void menu() {
    char select;
    do {
        system("cls");
        cout << "SELAMAT DATANG DI MENU KALKULATOR DUO"<<endl;
        cout << "1. Penjumlahan" << endl;
        cout << "2. Perkalian" << endl;
        cout << "3. Pengurangan" << endl;
        cout << "4. Pembagian" << endl;
        cout << "Tekan 'X' jika ingin keluar" << endl;
        cout << "Pilih menu yang diinginkan (1 s.d. 4) : " ;	
        char op = _getche();
        if (op == 'X' || op == 'x') {
            exit(0);
        }
        do {
            if (op == '1') {
                system("cls");
                cout<< "OPERASI PENJUMLAHAN"<<endl;
                cout << "Masukan angka pertama: "; cin >> angka1;
                cout << "Masukan angka kedua: ";cin >> angka2;
                cout << "Hasil penjumlahan: " << angka1 + angka2;
            } else if (op == '2') {
                system("cls");
                cout<< "OPERASI PERKALIAN"<<endl;
                 cout << "Masukan angka pertama: "; cin >> angka1;
                cout << "Masukan angka kedua: ";cin >> angka2;
                cout << "Hasil perkalian: " << angka1 * angka2;
            } else if (op == '3') {
                system("cls");
                cout<< "OPERASI PENGURANGAN"<<endl;
                 cout << "Masukan angka pertama: "; cin >> angka1;
                cout << "Masukan angka kedua: ";cin >> angka2;
                cout << "Hasil pengurangan: " << angka1 - angka2;
            } else if (op == '4') {
                system("cls");
                cout<< "OPERASI PEMBAGIAN"<<endl;
               cout << "Masukan angka pertama: "; cin >> angka1;
                cout << "Masukan angka kedua: ";cin >> angka2;
                if (angka2 != 0) {
                    cout << "Hasil pembagian: " << angka1/ angka2;
                } else {
                    cout << "Hasil pembagian dengan nol tidak terdefinisi.";
                }
            }
            cout << "\n\nAnda ingin menghitung lagi? (Y/T): ";
            cin >> select;
        } while (select == 'Y' || select == 'y');
    } while (select == 'T' || select == 't');
}
int main() {
    menu();
    return 0;
}

