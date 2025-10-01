#include "functions.h"
#include <iostream>
using namespace std;

void afisareVector(const int v[], int dim) {
    for (int i = 0; i < dim; ++i)
        cout << v[i] << " ";
}

int sumaVector(const int v[], int dim) {
    int sum = 0;
    for (int i = 0; i < dim; ++i)
        sum += v[i];
    return sum;
}

int minimVector(const int v[], int dim) {
    int minim = 99999;
    for (int i = 0; i < dim; i++) {
        if (v[i] < minim)
            minim = v[i];
    }
    return minim;
}

int maximVector(const int v[], int dim) {
    int maxim = -99999;
    for (int i = 0; i < dim; i++) {
        if (v[i] > maxim)
            maxim = v[i];
    }
    return maxim;
}

void sortareVector(const int v[], int dim, int vSortat[]) {
    for (int i = 0; i < dim; i++)
        vSortat[i] = v[i];
    for (int i = 0; i < dim - 1; i++) {
        for (int j = i + 1; j < dim; j++) {
            if (vSortat[i] > vSortat[j]) {
                int aux = vSortat[i];
                vSortat[i] = vSortat[j];
                vSortat[j] = aux;
            }
        }
    }
}
