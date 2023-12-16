#include <iostream>
#include <windows.h>

using namespace std;

// Fungsi Tabel / Output
void gotoxy(int x, int y){
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}

// Deklarasi Menggunakan Array
string elektronik[11]={"Komputer", "Handphone", "CD/DVD", "Air Conditioner/AC", 
"Cofee Maker", "Lampu", "Blender", "Water Dispenser", "Lemari Pendingin", "Mesin Cuci", "Rice Cooker"};

string nonElektronik[11]={"Kompor", "Rak Dapur", "Alat Masak", "Pisau", "Sendok Garpu", 
"Piring", "Tudung Saji", "Wadah Bumbu Dapur", "Kain", "Serbet", "Lemari"};
int pil;
string kategori;

// Function Pilihan
bool pilihan1 (){
    if(pil == 1){
        return true;
    } else {
        return false;
    }
} 

bool pilihan2 (){
    if(pil == 2){
        return true;
    } else {
        return false;
    }
}

// Function Benda
void tampilan (string lihat[]){
   
    if(pilihan1()){
    for (int a = 0; a < 9; a++){
    cout <<"| "<< a + 1 << ". |                 " << lihat[a] <<  endl;
    } for (int b = 9; b < 11; b++){
        cout <<"| "<< b + 1 << ".|                 " << lihat[b] <<  endl;
    }
} else if(pilihan2()){
    for (int a = 0; a < 9; a++){
    cout <<"| "<< a + 1 << ". |                 " << lihat[a] << endl;
    } for (int b = 9; b < 11; b++){
        cout <<"| "<< b + 1 << ".|                 " << lihat[b] << endl;
    }

} else {
    cout << " Pilihan barang tidak ada bos!!! ? " << endl;

}
 
}
int main(){
   
     char ulang;
    int i=0;
     do{
    system("cls");
    gotoxy(0,0);cout << "DAFTAR BARANG UD.CINTA PALSU";
    gotoxy(0,1); cout << "1. ELEKTRONIK";
    gotoxy(0,2); cout << "2. NON ELEKTRONIK";
    gotoxy(0,3); cout << "Pilih barang yang ingin dilihat: ";
    gotoxy(0,4); cin >> pil;
    if (pilihan1()){
        kategori = ". Pilihan anda [ELEKTRONIK]";
    cout << kategori << endl;
    } else if (pilihan2()){
        kategori = ". Pilihan anda [NON ELEKTRONIK]";
    cout << kategori << endl;
    }
    gotoxy(2,4); cout << kategori;

    // Membuat Struktur Tabel Dengan gotoxy
    gotoxy(0,5); cout << "========================================================";
    gotoxy(0,6); cout << "| No |                 Nama Barang                     |";
    gotoxy(0,7); cout << "========================================================";
    gotoxy(0,8); tampilan(pilihan1() ? elektronik : nonElektronik); 
    for (int c = 0; c <= 10; c++){
    gotoxy(54,8+c); cout << " | ";
    }
    gotoxy(0,19); cout << "========================================================\n";           
    gotoxy(0,21); cout << "Apakah anda ingin melihat kembali [Y/n]: ";
                  cin >> ulang;
                  i++;
                    system("cls");
                      }while(ulang=='Y'|| ulang=='y');
                       system("cls");
                       cout << "~~~~~~~~~" << endl;
                       cout << " ====PROGRAM SELESAI==== " << endl;
                       cout << "~~~~~~~~~" << endl;
}