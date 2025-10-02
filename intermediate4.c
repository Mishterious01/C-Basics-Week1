
















































#include <stdio.h>

// Function declaration
float calculateAverage(float a, float b, float c);

int main() {
    float num1, num2, num3;
    float average;
    
    // Get three numbers from user
    printf("Enter three numbers: ");
    scanf("%f %f %f", &num1, &num2, &num3);
    
    // Calculate average using function
    average = calculateAverage(num1, num2, num3);
    
    // Display result with 2 decimal places
    printf("Average of %.2f, %.2f and %.2f = %.2f\n", 
           num1, num2, num3, average);
    
    return 0;
}

// Function definition to calculate average
float calculateAverage(float a, float b, float c) {
    float avg;
    
    // Calculate average
    avg = (a + b + c) / 3.0;
    
    return avg;
}
