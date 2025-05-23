#include <iostream>
using namespace std;

int main () {

    int pilihanpemain;

    cout << "Masukkan Nama Pemain Favorit anda, pilih angka 1 - 3 " << endl;
    cout << "1.Neymar / 2.Ronaldo / 3.Messi" << endl;
    cout << "Pilihan anda = ";
    cin >> pilihanpemain;

    switch (pilihanpemain)
    {
    case 1:
        cout << "Neymar Jr adalah seorang pemain sepak bola professional asal brazil yang sekarang bermain untuk klub Santos" << endl;
        break;
    case 2:
        cout << "Cristiano Ronaldo Adalah seorang pemain sepak bola  professional asal portugal yang sekarang bermain  untuk Al Nassr" << endl;
        break;
    case 3:
        cout << "Lionel Messi adalah seorang pemain sepak bola professional asal argentina yang sekarang bermain di Inter Miami" << endl;
        break;

    default:
        cout << "Nama pemain tidak ada dipilihan " << endl;
    }
    return 0;
}