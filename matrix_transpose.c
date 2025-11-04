#include <stdio.h>
#include <stdlib.h>

int main() {
    int R, C, i, j;
    
    printf("Enter rows and columns: ");
    scanf("%d%d", &R, &C);

    int *mat = (int *)malloc(R * C * sizeof(int));
    if (!mat) {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Enter %d elements:\n", R * C);
    for (i = 0; i < R; i++)
        for (j = 0; j < C; j++)
            scanf("%d", (mat + i * C + j));

    printf("Transpose of the matrix:\n");

    if (R != C) {
        int *t = (int *)malloc(C * R * sizeof(int));
        if (!t) {
            printf("Memory allocation failed\n");
            free(mat);
            return 1;
        }

        for (i = 0; i < R; i++)
            for (j = 0; j < C; j++)
                *(t + j * R + i) = *(mat + i * C + j);

        for (i = 0; i < C; i++) {
            for (j = 0; j < R; j++)
                printf("%d ", *(t + i * R + j));
            printf("\n");
        }

        free(t);
    } else {
        for (i = 0; i < R; i++) {
            for (j = 0; j < C; j++)
                printf("%d ", *(mat + j * R + i));
            printf("\n");
        }
    }

    free(mat);
    return 0;
}
