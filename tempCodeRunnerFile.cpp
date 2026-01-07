#include <iostream>
#include <vector>
using namespace std;

struct Karyawan {
    int id;
    string nama;
    string posisi;
    int gaji;
};

vector<Karyawan> datakaryawan;

void tambahKaryawan(int id, const string& nama, const string& posisi, int gaji) {
    Karyawan k;
    k.id = id;
    k.nama = nama;
    k.posisi = posisi;
    k.gaji = gaji;
    cin >> k.posisi;
    cout << "Gaji: ";
    cin >> k.gaji;
    datakaryawan.push_back(k);
    cout << "Karyawan berhasil ditambahkan!" << endl;
}

void tampilkanKaryawan() {
    cout << "Daftar Karyawan:" << endl;
    for (const auto& k : datakaryawan) {
        cout << "ID : " << k.id << ", Nama: " << k.nama << ", Posisi: " << k.posisi << ", Gaji: " << k.gaji << endl;
    }
}

void editKaryawan(int id) {
    for (auto& k : datakaryawan) {
        if (k.id == id) {
            cout << "Masukan data baru untuk karyawan dengan ID " << id << ":" << endl;
            cout << "Nama: ";
            cin >> k.nama;
            cout << "Posisi: ";
            cin >> k.posisi;
            cout << "Gaji: ";
            cin >> k.gaji;
            cout << "Data karyawan berhasil diperbarui!" << endl;
            return;
        }
    }
    cout << "Karyawan dengan ID " << id << " tidak ditemukan!" << endl;
}

void hapusKaryawan(int id) {
    for (auto it = datakaryawan.begin(); it != datakaryawan.end(); ++it) {
        if (it->id == id) {
            datakaryawan.erase(it);
            cout << "Karyawan dengan ID " << id << " berhasil dihapus!" << endl;
            return;
        }
    }
    cout << "Karyawan dengan ID " << id << " tidak ditemukan!" << endl;
}

int main() {
    int pilihan;
    do {
        cout << "Menu Manajemen Data Karyawan:" << endl;
        cout << "1. Tambah Karyawan" << endl;
        cout << "2.Tampilkan Karyawan" << endl;
        cout << "3.Edit Karyawan" << endl;
        cout << "4.Hapus Karyawan" << endl;
        cout << "5.Keluar" << endl;
        cout << "Pilih opsi (1-5): ";
        cin >> pilihan;

        switch (pilihan) {
            case 1: {
                int id, gaji;
                string nama, posisi;
                cout << "Masukan ID: ";
                cin >> id;
                cout << "Masukan Nama: ";
                cin >> nama;
                cout << "Masukan Posisi: ";
                cin >> posisi;
                cout << "Masukan Gaji: ";
                cin >> gaji;
                tambahKaryawan(id, nama, posisi, gaji);
                break;
            }
            case 2: tampilkanKaryawan(); break;
            case 3: {
                int id;
                cout << "Masukan ID karyawan yang akan diedit: ";
                cin >> id;
                editKaryawan(id);
                break;
            }
            case 4: {
                int id;
                cout << "Masukan ID karyawan yang akan dihapus: ";
                cin >> id;
                hapusKaryawan(id);
                break;
            }
            case 5: cout << "Keluar dari program." << endl; break;
            default: cout << "Opsi tidak valid. Silahkan coba lagi." << endl;
        }
    } while (pilihan != 0);

    return 0;
}