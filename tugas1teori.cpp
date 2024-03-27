#include <iostream> //input atau output di C++.
#include <algorithm> //untuk menggunakan fungsi algoritma.

bool cekDuplikat(int arr[], int panjangArr) { //mendefinisikan fungsi cekduplikat yang menerima 2 parameter:arr dan panjang array. fungsi ini akan mengembalikan nilai boolean (true/false) berdasarkan ada/tidaknya elemen duplikat dalam array.
    std::sort(arr, arr + panjangArr); // mengurutkan array dari elemen pertama sampai akhir.
    for(int i = 1; i < panjangArr; i++) { //membuat loop dari elemen kedua (indeks 1).
        if(arr[i] == arr[i - 1]) { //ketika ada yang sama dengan elemen sebelumnya maka ya berarti ada duplikat.
            return true; //ika ditemukan elemen duplikat.
        }
    }
    return false; //jika tidak ada elemen duplikat.
}

int main() { //fungsi utama program.
    int arrA[] = {7, 8, 6, 6, 9}; //mendifinisikan arrA dengan 5 elemen.
    int panjangArrA = 5; //variabel panjangArrA menyimpan 5 elemen.
    if(cekDuplikat(arrA, panjangArrA)){ //memanggil fungsi duplikat. jika true, maka ada elemen duplikat.
        std::cout << "Ada angka duplikat di array.\n"; //mencetak pesan jika ada elemen duplikat dalam array.
    } else { //jika tidak ada elemen duplikat.
        std::cout << "Tidak ada duplikat di array.\n"; //mencetak pesan jika tidak ada elemen duplikat dalam array.
    }
    return 0; //mengakhiri fungsi utama.
}

//Nama : Khulika Malkan
//NIM  : 2311110057
//Kelas: S1SD04-B