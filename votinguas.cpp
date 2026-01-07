#include <iostream>
using namespace std;

int main() {
    int pilihan;
    int suaraA = 0, suaraB = 0, suaraC = 0;

    cout << "=== Sistem Voting ===\n";
    cout << "1. Vote Kandidat A\n";
    cout << "2. Vote Kandidat B\n";
    cout << "3. Vote Kandidat C\n";
    cout << "0. Selesai Voting\n";
    
    do {
        cout << "Masukkan pilihan Anda: ";
        cin >> pilihan;

        if (pilihan == 1) {
            suaraA++;
        } else if (pilihan == 2) {
            suaraB++;
        } else if (pilihan == 3) {   
            suaraC++;
        } else if (pilihan == 0) {
            cout << "Voting selesai.\n";
        } else {
            cout << "Pilihan tidak valid. Silahkan coba lagi.\n";
        }

    } while (pilihan != 0);

    cout << "\n=== Hasil Voting ===\n";
    cout << "Kandidat A: " << suaraA << " suara\n";
    cout << "Kandidat B: " << suaraB << " suara\n";
    cout << "Kandidat C: " << suaraC << " suara\n";

    return 0;
}