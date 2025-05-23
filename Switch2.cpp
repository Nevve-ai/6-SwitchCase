#include <iostream>
using namespace std;

int main () {
    
    int pilihanminuman = 3;

    switch (pilihanminuman)
    {
    case 1:
        cout << "Anda memilih Kopi" << endl;
        break;
    case 2:
        cout << "Anda memilih Teh" << endl;
        break;
    case 3:
        cout << "Anda memilih Susu" << endl;
        break;
    
    default:
        cout << "Pilihan tidak tersedia" << endl;  
        break;
    }
    return 0;

}