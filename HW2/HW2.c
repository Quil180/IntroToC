#include <stdio.h>
#define PI 3.14 // defining a constant for pi.

int main(void) {
  // Program from problem 5. PLEASE IGNORE.
  // defining all the variables used in the program.
  float radius;
  int height;
  double volume;
  // getting the 2 inputs of the radius and height.
  printf("Please input the radius of the cylinder (float): ");
  scanf("%f", &radius);
  printf("Please input the height of the cylinder (int): ");
  scanf("%d", &height);

  // calculating the volume then displaying it to the user.
  volume = PI*radius*radius*height;
  printf("The volume of the cylinder is %lf\n", volume);

  return 0;
  

  //Hardcoding values to show certain cases.
  int x = 7;
  float y = 0;

  // getting the 2 variables defined via the user input.
  /*
  printf("Please enter a value for x (integer): ");
  scanf("%d", &x);
  printf("Please enter a value for y (float): ");
  scanf("%f", &y);
  */

  // Displaying back to the user the answer of x+y.
  printf("x+y is %f\n", x/y);

  return 0;
}
