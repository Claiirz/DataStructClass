#include <iostream>
using namespace std;
struct Mahasiswa {
    string nama;
    string nim;
    float persentaseabsen;
    Mahasiswa *next;
};
Mahasiswa mhs1 = {"Zhafran Linky Siswara", "103012400196", 100.0, NULL};
Mahasiswa mhs2 = {"Ganda Setya Ramadhana", "103012400278", 50.0, NULL};
Mahasiswa mhs3 = {"Muhammad Abrar Sinurat", "103012400406", 100.0, NULL};
Mahasiswa mhs4 = {"Farid Alvaro Sitepu", "103012500025", 100.0, NULL};
Mahasiswa mhs5 = {"Charles Nathan Marcelino", "103012500037", 100.0, NULL};
Mahasiswa mhs6 = {"Arya Awal Adriansyah", "103012500038", 100.0, NULL};
Mahasiswa mhs7 = {"Muhammad Andhika Bagaskor", "103012500044", 100.0, NULL};
Mahasiswa mhs8 = {"Mochamad Rizkyka Zainal R", "103012500055", 100.0, NULL};
Mahasiswa mhs9 = {"Nayla Fauzya Khairunnisa", "103012500071", 100.0, NULL};
Mahasiswa mhs10 = {"Nayaga Radithya", "103012500072", 100.0, NULL};
Mahasiswa mhs11 = {"Rillo Raihan Dwi Satria", "103012500078", 100.0, NULL};
Mahasiswa mhs12 = {"Al Fathir Abimanyu Gazaal", "103012500088", 100.0, NULL};
Mahasiswa mhs13 = {"Muhammad Dzaki Lukmanul H", "103012500092", 100.0, NULL};
Mahasiswa mhs14 = {"Samuel Dipta Yogi Taruna", "103012500099", 100.0, NULL};
Mahasiswa mhs15 = {"Ahmad Dhani Nur Ridwan", "103012500104", 100.0, NULL};
Mahasiswa mhs16 = {"Muhammad Rafiki Hannan", "103012500158", 100.0, NULL};
Mahasiswa mhs17 = {"Ahmad Radhin Praditya", "103012500217", 100.0, NULL};
Mahasiswa mhs18 = {"Maulana Naufal Mahrus", "103012500226", 100.0, NULL};
Mahasiswa mhs19 = {"Nabila Nurul Alifah", "103012500236", 50.0, NULL};
Mahasiswa mhs20 = {"Abidzar Alghifari", "103012500243", 100.0, NULL};
Mahasiswa mhs21 = {"Revan Putra Andrian", "103012500266", 100.0, NULL};
Mahasiswa mhs22 = {"Tsania Rahma Haliza", "103012500276", 100.0, NULL};
Mahasiswa mhs23 = {"Lazhi Nadri Ramadhan", "103012500295", 100.0, NULL};
Mahasiswa mhs24 = {"Muhammad Zein", "103012500304", 50.0, NULL};
Mahasiswa mhs25 = {"Nabila Syakira Andriani S", "103012500315", 100.0, NULL};
Mahasiswa mhs26 = {"Muhammad Ghassan Firdian", "103012500325", 100.0, NULL};
Mahasiswa mhs27 = {"Nugraha Akmal Yoga", "103012500331", 100.0, NULL};
Mahasiswa mhs28 = {"Rifqi Bhadrika Adwitiya", "103012500339", 100.0, NULL};
Mahasiswa mhs29 = {"Fauzan Nur Abdillah", "103012500349", 100.0, NULL};
Mahasiswa mhs30 = {"Aninda Marethaningtyas CE", "103012500389", 100.0, NULL};
Mahasiswa mhs31 = {"Lukman Hakim", "103012500397", 100.0, NULL};
Mahasiswa mhs32 = {"Rayya Izzatul Mila", "103012530009", 100.0, NULL};
Mahasiswa mhs33 = {"Raden Hasbi Radhitya Nata", "103012530017", 100.0, NULL};
Mahasiswa mhs34 = {"Rayhan Muzab Fauzan", "103012530021", 100.0, NULL};
Mahasiswa mhs35 = {"Gaza Raushan Fikri", "103012530033", 50.0, NULL};
Mahasiswa mhs36 = {"Rayyan Nakhlah Prayata", "103012530040", 100.0, NULL};
Mahasiswa mhs37 = {"Iman Abdi Ilahi", "103012530045", 100.0, NULL};
Mahasiswa mhs38 = {"Duncan Agastya Kurniawan", "103012530055", 100.0, NULL};
Mahasiswa mhs39 = {"Adam Teguh Maulaanaa", "*1301213218", 50.0, NULL};
Mahasiswa mhs40 = {"Rafli Nujjiya Maulana", "*1301223394", 50.0, NULL};

int main() {

    mhs1.next = &mhs2;
    mhs2.next = &mhs3;
    mhs3.next = &mhs4;
    mhs4.next = &mhs5;
    mhs5.next = &mhs6;
    mhs6.next = &mhs7;
    mhs7.next = &mhs8;
    mhs8.next = &mhs9;
    mhs9.next = &mhs10;
    mhs10.next = &mhs11;
    mhs11.next = &mhs12;
    mhs12.next = &mhs13;
    mhs13.next = &mhs14;
    mhs14.next = &mhs15;
    mhs15.next = &mhs16;
    mhs16.next = &mhs17;
    mhs17.next = &mhs18;
    mhs18.next = &mhs19;
    mhs19.next = &mhs20;
    mhs20.next = &mhs21;
    mhs21.next = &mhs22;
    mhs22.next = &mhs23;
    mhs23.next = &mhs24;
    mhs24.next = &mhs25;
    mhs25.next = &mhs26;
    mhs26.next = &mhs27;
    mhs27.next = &mhs28;
    mhs28.next = &mhs29;
    mhs29.next = &mhs30;
    mhs30.next = &mhs31;
    mhs31.next = &mhs32;
    mhs32.next = &mhs33;
    mhs33.next = &mhs34;
    mhs34.next = &mhs35;
    mhs35.next = &mhs36;
    mhs36.next = &mhs37;
    mhs37.next = &mhs38;
    mhs38.next = &mhs39;
    mhs39.next = &mhs40;
    mhs40.next = NULL;

    Mahasiswa *current = &mhs1;

    while (current != NULL) {
        cout << "Nama       : " << current->nama << endl;
        cout << "NIM        : " << current->nim << endl;
        cout << "Persentase : " << current->persentaseabsen << "%" << endl;
        current = current->next;
    }

    return 0;
}