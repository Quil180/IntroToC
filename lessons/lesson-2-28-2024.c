#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define n 8

double mean(int a[]);

int main (void) {
  // little review of last time
  // we did not, however, pass arrays into the funny functions... so... how do we do that???
  int a[20]; // this array has 80 bytes total (4 per element).

  // here's a 2 dimensional array.
  double b[2][3]; // it has 2 rows, and 3 columns (for six elements total) with a total of 48 bytes total (8 per element).
  // its memory allocation will bytes (from lowest heexadecimal to largest)
  // a[0][1] then a[0][2] then a[1][0] then a[1][1] then a[1][2]
  
  // for strings, they always have one extra element, the \0 (string terminator) and therefore both of the following are the same.
  char string1[] = "Hello";
  char string2[] = {'H', 'e', 'l', 'l', 'o', '\0'};

  int d[8] = {3,21,0,-3,34,-14,45,17};  
  printf("The mean is %lf\n", mean(d));

  int minval = d[0];
  for (int i=1; i<8; i++) {
    if (minval>d[i]) {
      minval = d[i];
    }
  }
  printf("The minimum value is %d.\n", minval);

  int maxval = d[0];
  for (int i=1; i<8; i++) {
    if (maxval<d[i]) {
      maxval = d[i];
    }
  }
  printf("The maximum value is %d.\n", maxval);

  // selection sorting algorithm. (sorting algorithm moments)
  // essentially, if the first element is larger than the one in front of it, then they swap until it is smaller than the next element. continue with the rest of the elements comparing to the rest.
  int i, j, imin, temp, k;
  for (i=0; i<(n-1); i++) {
    imin = i;
    for (j=i+1; j<n; j++) {
      if (d[imin] > d[j]) {
        imin=j;
      }
    }
    if (imin != i) {
      temp=d[i];
      d[i] = d[imin];
      d[imin] = temp;
    }
    for (k=0; k<n; k++) {
      printf("%d\t", d[k]);
    }
    printf("\n");
  }
  
  // bubble sort.
  printf("BUBBLE SORT\n");
  // if the value to the next element is smaller than the current element, swap. keep doing that. (for some reason isn't working for me)
  int e[n] = {3,21,0,-3,34,-14,45,17};
  for (i=0; i<n; i++) {
    for (j=0; j<n; j++) {
      if (e[j] > e[j+1]) {
        temp = e[j];
        e[j] = e[j+1];
        e[j+1] = temp;
      }
    }
    for (k=0; k<n; k++) {
      printf("%d\t", e[k]);
    }
    printf("\n");
  }
  
  // now we can make a cooler dice roller with this ability to store data in arrays.
  int freq[6] = {0};
  int face, rollcount;
  srand(time(NULL));

  for (rollcount = 1; rollcount <= 10000; rollcount++) {
    face = 1+rand()%6;
    freq[face-1]++;
  }
  for (k=0; k<6; k++) {
  printf("Side %d: %d\t", k+1, freq[k]);
  }
  printf("\n");

  return 0;
}

double mean(int a[]) { // assigning a parameter to be an array
  double sum = 0, mean1;

  for (int i = 0; i < n; i++) {
    sum += a[i];
  }
  return mean1 = (double)sum/(double)n;
}
