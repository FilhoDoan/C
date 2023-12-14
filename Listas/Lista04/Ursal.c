#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ull unsigned long long

// Struct para um item
typedef struct
{
    int key, value;
} Dado;

// Define o critério de comparação "menor"
#define less(a, b) (a.value == b.value ? a.key > b.key : a.value > b.value)

// Define a função para troca de elementos
#define swap(a, b){Dado t = a;a = b;b = t;}

// Define a função para comparar e trocar elementos
#define cmpswap(a, b) \
    if (less(b, a))   \
    swap(a, b)

// Particionamento para o QuickSort
int partition(Dado *arr, int left, int right)
{
    Dado pivot = arr[right];
    int j = left;

    for (int k = left; k < right; k++)
    {
        if (less(arr[k], pivot))
        {
            swap(arr[k], arr[j]);
            j++;
        }
    }
    swap(arr[j], arr[right]);
    return j;
}

// QuickSort
void quicksort(Data *arr, int left, int right)
{
    if (right <= left)
        return;

    cmpswap(arr[(left + right) / 2], arr[right]);
    cmpswap(arr[left], arr[(left + right) / 2]);
    cmpswap(arr[right], arr[(left + right) / 2]);

    int partition_index = partition(arr, left, right);
    quicksort(arr, left, partition_index - 1);
    quicksort(arr, partition_index + 1, right);
}

Data primary[91], secondary[901], tertiary[9001], quaternary[90001];
int primary_count = 0, secondary_count = 0, tertiary_count = 0, quaternary_count = 0;

void solve()
{
    long long s, f, e;
    scanf(" %lld %lld %lld", &s, &f, &e);

    long long valid = 0, invalid = 0, total_primary = 0;
    for (int x, l; scanf("%d%n", &x, &l) == 1;)
    {
        if (x < 0)
        {
            invalid++;
            continue;
        }

        switch (l)
        {
        case 3:
            primary[x - 10].key = x;
            primary[x - 10].value++;
            total_primary++;
            break;
        case 4:
            secondary[x - 100].key = x;
            secondary[x - 100].value++;
            break;
        case 5:
            tertiary[x - 1000].key = x;
            tertiary[x - 1000].value++;
            break;
        default:
            quaternary[x - 10000].key = x;
            quaternary[x - 10000].value++;
        }
        valid++;
    }

    for (int i = 0; i < 91; i++)
        if (primary[i].value)
            primary[primary_count++] = primary[i];
    for (int i = 0; i < 901; i++)
        if (secondary[i].value)
            secondary[secondary_count++] = secondary[i];
    for (int i = 0; i < 9001; i++)
        if (tertiary[i].value)
            tertiary[tertiary_count++] = tertiary[i];
    for (int i = 0; i < 90001; i++)
        if (quaternary[i].value)
            quaternary[quaternary_count++] = quaternary[i];

    printf("%lld %lld\n", valid, invalid);

    quicksort(primary, 0, primary_count - 1);
    quicksort(secondary, 0, secondary_count - 1);
    quicksort(tertiary, 0, tertiary_count - 1);
    quicksort(quaternary, 0, quaternary_count - 1);

    if ((double)primary[0].value / total_primary >= .51)
        printf("%d\n", primary[0].key);
    else
        printf("Segundo turno\n");

    for (int i = 0; i < s; i++)
        printf("%d%c", secondary[i].key, " \n"[i == s - 1]);
    for (int i = 0; i < f; i++)
        printf("%d%c", tertiary[i].key, " \n"[i == f - 1]);
    for (int i = 0; i < e; i++)
        printf("%d%c", quaternary[i].key, " \n"[i == e - 1]);
}

int main()
{
    solve();

    return 0;
}
