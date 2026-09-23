#include <iostream>
#include <string>

using namespace std;
int MAX_MAHASISWA = 99;
int main() {
    string namaMahasiswa[MAX_MAHASISWA] = {"Ani", "Budi", "Citra"};

    int nilaiMahasiswa[MAX_MAHASISWA] = {85, 90, 88};

    struct Kelas {
        string nama;
        string mataKuliah;
    } kelas = {"Kelas A", "Struktur Data"};
    int i = 2;
    cout << "Nama mahasiswa: " << namaMahasiswa[i] << endl;
    cout << "Nilai mahasiswa: " << nilaiMahasiswa[i] << endl;
    cout << "Kelas: " << kelas.nama << " - " << kelas.mataKuliah << endl;

    return 0;
}