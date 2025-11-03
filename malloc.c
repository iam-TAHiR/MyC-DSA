#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr, n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    arr = (int *)malloc(n * sizeof(int)); // Allocate memory for n integers

    if (arr == NULL) {
        printf("Memory not allocated.\n");
        return 1;
    }

    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("You entered:\n");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);

    free(arr); // Free memory
    return 0;
}
