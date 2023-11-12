// How do you find all pairs of an integer array whose sum is equal to a given number

#include <stdio.h>

void findPairs(int arr[], int n, int Sum) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == Sum) {
                printf("Pair found: %d + %d = %d\n", arr[i], arr[j], Sum);
            }
        }
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int Sum = 9;

    findPairs(arr, n, Sum);

    return 0;
}

