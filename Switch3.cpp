#include <iostream>
using namespace std;

int main () {

    char jawaban;
    int skor = 0;

    cout << "Soal 1: Siapakah pemain terbaik sepanjang masa ?\n";
    cout << "a. Cristiano Ronaldo\nb. Lionel Messi\nc. Pele\n";
    cout << "Jawaban : ";
    cin >> jawaban;

    switch (jawaban)
    {
    case 'a':
        cout << "Jawaban anda benar, The Goat adalah Ronaldo\n";
        skor +=10;
        break;

    default:
        cout << "Jawaban anda salah, mereka bukan siapa- siapa\n";
        break;
    }
    
    cout << "skor kamu saat ini: " << skor << endl << endl;

    cout << "Soal 2: Siapakah pemain muda terbaik saat ini ?\n";
    cout << "a. Alejandro Garnacho\nb. Lamine Yamal\nc. Cole Palmer\n";
    cout << "Jawaban : ";
    cin >> jawaban;

    switch (jawaban)
    {
    case 'b':
        cout << "Jawaban anda benar, Yamal adalah generasi muda terbaik saat ini\n";
        skor +=10;
        break;

    default:
        cout << "Jawaban anda salah, mereka bukan siapa- siapa\n";
        break;
    }

    cout << "skor kamu saat ini : " << skor << endl << endl;

    cout << "Soal 3: Siapakah klub dengan peraihan trophy ucl terbanyak ?\n";
    cout << "a. Manchester United\nb. Barcelona\nc. Real Madrid\n";
    cout << "Jawaban : ";
    cin >> jawaban;

    switch (jawaban)
    {
    case 'c':
        cout << "Jawaban anda benar, Real Madrid adalah klub dengan trophy ucl terbanyak\n";
        skor +=10;
        break;

    default:
        cout << "Jawaban anda salah, mereka bukan siapa- siapa\n";
        break;
    }

    cout << "skor akhir kamu : " << skor << endl;

    return 0;
}