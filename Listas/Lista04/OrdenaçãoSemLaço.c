#include <stdio.h>

void ordena(int *v, int n) {
    int elementMin;
    for (int i = 0; i < n - 1; i++) {
        elementMin = i;
        for (int j = i + 1; j < n; j++) {
            if (v[j] < v[elementMin]) {
                elementMin = j;
            }
        }
        if (i != elementMin) {
            int aux = v[i];
            v[i] = v[elementMin];
            v[elementMin] = aux;        
        }
    }
}