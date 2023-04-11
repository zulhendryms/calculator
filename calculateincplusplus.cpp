#include <iostream>
using namespace std;

int main() {
    int num1, num2,r;
    cout << "Pilih Operator \n";
    cout << "1. Tambah (+) \n";
    cout << "2. Pengurangan (-) \n";
    cout << "3. Pembagian (/) \n";
    cout << "4. Perkalian (*) \n";
    cout << " \n";
    cout << " \n";
    cin >> r;

    switch(r){

       case 1:
       cout << "input angka pertama\n";
       cin >> num1;
       cout << "input angka kedua\n";
       cin >> num2;
       cout << "hasilnya :" << num1 + num2;
       break;

       case 2:
       cout << "input angka pertama\n";
       cin >> num1;
       cout << "input angka kedua\n";
       cin >> num2;
       cout << "hasilnya :" << num1 - num2;
       break;

       case 3:
       cout << "input angka pertama\n";
       cin >> num1;
       cout << "input angka kedua\n";
       cin >> num2;
        if( num2 == 0 )
        {
            cout << "Error Divide by Zero" << endl;
        }

       cout << "hasilnya :" << num1 / num2;
       break;


       case 4:
       cout << "input angka pertama\n";
       cin >> num1;
       cout << "input angka kedua\n";
       cin >> num2;
       cout << "hasilnya :" << num1 * num2;
       break;

       default:
       cout << "Anda Salah Input";

    }


    return 0;
    }
