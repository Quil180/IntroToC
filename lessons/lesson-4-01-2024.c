#include <stdio.h>
#include <stdlib.h>
#include <string.h> // funny header to make strings viable

int main(void) {
  char *a = "1";
  int i;
  double d;

  i = atoi(a);
  printf("i = %d\n", i);
  a = "1.2";
  d = atof(a);
  printf("d = %lf\n", d);

  // lets intput data into a str!!!
  char str[50];
  sprintf(str, "i = %d\td = %lf", i,
          d); // stores the following into the array str.
  puts(str);  // writes a string to the console followed by a newline

  // how do we find a string length (in bytes)?
  printf(
      "the length of str is: %lu\n",
      strlen(str)); // ignores the blank spaces in the string/character array.

  // lets do some copying
  strcpy(str,
         "this was copied via strcpy"); // copies the 2nd string into the first
                                        // string!!! (overwrites the previous)
  puts(str);

  strncpy(str, "abcdefghijklmnopqrstuvwxyz",
          2); // only updates the first 2 characters of the copiette, and
              // therefore only overwrites the first 2 char.
  puts(str);

  // now for using malloc for funsies
  char *name; // creating a string called array (via a pointer)
  name = (char *)malloc(
      sizeof(char) * strlen("John") +
      1); // dynamically allocating the bytes needed for the name John
  char str1[10];
  strcpy(name,
         "John"); // actually putting in the data of "John" into the string.
  puts(name);     // displaying the name of John.

  // now for concatanations
  strcat(str, "haha"); // adds haha to str (no spaces, nothing)
  puts(str);

  printf("%d\n", strcmp(name, "haha")); // compares 2 strings via converting the
                                        // string to integers via the ascii
                                        // table then subtracting str1 by str2.
  // if both strings are EXACTLY the same, you get 0.
  // if str2 ("haha") is less than str1, you get a positive number aka str1 is
  // alphabetically higher than str2. if str1 is less than str2 ("haha"), you
  // get a negative number aka str1 is alphabetically lower than str2. remember
  // that lowercase is a higher number than uppercase.

  // the following is not on this upcoming exam

  // structure time!!!! (not in object oriented programs... cringe!!!)
  // a structure is a collection of memberes, the data types dont matter
  // its basically a class in Java
  struct Student { // structures commonly have uppercase first to help
                   // differentiate
    int id;
    char name[32];
  };
  // lets create student one
  struct Student S1;

  return 0;
}
