// program 1 - yousef awad - welcome.c
/*
i like computers
wooOOOoooOOOOoooo
*/

#include <stdio.h> // including the standard input output library.

int main(void) {
    int a; // declaring an integer data type, a
    a = 2024; // initializing a with value 2024

    // float is 32bit, double is 64bit. both allow decimals
    float b;
    double c;

    // character like "a" or "b"
    char d; // every character is 1 byte/8 bit
    d = 'H'; // initialization of d with character A

    // what if I want declaration and initialize on the same line?
    char f = 'A';

    /*
    printf("Enter a value of d:" ); // asking the user to enter a value

    // %d is for integer, %lf for double, %f for float, %c for char
    scanf("%c", &d); // getting user input and converting the input into whatever, and then storing the value

    // %.2f makes the float only have 2 decimal places
    printf("The value of d: %c\n", d); // printing the value of a by substituting %d by a.
    */

    // you can print in octant with %o, with %x is hexadecimal, %d is decimal
    printf("The variable is: %c\n", f, f); // printing the value of some variable

    // I can also get the value number of characters
    printf("%c's number is: %d\n", f, f);

    //printing lines onto the console.
    //printf("Welcome to EGN3211!");

    return 0;
}
