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
    cout << "matrik A: " << endl;
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            cout << matriks[i][j] << " | ";
        }
        cout << endl;
    }

    cout << "===============" << endl;

    //Menghitung determinan matriks
    int determinan;
    determinan = matriks[0][0] * matriks[1][1] * matriks[2][2] + matriks[0][1] * matriks[1][2] * matriks[2][0] + matriks[0][2] * matriks[1][0] * matriks[2][1] -
        matriks[0][2] * matriks[1][1] * matriks[2][0] - matriks[0][0] * matriks[1][2] * matriks[2][1] - matriks[0][1] * matriks[1][0] * matriks[2][2];

    cout << "Determinan matrik A = " << determinan << endl;

    // Jika determinan = 0, tidak memiliki invers
    if (determinan == 0) {
        cout << "Matrik tidak memiliki invers karena determinannya 0." << endl;
    }

    cout << "===============" << endl;

    // Matriks kofaktor
    int kofaktor[3][3];
    kofaktor[0][0] = matriks[1][1] * matriks[2][2] - matriks[1][2] * matriks[2][1];
    kofaktor[0][1] = -(matriks[1][0] * matriks[2][2] - matriks[1][2] * matriks[2][0]);
    kofaktor[0][2] = matriks[1][0] * matriks[2][1] - matriks[1][1] * matriks[2][0];
    kofaktor[1][0] = -(matriks[0][1] * matriks[2][2] - matriks[0][2] * matriks[2][1]);
    kofaktor[1][1] = matriks[0][0] * matriks[2][2] - matriks[0][2] * matriks[2][0];
    kofaktor[1][2] = -(matriks[0][0] * matriks[2][1] - matriks[0][1] * matriks[2][0]);
    kofaktor[2][0] = matriks[0][1] * matriks[1][2] - matriks[0][2] * matriks[1][1];
    kofaktor[2][1] = -(matriks[0][0] * matriks[1][2] - matriks[0][2] * matriks[1][0]);
    kofaktor[2][2] = matriks[0][0] * matriks[1][1] - matriks[0][1] * matriks[1][0];

    //Matriks adjoin (transpose dari kofaktor)
    float adjoin[3][3];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            adjoin[i][j] = kofaktor[j][i];
        }
    }

    //Matriks invers
    float inversMatriks[3][3];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            inversMatriks[i][j] = adjoin[i][j] / (float)determinan;
        }
    }

    //Menampilkan hasil invers matriks A
    cout << "Invers matrik A: " << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << inversMatriks[i][j] << " | ";
        }
        cout << endl;
    }
}