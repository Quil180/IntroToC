#include <stdio.h> // The preprocessor includes this library into the code proper.
#define KmPerMile 1.609 // the pre processor will replace all instances of this with 1.609

int main(void) {
    /*
    We learn C to understand how the computer actually function.
    C is essentially only used for system development or research.
    The preprocessor slightly modifies the code, then it moves to the compiler which translates C to object code. After that the linker links library functiond into machine code (like sqrt).
    The loader then actually loads the program into memory for the CPU to run, and then the CPU runs the program.
    */

    int x;
    printf("Enter the value of X>> ");
    scanf("%d", &x); // when you scan, the & tells the function that x is a variable location.
    printf("You chose a value of>> %d\n\n", x);

    int i; // declaring that i exists and is an integer.
    for (i = 0; i<10; i++) { // this thing below will be done 10 times.
        printf("This is a function included in the standard library input output.\n"); // '\n' is to put new line and an escape sequence.
        printf("i = %d\n",i);
        // '\t' is for tab.
        // i== is i=i+1
        // When you declare a var, the compiler will assign an address as well as an amount of space that it gets.

        /*
        Software devevlopment mwethod:
        - specify the problem
        - analyze the problem
        - design an algorithm
        - implement the algorithm
        - test the algorithm and program
        - maintain and update the program
        */
    }

    double miles, kms;
    printf("Enter Miles: ");
    scanf("%lf", &miles);
    kms = KmPerMile * miles; // one = is to assign. == is to compare and get a true or false.
    printf("That is %lf kilometers.\n", kms);

    /*
    Here are the data types we know so far:
    int - 2 or 4 bytes - can be positive or negative - -32,768 to 32,767 or -2 billion to 2 billion.
    char - 1 bytes - a single letter or number (but it'll be treated as a character, not number) or even something like & - 256 values can be stored (0 to 255 or -128 to 127)
    float - 4 bytes - 1.2E-38 to 3..4E38
    double - 8 bytes - numbers with decimals - 2.3E-308 to 1.7E308

    A variable is a memory that store's some sort of data for the program.

    When you do something like Result = sqrt(x);. You are calling the function sqrt, passing in the  argument x, and then storing it in a var called result.
    Anything in the printf is a format string. The %f is a placeholder, with the f being a conversion specifier. Arguments  in a function are seperated by a function.

    */



    return 0;
}
