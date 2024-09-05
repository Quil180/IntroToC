#include <stdio.h>

// declaring a function 'skeleton' so that main() can use it while having that code proper at the end of the code.
double force(double t);
unsigned int factorial(int n);

int main(void) {
  printf("%lf\n", force(5.5));
  printf("%d\n", factorial(5));

  // i can also print the function's name.
  printf("%s\n", __func__); // prints main
  return 0;

  // test has a matching section.
  // then the compiling steps.
  // escape sequences
  // valid and invalid identifiers
  // matching %d with int and such
  // converting fromdecimal to binary or hexa or octa.
  // remember continue; and break;
  // remember castng from like int to double.
  // random number generator, and the range of it. (scaling factor and such)
  // pass-by value (like 3). pass-by reference (like &x).
  // any number other than 0 is true.
  // function prototypes.
  // switch statements
  // x = ++y (y++, then x = y). x = y++ (x = y, then y++).
}

// only one value can be returned per function.
double force(double t) {
  return t;
}
// you can also call the same function in the function proper!
unsigned int factorial(int n) {
  unsigned int i, f;

  for(i=1, f=1; i<=n; i++) {
    f*=i;
  }

  for(i=1; i>=n; i++) {
    factorial(n);
  }

  return f;
}
