#include <iostream>
#include <string>

using namespace std;

struct Mahasiswa {
    string nim;
    string nama;
    string kelas;
    double nilai;
};

int main() {
    // ==========================================
    // 1. TIPE DATA DASAR & ARRAY
    // ==========================================
    cout << "==================================================" << endl;
    cout << "  1. TIPE DATA DASAR & ARRAY" << endl;
    cout << "==================================================" << endl;

    double nilaiUjian = 85.5;
    char indeksNilai = 'A';
    bool isLulus = true;

    cout << "Nilai Ujian (double) : " << nilaiUjian << endl;
    cout << "Indeks Nilai (char)  : " << indeksNilai << endl;
    cout << "Status Lulus (bool)  : " << (isLulus ? "LULUS" : "TIDAK LULUS") << endl;
    cout << endl;

    
    Mahasiswa daftarMhs[3] = {
        {"", "Shiddiq", "IF-A", 85.5},
        {"", "Budi", "IF-B", 90},
        {"", "Siti", "IF-A", 78.25}
    };

    
    for (int i = 0; i < 3; i++) {
        cout << "Mahasiswa ke-" << (i + 1) << ": " << daftarMhs[i].nama 
             << " | Kelas: " << daftarMhs[i].kelas 
             << " | Nilai: " << daftarMhs[i].nilai << endl;
    }
    cout << endl;

    // ==========================================
    // 2. ABSTRACT DATA TYPE 
    // ==========================================
    cout << "==================================================" << endl;
    cout << "  2. ABSTRACT DATA TYPE (ADT - STRUCT)" << endl;
    cout << "==================================================" << endl;

    Mahasiswa mhs1 = {"2023001", "Shiddiq", "Data Structure - A", 95};

    cout << "[Objek ADT mhs1]" << endl;
    cout << "NIM   : " << mhs1.nim << endl;
    cout << "Nama  : " << mhs1.nama << endl;
    cout << "Kelas : " << mhs1.kelas << endl;
    cout << "Nilai : " << mhs1.nilai << endl;
    cout << endl;

    // Array tambahan untuk demonstrasi alamat memori
    double daftarNilai[2] = {85.5, 90.0};

    // ==========================================
    // 3. ADDRESS 
    // ==========================================
    cout << "==================================================" << endl;
    cout << "  3. ADDRESS (ALAMAT MEMORI RAM)" << endl;
    cout << "==================================================" << endl;

    cout << "Alamat memori variabel mhs1 (&mhs1)           : " << &mhs1 << endl;
    cout << "Alamat memori mhs1.nama (&mhs1.nama)          : " << &mhs1.nama << endl;
    cout << "Alamat memori mhs1.nilai (&mhs1.nilai)        : " << &mhs1.nilai << endl;
    cout << "Alamat memori elemen array daftarNilai[0]     : " << &daftarNilai[0] << endl;
    cout << "Alamat memori elemen array daftarNilai[1]     : " << &daftarNilai[1] << endl;
    cout << endl;

    // ==========================================
    // 4. POINTER & DEREFERENCING
    // ==========================================
    cout << "==================================================" << endl;
    cout << "  4. POINTER & DEREFERENCING" << endl;
    cout << "==================================================" << endl;

    Mahasiswa *ptrMhs = &mhs1;

    cout << "Isi variabel ptrMhs (Alamat memori mhs1)      : " << ptrMhs << endl;
    cout << "Akses data via Pointer (ptrMhs->nama)         : " << ptrMhs->nama << endl;
    cout << "Akses data via Dereference (*ptrMhs).nilai    : " << (*ptrMhs).nilai << endl;

    // Mengubah nilai variabel melalui pointer
    ptrMhs->nilai = 98;
    cout << "Nilai mhs1 setelah diubah via Pointer         : " << mhs1.nilai << endl;

    return 0;
}