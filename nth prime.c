#include <stdio.h>
#include <stdbool.h>

// Function to check if a number is prime
bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

// Function to print prime numbers from 1 to n
void printPrimes(int n) {
    printf("Prime numbers from 1 to %d are: \n", n);
    for (int i = 2; i <= n; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    int n;

    // Get user input for the upper limit
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Print prime numbers from 1 to n
    printPrimes(n);

    return 0;
}

