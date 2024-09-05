#include <stdio.h>
#include <math.h>

// to convert from one standard to another you divide by the amount of bits in the thing (hexa = 16, binary = 2, octant = 8)
// After that you then get the remainder and keep on dividing. After that reverse the order and that is the new number.
// Ex: 27 (in decimal form) to octant -> 27/8 = Remainder of 3, 3/8 = Remainder of 3. Therefore the octant form of 27 is  33.

// To read binary, you read from right to left with the first number being 2^0, then 2^1, then 2^2, etc., etc.
// Ex1: 0001 is the number 1 (in decimal, 1*2^0 + 0*2^1 + 0*2^2 + 0*2^3).
// Ex2: 1010 is the number 9 (in decimal, 0*2^0 + 1*2^1 + 0*2^2 + 1*2^3).

// Convert to Octant, Decimal, and HexDecimal: 1101110
// Decimal = 0*1 + 1*2 + 1*4 + 1*8 + 0*16 + 1*32 + 1*64 = 110
// Octant (group of 3) -> 001 101 110 -> 156
// HexaDecimal (group in 4) -> 0110 1110 -> 6E (E = 14)

// unsigned number (all positive) means that 8bits will represent 0 -> 255
// signed number (has negative and positive) means the 8 bits will represent -1 -> -128 and 0 -> 127 (2's Complement Representation of Signed Numbers)

// The computer only understands 0's and 1's.
// assembly and High level languages (like C or Python or Rust) convert to machine code then it runs.
// Assembly uses instructions (step by step, no skipping).
// High level languages are portable to different computer architectures

// There also is scripting language (this is where the language does not compile but is interpretted).
// The scripting language is run on the interpretter (never compiled), not the CPU, and therefore runs slower.

// C has been standardized (aka standard libraries made) in 1989 (C89), 1999 (C99), and 2011 (C11).
// the Functions in the Standard Library are optimized for performance first and to portable on as many machines as possible.

int main(void) {
    float side1, side2, base, temp;

    printf("Please Enter Sides: ");
    scanf("%f %f", &side1, &side2);

    temp = (side1*side1)+(side2*side2);
    base = sqrt(temp);

    printf("The base is length %f\n", base);

    return 0;
}
