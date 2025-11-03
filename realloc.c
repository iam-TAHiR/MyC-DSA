#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;
    int n = 3;

   
    ptr = (int *)malloc(n * sizeof(int));

    if (ptr == NULL) {
        printf("Memory not allocated.\n");
        return 1;
    }

    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &ptr[i]);

    printf("You entered:\n");
    for (int i = 0; i < n; i++)
        printf("%d ", ptr[i]);

    n = 5;
    ptr = (int *)realloc(ptr, n * sizeof(int));

    if (ptr == NULL) {
        printf("\nMemory reallocation failed.\n");
        return 1;
    }

    printf("\n\nEnter 2 more integers:\n");
    for (int i = 3; i < n; i++)
        scanf("%d", &ptr[i]);

    printf("After realloc, all elements are:\n");
    for (int i = 0; i < n; i++)
        printf("%d ", ptr[i]);

    free(ptr); 
    return 0;
}
