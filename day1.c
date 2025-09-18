#include <stdio.h>
int main() {
    // Print my information
    printf("My name: Your Name\n");  // Replace with your name
    printf("My age: 25\n");          // Replace with your age
    printf("My favorite hobby: Coding\n\n");  // Replace with your hobby
    // Get user input
    char name[50];
    int age;
    printf("Enter your name: ");
    scanf("%49s", name);
    printf("Enter your age: ");
    scanf("%d", &age);
    // Print greeting message
    printf("\nHello %s! You are %d years old. Welcome to C programming!\n", name, age);
    return 0;
}
