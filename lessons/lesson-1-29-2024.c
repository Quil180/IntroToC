// Preprocessor commands
#include <stdio.h>
#include <math.h>

int main(void) {
  // A expression is a sequence of operators (+, -, /, *, %, and paranthesis) and operands (3, 6, i).
  // % gives you the remainder of the division.
  // 5 / 2 will be 2 (as both inputs is integer). 5.0 / 2.0 is 2.5 (as both inputs are floats).
  double a = 555.997;
  printf("%8.2lf\n", a);
  
  int b;
  printf("Please type a number to see if it can be divisible by 3: ");
  scanf("%d", &b);
  if (b % 3 == 0) { // using the % operator to see if a number can be divided evenly by 3.
    printf("%d is divisible by 3.\n", b);
  } else {
    printf("%d is not divisible by 3.\n", b);
  }

  // You can also cast variables to other variables.
  int c = 5;
  b = 2;
  double d = (double)c / (double)b; // type casting the int variable to temporarily be treated as a double.
  // You can also do the same from double to int, though it will truncate the double at the decimal place. NOT ROUND.
  printf("d is %lf\n", d);

  // A binary operation has only two operands. A unary operation has only one operand. An expression can have multiple operands and operrators.
  /*
  The Precedence of Operators:
    - Paranthesis is first
    - Then unary operations
    - Then Multiplication, division, and remainder
    - Then addition and subtraction
    - Then comparing (greatter than, or less than) [True = any number but 0]
    - Then equal to or not equal to.
    - Then && and ||
    - And lastly, =, +=, -=, etc.
  */
  // ASSOCIATIVE RULE
  // IF the unary operators are in the same level of precedence, then it is done right to left.
  // IF the binary operators are in the same level of precedence, then it is done left to right.

  double p = pow(2.0,3.0); // This is 2^3 using the math.h library
  double m = sqrt(2.0);
  printf("2 to the power of 3 is %lf\nThe square root of 2 is %lf\n", p, m);

  // What about doing a quadratic equation solver????
  double a1, b1, c1, x1, x2;
  printf("Please enter a Value for A1, B1, and C1: ");
  scanf("%lf %lf %lf", &a1, &b1, &c1);
  double g = b1*b1-4.0*a1*c1;
  double h = sqrt((double)g);
  x1 = (-b1 + h ) / (2*a1);
  x2 = (-b1 - h ) / (2*a1);
  printf("The roots are %lf and %lf", x1, x2);


  return 0;
}
