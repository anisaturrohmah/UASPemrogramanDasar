#include <iostream>
#include <algorithm>
using namespace std;

void main() {
    //Matriks
    int matriks[7] = { 92, 65, 74, 80, 80, 70, 78 };
    int panjangArray = sizeof(matriks) / sizeof(matriks[0]);

    //Menampilkan isi matriks sebelum diurutkan
    cout << "Data sebelum diurutkan: " << endl;
    for (int i = 0; i < panjangArray; i++) {
        cout << matriks[i] << " | ";
    }


    //Menampilkan nilai mean
    int total = 0;
    for (int i = 0; i < panjangArray; i++) {
        total += matriks[i];
    }
    double mean = total / panjangArray;

    //Menghitung nilai median
    sort(matriks, matriks + panjangArray);
    double median;
    if (panjangArray % 2 == 0) {
        median = (matriks[panjangArray / 2 - 1] + matriks[panjangArray / 2]) / 2.0;
    }
    else {
        median = matriks[panjangArray / 2];
    }

    cout << endl << "==============" << endl;

    //Menghitung isi matriks setelah diurutkan
    cout << "Data setelah diurutkan: " << endl;
    for (int i = 0; i < panjangArray; i++) {
        cout << matriks[i] << " | ";
    }

    cout << endl << "==============" << endl;

    //Menghitung nilai standard deviasi
    double variance = 0.0;
    for (int i = 0; i < panjangArray; i++) {
        variance += pow(matriks[i] - mean, 2);
    }
    variance /= panjangArray;
    double standardDeviasi = sqrt(variance);

    //Menampilkan nilai mean, median, dan standard deviasi
    cout << "Mean = " << mean << endl;
    cout << "Median = " << median << endl;
    cout << "Standard deviasi = " << standardDeviasi;
}