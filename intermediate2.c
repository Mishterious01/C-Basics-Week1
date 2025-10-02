#include <stdio.h>

// Function declaration
long long factorial(int n);

int main() {
    int number;
    long long result;
    
    // Get input from user
    printf("Enter a positive integer: ");
    scanf("%d", &number);
    
    // Input validation
    if (number < 0) {
        printf("Error: Factorial is not defined for negative numbers.\n");
        return 1;
    }
    
    // Calculate factorial using function
    result = factorial(number);
    
    // Display result
    printf("Factorial of %d = %lld\n", number, result);
    
    return 0;
}

// Function definition to calculate factorial
long long factorial(int n) {
    long long fact = 1;
    int i;
    
    // Calculate factorial
    for (i = 1; i <= n; i++) {
        fact *= i;
    }
    
    return fact;
}






