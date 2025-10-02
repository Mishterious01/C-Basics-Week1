#include <stdio.h>
int main() {
int n;
// Get input from user
printf("Enter a number: ");
scanf("%d", &n);
// Check if number is positive or non-positive
if (n > 0) {
printf("Positive\n");
} else {
printf("Non-positive\n");
}
return 0;
}
