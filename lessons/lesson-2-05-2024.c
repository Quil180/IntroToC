#include <stdio.h>
#include <stdbool.h> // Must include if you want to use booleans.

int main (void) {
  // Remember to make some flowcharts for some previous HWs for praactice.

  // Selection statement
  // if (expression to be seen if true) {
  //  statement to be run if the expression is true.
  // }
  int x = 1;
  if (x < 5) {
    printf("x is less than 5\n");
  }

  // Booleans are 1 bit (0 or 1).
  bool i = true; // Declaring a boolean i and initializing its value to be 1 (true).
  printf("Before if %d\n", i);

  if (i) // this also works if your if statement only has ONE statement to run.
    i = false;
  printf("After if %d\n", i); // Most people don't do this though for insurance...

  //  If-Else also exists!
  if (i) {
    i = false;
    printf("After if-else is true %d\n", i);
  } else {
    i = true;
    printf("After if-else is false %d\n", i);
  }

  // What about else if????
  if (i) // This i being true has the highest priority.
    i = false;
  else if (i == false) // The else if's are done in order of checking from top to bottom. Therefore order matters.
    i = true;
  else if (x < 5)
    printf("X is less than 5.");
  else  // This last else is required to capture any other possibilities (or default case).
    printf("The Else if was false the entire time.");

  /*
  double t;
  printf("Please input a number for t: ");
  scanf("%lf", &t);
  if (0 <= t && t <= 3) {
    printf("Answer: %lf\n", 20.0);
  } else if (t > 3) {
    printf("Answer: %lf\n", 4.0*(t-3.0)+20.0);
  } else {
    printf("Error: t is less than 0.\n");
  }
  */ 

  char grade;
  double score;

  printf("Enter Letter Grade: ");
  scanf("%c", &grade);

  if (grade == 'A' || grade == 'a') {
    score = 4.0;
  } else if (grade == 'B' || grade == 'b') {
    score = 3.0;
  } else if (grade == 'C' || grade == 'c') {
    score = 2.0;
  } else if (grade == 'D' || grade == 'd') {
    score = 1.0;
  } else if (grade == 'F' || grade == 'f') {
    score = 0.0;
  } else {
    score = -1.0;
    printf("Grade inputted is not A, B, C, D, or F (case-insensitive).\n");
  }
  
  if (score != -1.0) {
    printf("Score is %lf\n", score);
  }

  // Switch statements!
  /*
  switch (expression) {
    case A:
      statement;
      statement;
      break;
    case B:
      statement;
      break;
    default:
      statement;
      break;
  }
  */
  
  int y;
  printf("Give a value to y: ");
  scanf("%d", &y);

  switch (y) { // the (y) is what the cases check on.
    case 1: // 1 is the label, the colon is like the "curly brackets" in an if statement.
      printf("y is 1\n");
      break;
    case 3:
      printf("y is 3\n");
      break;
    default:
      printf("y is not 1 or 3\n");
      break;
  }

  // Remember:
  // x<5 ? y=2 : y=4; is (is this true?) ? (do this then) : (else do this);
  
  int f = y==1 ? 2 : 3;
  printf("f is %d\n", f);

  return 0;
}
