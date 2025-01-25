#include <stdio.h>

int arr[10] = {2, 3, 5, 7, 11, 4, 6, 8, 13, 17};  // Global array

int is_prime(int num) {
    if (num < 2) return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0;
    }
    return 1;
}

int sum_of_primes() {
    int sum = 0;
    for (int i = 0; i < 10; i++) {
        if (is_prime(arr[i])) {
            sum += arr[i];
        }
    }
    return sum;
}

int main() {
    int sum = sum_of_primes();
    printf("Sum of prime numbers in the array: %d\n", sum);
    return 0;
}
