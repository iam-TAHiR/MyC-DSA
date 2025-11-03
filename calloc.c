#include <stdio.h>
#include <stdlib.h>

int main() {
    int *a, *b;
    int n = 5;

    a = (int *)malloc(n * sizeof(int));
    b = (int *)calloc(n, sizeof(int));

    printf("Using malloc (garbage values):\n");
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);

    printf("\nUsing calloc (initialized to 0):\n");
    for (int i = 0; i < n; i++)
        printf("%d ", b[i]);

    free(a);
    free(b);
    return 0;
}
