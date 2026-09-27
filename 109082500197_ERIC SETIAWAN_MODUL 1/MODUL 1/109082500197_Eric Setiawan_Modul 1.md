# <h1 align="center">Laporan Praktikum Modul 1 - Codeblocks IDE & Pengenalan Bahas C++ (Bagian Pertama)</h1>

<p align="center">Eric Setiawan - 109082500197</p>

## Dasar Teori

### A. Struktur Data <br/>

Struktur data merupakan cara mengorganisir dan menyimpan data dalam komputer sehingga dapat diakses dan dimodifikasi secara efisien. Struktur data yang baik memungkinkan program berjalan dengan lebih cepat dan menggunakan memori lebih optimal. Beberapa contoh struktur data dasar antara lain array, linked list, stack, queue, tree, dan graph. Dalam pembelajaran struktur data, bahasa C++ digunakan karena memberikan kontrol langsung terhadap memori melalui pointer dan efisiensi tinggi dalam eksekusi program.

#### 1. Variabel dan Tipe Data
Tipe data adalah kategorisasi untuk menentukan jenis nilai yang dapat disimpan variabel. Bahasa C++ menyediakan tipe data dasar seperti int (bilangan bulat), float dan double (bilangan desimal), char (karakter), dan bool (nilai benar/salah). Variabel harus dideklarasikan terlebih dahulu sebelum digunakan dengan format: tipe_data nama_variabel;

#### 2. Pointer
Pointer merupakan variabel yang menyimpan alamat memori dari variabel lain. Pointer dideklarasikan dengan tanda asterisk (*) dan menggunakan operator & untuk mendapatkan alamat. Pointer sangat penting dalam struktur data karena memungkinkan pembuatan linked list dan struktur dinamis lainnya. Operator * digunakan untuk mengakses nilai yang ditunjuk pointer (dereferencing).

#### 3. Array dan Function
Array adalah kumpulan elemen bertipe sama yang tersimpan dalam lokasi memori bersebelahan. Fungsi (function) adalah blok kode yang dapat dipanggil berkali-kali untuk melakukan tugas tertentu. Fungsi dalam C++ dapat menerima parameter dan mengembalikan nilai. Penggunaan fungsi membuat kode lebih terstruktur, mudah dipahami, dan dapat digunakan kembali.


## Unguided

### 1. Buatlah program yang menerima input-an dua buah bilangan betipe float, kemudian memberikan output-an hasil penjumlahan, pengurangan, perkalian, dan pembagian dari dua bilangan tersebut.

```C++
source code unguided 1

#include <iostream>
using namespace std;

int main() {
    float input_1;
    float input_2;
    cout << "Masukan input angka pertama: ";
    cin >> input_1;
    cout << "Masukan input angka kedua: ";
    cin >> input_2;
    cout << input_1 + input_2 << endl;
    cout << input_1 - input_2 << endl;
    cout << input_1 * input_2 << endl;
    cout << input_1 / input_2 << endl;
}
```
### Output Unguided 1 :

##### Output 1

![Screenshot Output Unguided 1_1](https://github.com/ericstwn/109082500197_Eric-Setiawan_Modul-1/blob/main/109082500197_ERIC%20SETIAWAN_MODUL%201/MODUL%201/Output/soal1.png)

##### Output 2

![Screenshot Output Unguided 1_2](https://github.com/ericstwn/109082500197_Eric-Setiawan_Modul-1/blob/main/109082500197_ERIC%20SETIAWAN_MODUL%201/MODUL%201/Output/soal1(2).png)

[penjelasan unguided 1
Program ini buat ngitung empat operasi matematika dasar dari dua angka. float input_1 dan float input_2 adalah variabel bertipe desimal buat nyimpen dua angka yang diinput. cout << dipakai buat nampilin teks atau hasil ke layar, sedangkan cin >> dipakai buat menerima input dari pengguna. cout << input_1 + input_2 << endl artinya nampilin hasil penjumlahan input_1 dan input_2 lalu endl buat pindah ke baris baru. Hal yang sama berlaku untuk baris berikutnya, input_1 - input_2 buat pengurangan, input_1 * input_2 buat perkalian, dan input_1 / input_2 buat pembagian.]

### 2. Buatlah sebuah program yang menerima masukan angka dan mengeluarkan output nilai angka tersebut dalam bentuk tulisan. Angka yang akan di-input-kan user adalah bilangan bulat positif mulai dari 0 s.d 100

```C++
source code unguided 2

#include <iostream>
#include <string>
using namespace std;

string KonversiTulisan(int angka) {
    string satuan[] = {"", "satu", "dua", "tiga", "empat", "lima", "enam", "tujuh", "delapan", "sembilan"};
    string belasan[] = {"sepuluh", "sebelas", "dua belas", "tiga belas", "empat belas", "lima belas", "enam belas", "tujuh belas", "delapan belas", "sembilan belas"};
    string puluhan[] = {"", "", "dua puluh", "tiga puluh", "empat puluh", "lima puluh", "enam puluh", "tujuh puluh", "delapan puluh", "sembilan puluh"};
    
    if (angka == 0) return "nol";
    else if (angka < 10) return satuan[angka];
    else if (angka < 20) return belasan[angka - 10];
    else if (angka < 100) {
        int puluh = angka / 10;
        int satu = angka % 10;
        return puluhan[puluh] + (satu > 0 ? " " + satuan[satu] : "");
    }
    if (angka == 100) return "seratus";
    return "";
}
int main() {
    int angka;
    cout << "Masukan angka 0-100: ";
    cin >> angka;

    string hasil = KonversiTulisan(angka);
    cout << angka << " = " << hasil << endl;
    return 0;
}
```
### Output Unguided 2 :

##### Output 1

![Screenshot Output Unguided 2_1](https://github.com/ericstwn/109082500197_Eric-Setiawan_Modul-1/blob/main/109082500197_ERIC%20SETIAWAN_MODUL%201/MODUL%201/Output/soal2.png)


##### Output 2

![Screenshot Output Unguided 2_2](https://github.com/ericstwn/109082500197_Eric-Setiawan_Modul-1/blob/main/109082500197_ERIC%20SETIAWAN_MODUL%201/MODUL%201/Output/soal2(2).png)

[penjelasan unguided 2
Program ini buat ngubah angka 0 sampai 100 menjadi tulisan dalam bahasa Indonesia. Program punya tiga array string yaitu satuan buat nyimpen kata angka 1-9, belasan buat nyimpen kata angka 10-19, dan puluhan buat nyimpen kata angka 20-90. Fungsi KonversiTulisan ngecek angkanya masuk kategori mana, kalau 0 langsung return "nol", kalau kurang dari 10 ambil dari array satuan, kalau kurang dari 20 ambil dari array belasan dengan dikurangi 10 sebagai indeksnya, kalau kurang dari 100 gabungin kata puluhan dan satuannya pakai tanda ? yang artinya kalau satuannya lebih dari 0 maka ditambah kata satuannya, kalau pas 100 return "seratus". Di main program minta input angka, lalu memanggil fungsi KonversiTulisan dan hasilnya ditampilin pakai cout dalam format "angka = tulisan".]

### 3. Membuat Segitiga bilangan dengan tanda "*" ditengah

```C++
source code unguided 3

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "masukan angka: "; 
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = n - i + 1; j >= 1; j--) {
            cout << j << " ";
        }
        cout << "* ";
        for (int j = 1; j <= n - i + 1; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}
```
### Output Unguided 3 :

##### Output 1

![Screenshot Output Unguided 3_1](https://github.com/ericstwn/109082500197_Eric-Setiawan_Modul-1/blob/main/109082500197_ERIC%20SETIAWAN_MODUL%201/MODUL%201/Output/soal3.png)


##### Output 2

![Screenshot Output Unguided 3_2](https://github.com/ericstwn/109082500197_Eric-Setiawan_Modul-1/blob/main/109082500197_ERIC%20SETIAWAN_MODUL%201/MODUL%201/Output/soal3(2).png)

[penjelasan unguided 3
Program ini buat nampilin pola angka berbentuk jam pasir dengan bintang di tengah. Program minta input n sebagai ukuran polanya. Loop pertama for (int i = 1; i <= n; i++) buat ngulang sebanyak n baris. Di tiap baris ada tiga bagian, loop kedua for (int j = n - i + 1; j >= 1; j--) nampilin angka dari besar ke kecil di sisi kiri, lalu cout << "* " nampilin bintang di tengah sebagai pemisah, lalu loop ketiga for (int j = 1; j <= n - i + 1; j++) nampilin angka dari kecil ke besar di sisi kanan. Setiap baris makin ke bawah angkanya makin sedikit karena nilai n - i + 1 makin mengecil seiring i bertambah. endl dipakai buat pindah ke baris baru setiap selesai satu baris pola.]

## Kesimpulan

Struktur data merupakan fondasi penting dalam pemrograman untuk mengorganisasikan dan menyimpan data secara efisien. Bahasa C++ dipilih dalam praktikum ini karena menyediakan fitur powerful seperti pointer dan alokasi memori dinamis yang memungkinkan pembelajaran struktur data secara mendalam. Melalui pemahaman konsep dasar seperti tipe data, variabel, pointer, array, dan fungsi, mahasiswa diharapkan dapat mengimplementasikan berbagai struktur data dan memilih yang paling sesuai untuk menyelesaikan masalah pemrograman. Pembelajaran struktur data yang kuat akan memberikan fondasi solid untuk mengembangkan program yang lebih efisien di masa depan.

## Referensi

[1] Website Pembelajaran C++
cplusplus.com - Tutorial komprehensif C++ dengan referensi library standar
learncpp.com - Panduan pembelajaran C++ dari dasar hingga tingkat lanjut
geeksforgeeks.org - Tutorial C++, struktur data, dan algoritma dengan contoh kode
tutorialspoint.com - Tutorial interaktif C++ dan struktur data untuk pemula

<br>[2] Buku Referensi
Malik, D.S. (2017). Data Structures Using C++ - Fokus pada implementasi struktur data dengan C++
Lippman, B.E. dkk. (2012). C++ Primer - Panduan komprehensif untuk belajar C++
Horton, I. (2013). Ivor Horton's Beginning C++ - Pengenalan C++ dari dasar dengan mudah
Cormen, T.H., dkk. (2009). Introduction to Algorithms - Referensi algoritma dan struktur data

[3] Video Pembelajaran C++
Programming with Mosh - Tutorial C++ interaktif untuk pemula
Jenny's Lectures CS IT - Tutorial struktur data menggunakan C++ dengan penjelasan detail
The Cherno - Penjelasan mendalam tentang C++ dan konsep programming

