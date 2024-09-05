#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  // practicing the nested loop from last time.
  int rows, columns, number=5;
  
  /*
  // asking the user for the amount of rows they wish to print.
  printf("Please select the amount of rows: ");
  scanf("%d", &number);
  */
  // actually printing the rows using a nested loop
  for (rows = 1; rows <= number; rows++) { // keep looping everything if the number of rows is less than or equal to a number, n.
    for (columns=1; columns<=rows; columns++) { // After that print the row number the amount of times of the number that rows is at.
      printf("%d", rows);
    }
    printf("\n");
  }
  printf("\n\n");

  // what about printing header around a multipication table?
  int i, j;

  printf("        1   2   3   4   5   6   7   8   9   10\n");
  printf("     -----------------------------------------\n");
  for (i=1; i<=10; i++) {
    printf("%4d|", i);
    for (j=1; j<=i; j++) {
      printf("%4d", i*j);
    }
    printf("\n");
  }
  printf("     -----------------------------------------\n");

  // unconditional statements
  // if a break statement is in a for loop. it will do this:
  for (i=0; i<5; i++) {
    if(i==3) {
      break; // at i = 3, the entire function would cease, alongside the program.
    }
    printf("%d ", i); // aka will print: 0 1 2
  }
  printf("\n");

  // continue; skips that certain number.
  for(i=0; i<5; i++) {
    if(i==3) {
      continue;
    }
    printf("%d ", i); // will print: 0 1 2 4 skipping 3.
  }
  printf("\n");

  // calculating the approximate value of e^x.
  double x=0.5;
  double expx= 1.0;
  double term=1.0;
  i= 1;
  while ( term > pow(10, -7) ) {
    term *= x/(double)i;
    expx += term;
    i++;
  }
  printf("approximation = %lf\n", expx);

  // how about finding the square root of a using the newton method.
  double x1, x2, a;
  int iterationMax = 100;
  a = 4.0;
  x1 = a;

  for (i = 1; i <= iterationMax; i++) {
    x2= (x1+a/x1)/2.0;
    if (fabs(x2-x1) < pow(10, -7)) {
      break;
    }
    x1 = x2;
  }
  if (i < iterationMax) {
    printf("sqrtx(%.2f) is %f\n", a, x2);
    printf("number of iterations: %d\n", i);
  } else {
    printf("The number never converged");
  }

  /*
  if you want random numbers you can do say int x = rand();
  */
  int x3;
  srand(time(NULL));
  for (i = 1; i<=10; i++) {
    x3 = rand()%6;
    printf("%d ", x3);
  }
  printf("\n");

  return 0;
}
