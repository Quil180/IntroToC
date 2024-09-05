#include <stdio.h> // how a header file works is that it declares what functions will exist with extern, then importing a .c file using "#pragma importf name.c"
// to import it, you do
// #include "name.h"
#include "header/statlib.h"

#define N 8

double mean(int, double a[]);

int main (void) {
  // last time we did funny array sorting algorithms and such, which is what is below.
  double a[8] = {3,21,0,-3,34,-14,45,18};  
  printf("The mean is %.2lf.\n", mean(N, a)); // passing in the array a uses no brackets as it's already assumed to be using the skeleton above as it is treating a as pointer to the memory placement of it.
  /*
  double minval = a[0];
  for (int i=1; i<8; i++) {
    if (minval>a[i]) {
      minval = a[i];
    }
  }
  printf("The minium value is %.2lf.\n", minval);

  double maxval = a[0];
  for (int i=1; i<8; i++) {
    if (maxval<a[i]) {
      maxval = a[i];
    }
  }
  printf("The maximum value is %.2lf.\n", maxval);
  */
  // but now for the new stuff.
  /* the database for students' GPA */
  double data[] = {3.33, 3, 3.1, 3.93, 2.3, 2.31, 3.99, 2.8, 2.9, 3.7};
  double gpa;
  int i, totnum, num;/* the database for students' GPA */

  gpa = median(totnum, data);
  printf("The median GPA for all students is %.2f\n", gpa);
  totnum = sizeof(data)/sizeof(double);
  printf("The total number of students is %d\n", totnum);
  gpa = mean(totnum, data);
  printf("The average GPA for all students is %.2f\n", gpa);
  gpa = minimum(totnum, data);
  printf("The lowest GPA for all students is %.2f\n", gpa);
  num = aboveVal(totnum, data, 3.0);
  printf("The number of students with GPA 3.0 or above is %d\n", num);
  sort(totnum, data);
  printf("The student record sorted in ascending GPA:\n");
  for(i=0; i< totnum; i++) {
    printf("%.2f ",data[i]);
  }
  printf("\n");
  gpa = median(totnum, data);
  printf("The median GPA for all students is %.2f\n", gpa);

  return 0;
}
/*
double mean(int  n, double a[]) { // assigns the same locations in memory to a different name.
  double sum = 0, avg;

  for (int i = 0; i < n; i++) {
    sum += a[i];
  }
  return avg = sum/(double)n;
}
*/
