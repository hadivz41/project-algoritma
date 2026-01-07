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
    cin.ignore();
    cout << "Nama: ";
    getline(cin, k.nama);
    cout << "Jabatan: ";
    getline(cin, k.jabatan);
    cout << "Gaji: ";
    cin >> k.gaji;
    dataKaryawan.push_back(k);
    cout << "Data ditambahkan\n";
}

void tampilKaryawan() {
    if (dataKaryawan.empty()) {
        cout << "Data kosong\n";
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
            cout << "Nama baru: ";
            getline(cin, dataKaryawan[i].nama);
            cout << "Jabatan baru: ";
            getline(cin, dataKaryawan[i].jabatan);
            cout << "Gaji baru: ";
            cin >> dataKaryawan[i].gaji;
            cout << "Data diubah\n";
            return;
        }
    }
    cout << "ID tidak ditemukan\n";
}

void hapusKaryawan() {
    int id;
    cout << "ID: ";
    cin >> id;
    for (int i = 0; i < dataKaryawan.size(); i++) {
        if (dataKaryawan[i].id == id) {
            dataKaryawan.erase(dataKaryawan.begin() + i);
            cout << "Data dihapus\n";
            return;
        }
    }
    cout << "ID tidak ditemukan\n";
}

int main() {
    int pilihan;
    do {
        cout << "\n=== MENU UTAMA ===\n";
        cout << "1. Tambah Data Karyawan\n";
        cout << "2. Tampilkan Data Karyawan\n";
        cout << "3. Edit Data Karyawan\n";
        cout << "4. Hapus Data Karyawan\n";
        cout << "0. Keluar\n";
        cout << "Pilih menu: ";
        cin >> pilihan;

        switch (pilihan) {
            case 1: tambahKaryawan(); break;
            case 2: tampilKaryawan(); break;
            case 3: editKaryawan(); break;
            case 4: hapusKaryawan(); break;
            case 0: cout << "Program selesai\n"; break;
            default: cout << "Menu tidak valid\n";
        }
    } while (pilihan != 0);

    return 0;
}
