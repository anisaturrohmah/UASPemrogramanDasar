#include <iostream>
using namespace std;

void main() {
    //Matriks
    int matriks[3][3] = {
        {4, 2, 8},
        {2, 1, 5},
        {3, 2, 4}
    };

    int baris = 3;
    int kolom = 3;

    //Menampilkan isi matriks
    cout << "matriks: " << endl;
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            cout << matriks[i][j] << " ";
        }
        cout << endl;
    }

    cout << "===============" << endl;

    //Menampilkan hasil invers matriks
    int hasilInvers;
    hasilInvers = matriks[0][0] * matriks[1][1] * matriks[2][2] + matriks[0][1] * matriks[1][2] * matriks[2][0] + matriks[0][2] * matriks[1][0] * matriks[2][1] -
        matriks[0][2] * matriks[1][1] * matriks[2][0] - matriks[0][0] * matriks[1][2] * matriks[2][1] - matriks[0][1] * matriks[1][0] * matriks[2][2];
    cout << "Hasil invers matrik = " << hasilInvers;
}