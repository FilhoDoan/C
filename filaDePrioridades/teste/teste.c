#include <stdio.h>
#include <math.h>

void printTree(int* tree, int size) {
    int levels = log2(size + 1);
    int nodesOnLevel = 1;
    int nodesPrinted = 0;

    for (int level = 0; level <= levels; level++) {
        int spaces = (1 << (levels - level)) - 1;
        int elements = (1 << level);

        // Espaços iniciais
        for (int i = 0; i < spaces; i++) {
            printf(" ");
        }

        // Elementos do nível
        for (int i = 0; i < elements && nodesPrinted < size; i++) {
            printf("%d", tree[nodesPrinted++]);

            // Espaços entre elementos
            for (int j = 0; j < spaces * 2; j++) {
                printf(" ");
            }
        }

        printf("\n");

        // Espaços entre níveis
        for (int i = 0; i < spaces; i++) {
            for (int j = 0; j < spaces - i; j++) {
                printf(" ");
            }
            printf("/");
            for (int j = 0; j < i; j++) {
                printf("  ");
            }
            printf("\\");
            for (int j = 0; j < spaces - i; j++) {
                printf(" ");
            }
            printf(" ");
            printf(" ");
        }

        printf("\n");
    }
}

int main() {
    int tree[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    int size = sizeof(tree) / sizeof(tree[0]);

    printTree(tree, size);

    return 0;
}
