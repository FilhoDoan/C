#include <stdio.h>
#include <stdlib.h>

#define Element int
#define key(x) (x)
#define less(a, b) (a < b)
#define swap(a, b){Element t = a;a = b;b = t;}
#define cmpswap(a, b) \
    if (less(b, a))   \
    swap(a, b)

int partition(Element *arr, int size)
{
    int left = -1, right = size - 1;
    Element pivot = arr[right];

    while (1)
    {
        while (less(arr[++left], pivot));
        while (less(pivot, arr[--right]) && right > left);

        if (left >= right)
            break;
        swap(arr[left], arr[right]);
    }
    swap(arr[left], arr[size - 1]);
    return left;
}

void quicksort(Element *arr, int size)
{
    if (size < 2)
        return;

    cmpswap(arr[(size - 1) / 2], arr[size - 1]);
    cmpswap(arr[0], arr[(size - 1) / 2]);
    cmpswap(arr[size - 1], arr[(size - 1) / 2]);

    int mid = partition(arr, size);
    quicksort(arr, mid);
    quicksort(arr + mid + 1, size - mid - 1);
}

void merge(Element *a, int sizea, Element *b, int sizeb)
{
    Element *temp = (Element *)malloc((sizea + sizeb) * sizeof(Element));
    int i = 0, j = 0, k = 0;
    for (; i < sizea && j < sizeb; k++)
    {
        if (key(a[i]) <= key(b[j]))
            temp[k] = a[i++];
        else
            temp[k] = b[j++];
    }

    while (i < sizea)
        temp[k++] = a[i++];
    while (j < sizeb)
        temp[k++] = b[j++];

    for (k = 0, i = 0; i < (sizea + sizeb); i++, k++)
        a[i] = temp[k];

    free(temp);
}

int removeDuplicates(Element *arr, int size)
{
    int newSize = 1;
    for (int i = 1; i < size; i++)
        if (arr[i] != arr[newSize - 1])
            arr[newSize++] = arr[i];
    return newSize;
}

int main()
{
    int numElements;
    scanf(" %d", &numElements);
    Element *array = (Element *)malloc(sizeof(Element) * (2 * numElements));
    for (int i = 0; i < numElements; i++)
        scanf(" %d", array + i);

    quicksort(array, numElements);

    int size = removeDuplicates(array, numElements);
    if (size % 2)
        array[size++] = 1000000000;

    int crazySize = 0;
    for (int i = 0; i < size - 1; i += 2)
        array[size + crazySize++] = array[i] + array[i + 1];

    merge(array, size, array + size, crazySize);
    size = removeDuplicates(array, size + crazySize);
    for (int i = 0; i < size; i += 4)
        printf("%d\n", array[i]);
    printf("Elementos: %d\n", size);

    free(array);

    return 0;
}
