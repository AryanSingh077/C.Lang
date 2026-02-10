#include <stdio.h>

// Function to calculate factorial
long long factorial(int num) {
    long long fact = 1;
    for (int i = 1; i <= num; i++) {
        fact *= i;
    }
    return fact;
}

// Function to calculate Permutations (nPr)
long long findPermutation(int n, int r) {
    return factorial(n) / factorial(n - r);
}

// Function to calculate Combinations (nCr)
long long findCombination(int n, int r) {
    // Logic: nCr = n! / (r! * (n-r)!)
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int main() {
    int n, r;

    printf("Enter values for n and r (n >= r): ");
    scanf("%d %d", &n, &r);

    if (n < r) {
        printf("Invalid input! n must be greater than or equal to r.\n");
    } else {
        printf("%dP%d = %lld\n", n, r, findPermutation(n, r));
        printf("%dC%d = %lld\n", n, r, findCombination(n, r));
    }

    return 0;
}