#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef int Item;
#define key(A) A
#define less(A, B) (key(A) < key(B))
#define exch(A, B)  \
    {               \
        Item t = A; \
        A = B;      \
        B = t;      \
    }
#define compexch(A, B) \
    if (less(B, A))    \
    exch(A, B)

void merge(int *v, int m, int l, int r)
{
    int tamanho = r + 1 - l;
    int *aux = malloc(tamanho * sizeof(int));
    int i = l;
    int j = m + 1;
    int k = 0;

    while (i <= m && j <= r)
    {
        if (v[i] < v[j])
        {
            aux[k++] = v[i++];
        }
        else
        {
            aux[k++] = v[j++];
        }
    }
    while (i <= m)
    {
        aux[k++] = v[i++];
    }
    while (j <= r)
    {
        aux[k++] = v[j++];
    }

    k = 0;
    for (i = l; i <= r; i++)
    {
        v[i] = aux[k++];
    }

    free(aux);
}

void merge_sort(int *v, int l, int r)
{
    if (l >= r)
        return;
    int m = (l + r) / 2;
    merge_sort(v, l, m);
    merge_sort(v, m + 1, r);
    merge(v, l, m, r);
}

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    merge_sort(arr, 0, n - 1);

    for (int i = 0; i < n; i++) {
        printf("%d", arr[i]);
        if (i != n - 1) {
            printf(" ");
        }
    }
    printf("\n");

    return 0;

}