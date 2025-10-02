#include <stdio.h>

// Function declaration
int isEven(int number);

int main() {
    int num;
    
    // Get input from user
    printf("Enter a number: ");
    scanf("%d", &num);
    
    // Check if number is even using function
    if (isEven(num)) {
        printf("%d is even\n", num);
    } else {
        printf("%d is odd\n", num);
    }
    
    return 0;
}

// Function definition to check even/odd
int isEven(int number) {
    // Return 1 if even, 0 if odd
    if (number % 2 == 0) {
        return 1;
    } else {
        return 0;
    }
}



