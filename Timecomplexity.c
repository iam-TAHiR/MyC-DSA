🟩 Program 1 — O(n): Single loop
#include <stdio.h>
#include <time.h>

int main() {
    long n = 100000000; 
    long sum = 0;
    clock_t start, end;
    double time_taken;

    start = clock();

    for (long i = 0; i < n; i++) {
        sum += i;
    }

    end = clock();

    time_taken = ((double)(end - start)) 
    printf("O(n) loop completed.\n");
    printf("Time taken = %f seconds\n", time_taken);

    return 0;
}
🟩 Program 2 — O(n²): Nested loop
#include <stdio.h>
#include <time.h>

int main() {
    int n = 10000;  // smaller number (because it's much slower)
    long count = 0;
    clock_t start, end;
    double time_taken;

    start = clock();

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            count++;
        }
    }

    end = clock();

    time_taken = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("O(n^2) loop completed.\n");
    printf("Time taken = %f seconds\n", time_taken);

    return 0;
}
