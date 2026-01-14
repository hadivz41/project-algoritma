#include <iostream>
#include <vector>
using namespace std;

struct Karyawan {
    int id;
    string nama;
    string jabatan;
    int gaji;
};

vector<Karyawan> dataKaryawan;

void tambahKaryawan() {
    Karyawan k;
    cout << "ID: ";
    cin >> k.id;
    cout << "Nama: ";
    cin >> k.nama;
    cout << "Jabatan: ";
    cin >> k.jabatan;
    cout << "Gaji: ";
    cin >> k.gaji;
    dataKaryawan.push_back(k);
    cout << "Data ditambahkan\n";
}

void tampilKaryawan() {
    if (dataKaryawan.empty()) {
        cout << "Data Kosong\n";
        return;
    }
    for (int i = 0; i < dataKaryawan.size(); i++) {
        cout << "\nID: " << dataKaryawan[i].id;
        cout << "\nNama: " << dataKaryawan[i].nama;
        cout << "\nJabatan: " << dataKaryawan[i].jabatan;
        cout << "\nGaji: " << dataKaryawan[i].gaji << endl;
    }
}

void editKaryawan() {
    int id;
    cout << "ID: ";
    cin >> id;
    for (int i = 0; i < dataKaryawan.size(); i++) {
        if (dataKaryawan[i].id == id) {
            cin.ignore();
            cout << "Nama Baru: ";
            getline(cin, dataKaryawan[i].nama);
            cout << "Jabatan Baru: ";
            getline(cin, dataKaryawan[i].jabatan);
            cout << "Gaji Baru: ";
            cin >> dataKaryawan[i].gaji;
            cout << "Data Diubah\n";
            return;
        }
    }
}

void hapusKaryawan() {
    int id;
    cout << "ID: ";
    cin >> id;
    for (int i = 0; i < dataKaryawan.size(); i++) {
        if (dataKaryawan[i].id == id) {
            dataKaryawan.erase(dataKaryawan.begin() + i);
            cout << "Data Dihapus\n";
            return;
        }
    }
    cout << "Data Tidak Ditemukan\n";
}

int main() {
    int pilihan;
    do {
        cout << "\n======MENU======\n";
        cout << "1. Tambah karyawan\n";
        cout << "2. Tampilkan karyawan\n";
        cout << "3. Edit karyawan\n";
        cout << "4. Hapus karyawan\n";
        cout << "0. Keluar\n";
        cin >> pilihan;

        switch (pilihan) {
            case 1: tambahKaryawan(); break;
            case 2: tampilKaryawan(); break;
            case 3: editKaryawan(); break;
            case 4: hapusKaryawan(); break;
            case 0: cout << "Program selesai\n"; break;
            default: cout << "Pilihan tidak valid\n"; break;
        }
    }while (pilihan != 0);
    return 0;
}