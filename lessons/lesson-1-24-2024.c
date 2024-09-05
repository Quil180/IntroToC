//char a = 'a'; // funny variable that is declared and initialized.
//a++; // updating the variable a by adding to a the number one (to get b)!
//a--; // updating the variable a by subtracting to a the number one (to get a, again);
//printf("%c", a); // %c is a conversion specifier and a placeholder to replace with the variable a.
//scanf("%c", &a); // use & in the second argument to tell scanf that you want to assign whatever it scans into the location of a.
//printf("%c\n", a); // the '\' character is an escape character. With a letter after it, it becomes an escape sequence.
//printf("\\"); // you can send a \ sign by placing an escape character before it!

// variable names cant start with numbers (1, 2, 3, ...) or _
// you also can't use any other special characters in the var name (like &)
// you cant have double _, and can't have _ following by capital letters.
// you also can't have more than 31 characters in the variable name.
// you can do int x = 28 (decimal) or int x = 034 (octal, 0 to 7) or int x = 0x1C (hexadecimal).

/*
 for doubles, in scanf you must use %lf, not %f. In printf, it does not matter.
 in the printf function above, we have 2 arguments "%f" and a.
 = is an assignment operator, aka it tells the computer that it wants to assign whatever is to the right to the left.
*/

#include <stdio.h> // the preproccesor only looks at things with the #
#define M_G 9.81
int greeting1(int n); // a function prototype, telling the compiler knows that this function exists. Not nessecary in every IDE.

int main(void) {
    greeting1(1); // calling the function inside of main and passing an argument in.

    double Accel_1;
    printf("size of double = %d bytes\n", sizeof(double)); // sizeof shows the number of bytes a double has. (multiply by 8 to get bits)
    ;
    char c = -1;
    printf("%u\n", c); //%u gives the unsigned version of the char c.

    // declaring variables
    double p, m, u, a;
    // initializing variables
    p = 20.0;
    m = 5.0;
    u = 0.2;
    // calculating acceleration
    a = (p - u * m * M_G) / m;
    // printing acceleration
    printf("The acceleration is %1.3lf m/s^2", a);
    return 0;
}

int greeting1(int n) { // a cool custom function, it's skeleton is just like the main function...
    int i; // in C99, this is required. In C11, you can just do int i=0 in the for loop proper.
    for (i=0; i<n; i++) {
        printf("Good Afternoon!\n");
    }
}
