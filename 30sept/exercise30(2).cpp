#include <iostream>

using namespace std;

string nama[40];
string nim[40];
float persentaseabsen[40];

int main(){
int n,i;
cout << "Masukkan Jumlah Mahasiswa : ";
cin >> n;
for (i=0;i<n;i++){
    cout<<"Masukkan Nama Mahasiswa : ";
    cin>>nama[i];
    cout<<"Masukkan NIM Mahasiswa : ";
    cin>>nim[i];
    cout<<"Masukkan Persentase Absen Mahasiswa : ";
    cin>>persentaseabsen[i];

    }
}