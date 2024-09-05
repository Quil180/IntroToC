#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main (void) {
  // you can do pointers to pointers
  int i = 10;
  int *p = &i;
  int **pp = &p;
  printf("i is %d\n", **pp);

  char *s1 = "ab";
  char *s2 = "py";
  char **ps;
  ps = (char **)malloc(3*sizeof(char *)); // 3 for the size of the array (3 wide).
  ps[0] = s1;
  ps[1] = s2;
  ps[2] = NULL;
  printf("%c\n", ps[1][1]);

  // what about we create an array of all days of the week... but by using as little memory as possible;
  char *days[7] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
  // each element in this array will NOW use ONLY the memory it needs, and doesn't waste any memories!!!!
  printf("The day of the week is, %s\n", days[3]); // prints out Wednesday
  printf("The 3rd letter of Sunday is, %c\n", days[0][2]); // prints out n.
  
  // characters are simpy letters and punctuation in ASCII code (from 0 to 127)
  char c =  getchar(); // will ask for a character from the user
  putchar(c); // will simply print that character that we got from the user!! (no new line at the end)
  printf("\n");
  
  if (isdigit(c)) {
    printf("You inputted a digit.\n");
  } else {
    printf("You did not input a digit.\n");
  }

  return 0;
}
