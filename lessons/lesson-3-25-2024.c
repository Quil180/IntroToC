#include <stdio.h>

int main(void) {
  // reminder that the pointers
  // pointers are simply just a reference to a variables memory location.
  // if you add to a pointer, then it moves up by one variable.
  int a[6] = {100, 200, 300, 400, 500, 600}, *p;
  p = &a[0];
  printf("*p = %d\n", *p); // will output 100
  p += 3; // moves the pointer to the memory address of the second element in
          // the array a[].
  printf("new *p = %d\n", *p);       // will output 200
  printf("*(p-1) = %d\n", *(p - 1)); // will output 100

  // now with two dimensional arrays!!
  int a2[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};

  p = &a2[1][0];               // points to the memory location of 5.
  printf("new *p = %d\n", *p); // will print 5

  // you can also go backwards by doing say...
  printf("p[-2] = %d\n", p[-2]);

  printf("\n"); // example below of pointers being used like that
  // We will copy the src string into the destination string!

  char src[100] = "Original String", dest[100], *sp,
       *dp; // declared a source, a destination, and 2 pointers to both the
            // source and destination
  // remember that the last element of the src array is a terminating character
  // (\0)
  sp = &src[0];
  dp = &dest[0];

  // now for the copying!!
  while (*sp != '\0') {
    // copies the source character
    *dp = *sp;
    // then increments the pointer to the next variable/element
    sp++;
    dp++;
    // you could also format the above to be '*dp++ = *sp++' but I personally
    // find it harder to read. remember that var++ uses the variable THEN
    // increments it by one. ++var does the opposite (increments THEN uses).
  }
  // we have a problem though as no terminating character will be put in!!
  *dp = '\0'; // now it is identical to the source. NOW, do remember that the
              // value of the terminating character is ZERO.
  // Therefore, you could reformat the above toooo:
  while ((*dp++ = *sp++))
    ;

  // test case to show that it is working properly.
  printf("%s\n", dest);

  // now for dynamically allocated memory...
  // we can use the funny malloc(size_t size)
  // so now array length doesn't matter!!
  // dynamic allocation means you dont have a set size until the program is
  // actually run, aka, its unknown!! the memory is allocated during 'runtime',
  // or after the compiler is done... compiling and with this... we can return a
  // pointer from a function via a global variable intermediary OR via
  // dynamically allocated memory...

  return 0;
}
