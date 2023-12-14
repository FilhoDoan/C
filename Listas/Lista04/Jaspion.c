#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ull unsigned long long
#define Element struct Item
#define key(x) (x.japanese)
#define less(a, b) (strcmp(key(a), key(b)) < 0)
#define less_key(a, k) (strcmp(key(a), k) < 0)
#define eq_key(a, k) (strcmp(key(a), k) == 0)
#define swap(a, b)  { Element t = a; a = b; b = t; }
#define cmpswap(a, b) \
    if (less(b, a))   \
    swap(a, b)

struct Item
{
    char japanese[82], portuguese[82];
};

int partition(Element *arr, int left, int right) {
    Element pivot = arr[right];
    int i = left - 1;

    for (int j = left; j < right; j++) {
        if (less(arr[j], pivot)) {
            i++;
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[i + 1], arr[right]);
    return (i + 1);
}

void quicksort(Element *arr, int left, int right) {
    if (left < right) {
        int pi = partition(arr, left, right);

        quicksort(arr, left, pi - 1);
        quicksort(arr, pi + 1, right);
    }
}

int binarySearch(Element *arr, int left, int right, char *word) {
    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (eq_key(arr[mid], word))
            return mid;

        if (less_key(arr[mid], word))
            left = mid + 1;
        else
            right = mid - 1;
    }

    return -1;
}

Element list[1000001];

void solve() {
    int words, lines;
    scanf(" %d %d\n", &words, &lines);

    for (int i = 0; i < words; i++) {
        gets(list[i].japanese);
        gets(list[i].portuguese);
    }

    quicksort(list, 0, words - 1);

    while (lines--) {
        char line[81];
        gets(line);
        char *word;
        word = strtok(line, " ");

        while (word != NULL) {
            int idx = binarySearch(list, 0, words - 1, word);
            printf("%s", (idx != -1 ? list[idx].portuguese : word));
            word = strtok(NULL, " ");
            printf("%c", " \n"[word == NULL]);
        }
    }

    printf("\n");
}

int main() {
    int testCases;
    scanf(" %d", &testCases);
    while (testCases--)
        solve();

    return 0;
}
