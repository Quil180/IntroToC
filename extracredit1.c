#include <stdio.h>

int main (void) {
  int people[20] = {3000, 4000, 5000, 6000, 7000, 8000, 9000};
  int salaryRanges[9] = {0};

  for (int i = 0; i < 20; i++) {
    int salary = 200+0.09*people[i];

    if (salary >= 1000) {
      salaryRanges[8]+=1;
    } else if (salary >= 900 && salary <= 999) {
      salaryRanges[7]+=1;
    } else if (salary >= 800 && salary <= 899) {
      salaryRanges[6]+=1;
    } else if (salary >= 700 && salary <= 799) {
      salaryRanges[5]+=1;
    } else if (salary >= 600 && salary <= 699) {
      salaryRanges[4]+=1;
    } else if (salary >= 500 && salary <= 599) {
      salaryRanges[3]+=1;
    } else if (salary >= 400 && salary <= 499) {
      salaryRanges[2]+=1;
    } else if (salary >= 300 && salary <= 399) {
      salaryRanges[1]+=1;
    } else if (salary >= 200 && salary <= 299) {
      salaryRanges[0]+=1;
    }
  }

  for (int i = 0; i<9; i++) {
    printf("%d-%d: %d\n", 200+100*i, 200+100*i+99, salaryRanges[i]);
  }

}
