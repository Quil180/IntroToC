#include <stdio.h>

int main(void) {
  // there are things such as variable length arrays.
  // vectorsssss
  // scalar value is gotten from a dot product!!!!
  // matricies now
  // you can model them using arrays.
  int m=5, n=5;
  int a[m][n];

  printf("printing out a 5x5 matrix\n");
  for (int i=0; i<m; i++) {
    for (int j=0; j<n; j++) {
      printf("%15d", a[i][j]);
    }
    printf("\n");
  }

  // to multiply a matrix with a vector the number of COLUMMNS (left to right) in the matrix match the amount of elements in the vector.
  // you also will get a vector in the end, with the same amount of elements as there were ROWS (top to bottom) in the matrix.
  
  // %i can also work, too. In scanf, it will also accept hexadecimal as well as octal.
  // %e or %E displays floats in exponential form
  // %g or %G will choose, smartly, between regular form or exponential.
  // remeber that %x will display the address of the variable.
  int x;
  printf("x's address is: %x\n", &x);
  // %p will also show all of the bits in the address (64 bits in my case).
  printf("x's address is also: %p\n", &x);

  // you can also declare a string this way! (using a pointer).
  char *string = "this is a string created by using a pointer.";
  printf("%s\n", string);

  // you can also make g more precise
  printf("%.4g\n", 1234.532); // this will print with 4 sig figs.

  return 0;
}
