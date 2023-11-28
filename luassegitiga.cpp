#include <iostream>
using namespace std;

int main(){
    int tinggi, alas, hasil; 
    cout << endl;
    cout << "==== MENGHITUNG LUAS SEGITIGA =====" << endl;
    cout << "masukkan nilai tinggi : ";
    cin >> tinggi;
    cout << "masukkan nilai jari-jari :";
    cin >> alas;
    hasil = tinggi * (alas/2);
    cout << "hasil dari operasi adalah : " << hasil << endl;
}
