#include "functions.h"
#include <iostream>
using namespace std;

int main() {
    int dim, v[100], vSortat[100];
    cin >> dim;
    for (int i = 0; i < dim; i++)
        cin >> v[i];

    afisareVector(v, dim);
    cout << endl;

    int sum = sumaVector(v, dim);
    cout << "Suma vectorului: " << sum << endl;

    int min = minimVector(v, dim);
    cout << "Minimul vectorului: " << min << endl;

    int max = maximVector(v, dim);
    cout << "Maximul vectorului: " << max << endl;

    sortareVector(v, dim, vSortat);

    cout << "Vectorul sortat: ";
    afisareVector(vSortat, dim);

    return 0;
}