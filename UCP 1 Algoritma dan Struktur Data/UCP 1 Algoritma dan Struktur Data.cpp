// UCP 1 Algoritma dan Struktur Data.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// 1. Jelaskan bagaimana algoritma Bubble Sort membandingkan serta menukar elemen-elemen?
// jawaban : berulang scan list data
// mengurutkannya dari yang terkecil ke yang terbesar
// mencari paling besar pertama sampai terakhir
// membandingkan elemen stor pada indeks 0 dengan elemen stor pada indeks 1
// menukar nilai jika nilai indeks 0 lebih besar dari indeks 1
//algoritma bubble sort : 1. pasang pass = 1 ( sampai n-1)
//                        ulangi langkah 3 untuk j memulai dari 0 sampai n-1-pass
//                        2. jika pass < =n-1, ke step 2

//2. Jelaskan bagaimana algoritma shell sort membandingkan serta menukar elemen-elemen
// jawaban : memisahkan beberapa arr  untuk menyortir data

// 3. dalam algoritma sortir, jika data sudah ada beberapa yang berurutan, maka algortitma mana yang harus di pilih?
// jawaban : BubbleSort karena BubbleSort adalah algoritma yang paling simple untuk sorting data yang kecil
// sehingga algoritma BubbleSort yang harus dipilih

#include <iostream>
using namespace std;

int ibnaty[47];
int n;

void input() {   //procedur untuk input

    while (true) {
        cout << "Masukan banyaknya elemen pada array : ";
        cin >> n;
        if (n <= 20)  //jika n kurang dari atau sama dengan 20
            break;    //keluar dari loop
        else {        //jika n lebih dari 20
            cout << "\nArray dapat mempunyai maksimal 20 elemen. \n";    //output ke layar
        }
    }
    cout << endl;                                         //output baris kosong
    cout << "========================" << endl;           //output ke layar
    cout << "Masukkan Elemen Array" << endl;              //output ke layar
    cout << "========================" << endl;           //output ke layar

    for (int i = 0; i < n; i++) {                 //looping dengan i dimulai dari 0 hingga n-1
        cout << "Data ke-" << (i + 1) << "; ";    //output ke layar
        cin >> ibnaty[i];
    }
}

void SelectionSort() {
    int j, temp, i;

    for (j = 0; j <= n - 2; j++) {
        int min = j;
        for (int i = j + 1; i <= n - 1; i++)
            if (ibnaty[i] < ibnaty[min])
                min = i;
    }


}

    void display() {

            cout << endl;
            cout << "==========================" << endl;
            cout << "Element Array yang telah tersusun" << endl;
            cout << "==========================" << endl;
            cout << endl;
            for (int j = 0; j < n; j++) {
                cout << ibnaty[j];
                if (j < n - 1) {
                    cout << " ---> ";
                }
            }
            cout << endl;
            cout << endl;
            cout << "Jumlah pass = " << n - 1 << endl;
            cout << endl;
        }

int main() {
    input();
    SelectionSort();
    display();

    return 0;
}

