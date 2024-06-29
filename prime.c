#include <stdio.h>
#include <stdbool.h>
#include <time.h>

bool is_prime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    clock_t start_time = clock();

    printf("Prime numbers up to 1000:\n");
    for (int i = 2; i <= 1000; ++i) {
        if (is_prime(i)) {
            printf("%d ", i);
        }
    }

    clock_t end_time = clock();
    double elapsed_time = (double)(end_time - start_time) / CLOCKS_PER_SEC;
    printf("\nTime taken: %.6f seconds\n", elapsed_time);

    return 0;
}
