#include <stdio.h>

int main(void) {
  /*
    There are 4 sections:
  Declaration of variables (int x;)
  Initialization of variables (x = 10;)
  Processing the variables (int y  = x*10;)
  Printing the variable (printf("%d", y);)
  */

  // While loop
  int x; // Declaration section.
  int sum;

  x = 0; // initialization section.
  sum = 0;

  // Processing Section.
  while (x <= 100) { // Prints out the value of x 5 times (from 0 to 4, aka while x is less that 5).
    //printf("x is %d ", x); // Output.
    sum += x;
    x++;
  }
  printf("The sum is %d\n", sum);

  // factorial.
  unsigned int i, factorial, n; // Initialization
  
  // Processing
  i = 1;
  factorial = 1;
  
  // Processing
  printf("Please enter a value for n: ");
  scanf("%u", &n);

  while (i<=n) {
    factorial*=i;
    i++;
  }

  printf("The factorial %d! is %u.", n, factorial);

  printf("\n");

  // Counter controlled repetition
  //   Loop repeats until the counter reaches a certain value.
  //   The number of repetition is known.

  // Sentinal Controlled Repetition.
  // Loop is controlled until a signal value is entered (aka you enter -1 and it exits).
  
  // Funny grade calculator (Counter Controlled Repetition).
  int grade, count=1, total=0, num;
  double gpa;

  printf("Please enter the amount of classes you took: ");
  scanf("%d", &num);

  while (count <= num) {
    printf("Enter Grade %d: ", count);
    scanf("%d", &grade);
    total+=grade;
    count++;
  }
  gpa=(double)total/(double)num;
  printf("The Avg GPA is: %lf\n", gpa);

  // Sentinal Controlled Repetition Version of the GPA calculator.
  int signal = -1;
  int highgrade = 4;
  count=1, total=0;

  printf("Enter Grade %d: ", count);
  scanf("%d", &grade);
  total+=grade;
  while (grade != signal) {
    if (grade >= 0 && grade <= highgrade) {
      printf("Enter Grade %d: ", count);
      scanf("%d", &grade);
      total+=grade;
      count++;
    } else {
      printf("The Grade you entered is an invalid number.\n");
    }
    printf("Enter Grade %d: ", count);
    scanf("%d", &grade);
  }
  gpa=(double)total/(double)count;
  printf("The Avg GPA is: %lf\n", gpa);
  
  // Do while statement.
  /*
  do 
    printf("a");
  while(count>0);
  */

  // For loop.
  /*
  int f;
  for (i=1, f = 1; i<5 && f<5; i++, f++) { // setting variables i and f as 1, then checking if they are less than 5, and at the end of the progrm, upping the vallue by 1.
    printf("\n%d, %d\n", i, f); // if the second expression is true, do this.
  }
  */

  int rows = 7;
  int h;
  int j;
  for (h=1; h<rows; h++) {
    for (j=1; j<h; j++) {
      printf("%d", h);
    }
    printf("\n");
  }

  return 0;
}
