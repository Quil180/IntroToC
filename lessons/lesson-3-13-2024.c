#include <stdio.h>

int main(void) {
  // it's time for pointers!! (a very fun thing that is unique to C).
  // pointers are effectively just the memory location, or at least passing that
  // through. dynamic memory allocation, for example, is not possible without
  // using pointers.

  // for example, here is me printing the memory location of the variable i.
  int i;
  printf("The address of variable i is: %#x\n",
         &i); // you can also use %p to get the pointer of i (aka you do i, and
              // not &i).
  // what about arrays?
  int a[10];
  printf("The address of a[0] is: %p\n", a[0]);

  // a pointer is defined as a variable which contains the address of another
  // variable or dynamically allocated memory.

  // An asterisk infront of a variable name means it is a pointer.
  int b;
  b = 55;
  int *ptr; // this is not an indirect operator
  ptr = &b;
  printf("Size of ptr: %lu\n", sizeof(ptr));
  // the size of the pointer is related to the machine (since mine is 64bit, it
  // will give 8 bytes. For 32bit, it's 4bit). the asterisk is used for indirect
  // referencing.
  *ptr = 5; // assigning b to be 5;
  printf("b is now: %d\n", b);
  printf("*p is: %d\n", *ptr); // *ptr is the value of b!!!
  // the pointer to a pointer is a value of the pointed address (i love funny
  // definitions)

  // you can also add an integer to a pointer.
  ptr += i * sizeof(i); //(aka moving to another address # bits away).

  int array[6] = {1, 2, 3, 4, 5, 6};
  ptr = &array[0];

  printf("*ptr is now: %d\n", *ptr);
  ptr = ptr + 3; // aka moving the pointer to the address of a[3]
  printf("ptr+3 is: %d\n", *ptr); // *ptr is now a[4]

  return 0;
}
