#include <stdio.h>
#define N 5

int main (void) {
  // strings via an array????
  char name[20]; // this is a one dimensional array that holds 20 (only an integer number) characters max (with numbered from 0 to 19).
  printf("What is your name? ");
  scanf("%s", name); // for arrays, you don't need the &.
  printf("Your name is: %s\n", name); // conversion specifier is %s for string!!
  // It also does not allow spaces as it terminates after a space.
  
  int a[6] = {0}; // the size of this array is 24 bits (4 per int spot)
  a[5] = 20;
  a[3] = 50;
  // for example, the address of the 4th array element is 0x200C (or bit 12 in hexadecimal)
  for (int i = 0; i<6; i++) {
    printf("a[%d] is: %d\n", i, a[i]);
  }

  // now for 2 dimensional arrays (matrix) with rank 2 (amount of dimensions).
  // b[rows][collumns]
  int b[2][3]; // total of 6 elements with extents of 2 and 3 and total size of 24 bits
  /* Theh array above looks like the following:
  a[0][0] a[0][1] a[0][2] - row 1
  a[1][0] a[1][1] a[1][2] - row 2
  */
  // The way that C assigns memory is row based (one row then the second row)
  // aka a00 then to a01 then a02 then a10 then a11 then a12 with a[1][2] will have a code of 0x2014 (or 20)
  
  char str1[] = "Hello"; // will have 6 elements AND a /0 (terminating character)
  char str2[] = {'H', 'e', 'l', 'l', 'o', '\0'}; // is the same thing as above.
  // there is also strlen which will give the length of a string and ignore the terminating character.
  
  // making a variable array size thing
  double xf = 10, x0=-10;
  double x[N];
  for (int i=0; i < N; i++) {
    x[i] = x0 + i*(xf-x0)/(N-1);
    printf("%.2lf ", x[i]);
  }
  printf("\n");

  return 0;
}
