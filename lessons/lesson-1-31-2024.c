#include <stdio.h>

int main(void) {
  /*
  Relational operators are used to compare 2 values.
  
  Semantic error is that the code is written 'grammatically' correct but gets the wrong result.

  Logical operators:
  ! - negation or NOT
  && - AND (as long as one of the 2 are not 0, then it will show 1).
  || - or
  
  There are six Bitwise operators:
  & - AND - looks at all the bits in 2 integers and sees if they are 1. If yes, then the result for THAT BIT is 1. - Logical multiplication.
  | - OR - looks at all the individual bits in 2 integers and see if they are both either 0 1, 1 0, or 1 1. If yes, then the result's bit (for that placement) is 1. - Logical addition.
  ^ - exclusive OR - Same as OR, but if both bits are 1 then it returns 0.
  << - Left Shift - Shifts the bits to the left by a number to its right. (the 'new' bits are 0).
  >> - Right Shift - Shifts the bits  to the right by a number to its right. (the 'new' bits are dependent on the sign of the number).
  ~ - One's Complement - Flip evevry bit from 0 to 1 or vice versa.

  Compound Assignment:
  += - The left value plus the right value.
  -= - The left value minus the right value.
  *= - The left value multiplied by the right value.
  /= - The left value divided by the right value.
  %= - The left value's remainder when divided by the right value.
  &= - The left value has logical multiplication done with the right value.
  |= - etc.
  ^= - etc.
  <<= - etc.
  >>= - etc.

  sizeof(float *) would get you 4.
  The * is a pointer to the address to a float in this example

  Conditional Operator:
  op1 ? op2 : op3;
    If op1 is true, then do op2. Else do op3.

  Ex:
    int x = 5;
    int y = x<4 ? 1 : 0;
    // This will print out 0.

  Format Control string - The strings that contain the conversion specifier.
  */

  int year;
  printf("Type a year: ");
  scanf("%d", &year);

  if (year%4 == 0 && year%100 != 0 || year%400 == 0) {
    printf("The year %d is a leap year.\n", year);
  } else {
    printf("The year %d is not a leap year.\n", year);
  }

  int i, j; // simple statement
  i = 5;
  i++; // i = i+1; ibecome 6.
  j = ++i; // i = i+1; j=i; i becomes 7, and then j becomes i (aka 7).
  j = i ++; // j = i; i = i+1; j will become 7, and then i becomes 8.

  { // compound statement. The compilr treats it as one "line"
    int h;
    h = 90;
    h++;
  }

  return 0;
}
