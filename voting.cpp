#include <iostream>
using namespace std;

int main() {
    int pilihan;
    int suaraA = 0, suaraB = 0, suaraC = 0;
    cout << "=== Sistem Voting Sederhana ===" << endl;
    cout << "1. Kandidat A\n";
    cout << "2. Kandidat B\n";
    cout << "3. Kandidat C\n";
    cout << "0. Selesai Voting\n";

    do {
        cout << "\nMaksukan pilihan: ";
        cin >> pilihan;

        if (pilihan == 1) {
            suaraA++;
        } else if (pilihan == 2) {
            suaraB++;
        } else if (pilihan == 3) {
            suaraC++;
        } else if (pilihan != 0) {
            cout << "Pilihan tidak valid\n";
        }
    } while (pilihan != 0);
    cout << "\n=== Hasil Voting ===\n";
    cout << "Kandidat A: " << suaraA << " suara\n";
    cout << "Kandidat B: " << suaraB << " suara\n";
    cout << "Kandidat C: " << suaraC << " suara\n";

    return 0;
}