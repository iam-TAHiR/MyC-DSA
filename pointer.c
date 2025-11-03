🟩 Program 1 — Basic Pointer Example
#include <stdio.h>

int main() {
    int a = 10;        
    int *ptr;          

    ptr = &a;         

    printf("Value of a = %d\n", a);
    printf("Address of a = %p\n", &a);
    printf("Value of ptr (address stored) = %p\n", ptr);
    printf("Value pointed by ptr = %d\n", *ptr);  

    return 0;
}
🟩 Program 2 — Pointer with Array
#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int *ptr;
    ptr = arr;  // same as &arr[0]

    printf("Array elements using pointer:\n");
    for (int i = 0; i < 5; i++) {
        printf("arr[%d] = %d  (Address = %p)\n", i, *(ptr + i), (ptr + i));
    }

    return 0;
}
