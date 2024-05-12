// Kasir Makanan Dan Minuman //
// Author : Hafizh H Asyhari //

#include <iostream>
#include <string.h>
using namespace std;                                                                  // Gunakan namespace standar untuk menghindari penulisan std:: berulang kali //

int main() {
    int x;                                                                            // Deklarasikan variabel integer 'x' untuk menyimpan jumlah pesanan //
    cout << "Masukkan jumlah data yang akan diinput : ";                              // Meminta pengguna untuk memasukkan jumlah pesanan //
    cin >> x;

    int harga[x];
    string makanan[x];
    string minuman[x];

    for (int i = 0; i < x; i++) {
        cout << "Data ke " << i+1 << endl;
        cout << "Masukkan makanan : ";
        cin >> makanan[i];
        cout << "Masukkan minuman : ";
        cin >> minuman[i];
        cout << "Masukkan harga : ";
        cin >> harga[i];
    }

    cout << endl;
    for (int j = 0; j < x; j++) {
        cout << "Data ke " << j+1 << endl;
        cout << "Makanan " << makanan[j]
        << ", Minuman " << minuman[j] 
        << ", Harga " << harga[j]  
        << endl;
    }
    return 0;
}
