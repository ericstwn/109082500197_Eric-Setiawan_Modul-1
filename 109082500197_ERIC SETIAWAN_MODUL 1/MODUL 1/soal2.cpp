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