/*Student Assignment Submission Form
I declare that the attached assignment is wholly my own work in accordance with
UCF Academic Policy. No part of this assignment has been copied manually or
electronically from any other source (including web sites) or distributed to
other students. My name is: Awad Yousef, Date: 3/12/2024 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define RACERS 5

// FUNCTION SKELETONS
// returns the maximum value in the array
double find_max(double array[], int length);
// returns the minimum value in the array
double find_min(double array[], int length);
// combines the 2 source arrays and then outputs the combination into dest[]
void combine_arrays(double src1[], int length1, double src2[], int length2,
                    double dest[]);
// prints the entire array with 2 decimal points seperated by a comma.
void print_array(double array[], int length);

int main(void) {
  // declaring all the variables that will be used.
  int i;
  double men[RACERS];
  double women[RACERS];
  double combined[RACERS * 2];

  // random number generator for the values in the men's and women's races.
  srand(time(NULL));
  for (i = 0; i < RACERS; i++) {
    men[i] = 8.99 + (((double)rand() / (double)(RAND_MAX)) * 7.00);
    women[i] = 8.99 + (((double)rand() / (double)(RAND_MAX)) * 7.00);
  }

  printf("Fastest time among the men's race: %.2lf\n", find_min(men, RACERS));
  printf("Slowest time among the men's race: %.2lf\n", find_max(men, RACERS));
  printf("Fastest time among the women's race: %.2lf\n",
         find_min(women, RACERS));
  printf("Slowest time among the women's race: %.2lf\n",
         find_max(women, RACERS));

  printf("Men's Data:\n");
  print_array(men, RACERS);
  printf("Women's Data:\n");
  print_array(women, RACERS);

  combine_arrays(men, RACERS, women, RACERS, combined);

  return 0;
}

// ALL THE FUNCTIONS DECLARED IN THE SKELETON.
double find_max(double array[], int length) {
  double max = 0;
  // Actually finding the max value by seeing if the element is larger than the
  // max value. If it is, then you assign that value to max.
  for (int i = 0; i < length; i++) {
    if (max < array[i]) {
      max = array[i];
    }
  }

  return max;
}

double find_min(double array[], int length) {
  double min = 100;
  // Actually finding the min value by seeing if the element is smaller than the
  // min value. If it is, then you assign that value to min.
  for (int i = 0; i < length; i++) {
    if (min > array[i]) {
      min = array[i];
    }
  }

  return min;
}

void combine_arrays(double src1[], int length1, double src2[], int length2,
                    double dest[]) {
  // doing a for loop for the entire length of both arrays combined (as that
  // will be the ending length of the final array).
  for (int i = 0; i < (length1 + length2); i++) {
    // for the first 5 elements, it will take the values from the first source.
    if (i < RACERS) {
      dest[i] = src1[i];
    }
    // for the second 5 elements, it will take the values from the second
    // source.
    if (i > RACERS) {
      dest[i] = src2[i - RACERS];
    }
  }
  // printing the combined array to the terminal.
  printf("Combined:\n");
  print_array(dest, RACERS * 2);

  return;
}

void print_array(double array[], int length) {
  // doing a loop for every element in the array.
  for (int i = 0; i < length; i++) {
    // prints the element in the array
    printf("%.2lf", array[i]);
    // and then, if the element is the last one in the array, then it prints a
    // new line. if not, then it simply puts a comma.
    if ((i + 1) == length) {
      printf("\n");
    } else {
      printf(", ");
    }
  }

  return;
}
