#include <stdio.h>

int ft_iterative_factorial(int nb) {
    // Return 0 if the input is negative
    if (nb < 0) {
        return 0;
    }

    // Factorial of 0 and 1 is 1
    if (nb == 0 || nb == 1) {
        return 1;
    }

    int result = 1;
    for (int i = 2; i <= nb; ++i) {
        result *= i;
    }

    return result;
}

// Test cases
int main() {
    printf("Factorial of -5: %d\n", ft_iterative_factorial(-5)); // should return 0
    printf("Factorial of 0: %d\n", ft_iterative_factorial(0));   // should return 1
    printf("Factorial of 1: %d\n", ft_iterative_factorial(1));   // should return 1
    printf("Factorial of 5: %d\n", ft_iterative_factorial(5));   // should return 120
    printf("Factorial of 10: %d\n", ft_iterative_factorial(10)); // should return 3628800

    return 0;
}
