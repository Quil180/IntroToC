#include <stdio.h>

// now you can have function like macros
#define mul(x,y) ((x)*(y))

// you can also have global variables like so that can be used in other files
// global variables are stored at the top of the memory (so that everything below it can use said variable data)
int g = 55;

// to make a file scope (aka a global var that only can be used in this file):
static int f = 44; // the value of static will retain the value of 44 when defined inside of a function.
// there is also external (so that it can be used throughout the entire lifetime of the program)
// there is also register (which will place the variable in high speed memory)

int func(void);

int main(void) {
  // this lecture is gonna still be input output.
  // remember %g is the smart choosing of if it should be with or without decimals.
  // you can also print a string:
  printf("%s\n", "hola, soy dora");
  // or via this:
  char string[] = "This string is produced via an array, and outputted via %s."; // this is a local variable that is only able to be used in this function.
  // local variables get unallocated in ram after the function is exited!!
  printf("%s\n", string);
  // you can also have precision in the string:
  printf("%20s\n", string);
  // remember that %p gives the pointer (aka the memory address of a variable).
  printf("The address for string is: %p\n", string);

  // if you put a minus in the conversion specificer, then it will be left justified (instead of right).
  // if you a plus sign, then your signed conversions will have a plus or minus sign.
  // using a # in the conversion specifier, then you will get an alternate form 
  // (o for octal, x for hexadecimal in all lowercase, X for hexadecimal in all UPPERCASE):
  int a = 1514625135;
  printf("This is a printed using regular int conversion: %d\n", a);
  printf("This is a printed using int conversion with #: %#X\n", a);
  int b = 12151;
  printf("This is with #b: %b\n", b);

  // for scanf you have:
  // scanf(format-control-string, pointer-to-variable);
  // That is why you must use %lf for doubles (as it will read the bites individually, all 8)

  // but how do you get rid of the \n when you enter a string into a scanf.
  printf("Please enter a character: ");
  char c; // this variable, for example, has a function scope
  {
    char l = 'l'; // this has a block scope
  }
  scanf("%c", &c);
  printf("Please enter a string: ");
  char str[50];
  scanf("%s", str);
  printf("The character was %c and the string was: %s\n", c, str);

  // to suppress the characters i dont want (like in getting hours and minutes):
  int hour, sec;
  printf("Please enter a hour:second: ");
  scanf("%d%*c%d", &hour, &sec);
  printf("You typed hour %d and %d seconds\n", hour, sec);

  // now lets print g (we don't need to pass it into main function as its global)
  printf("The global variable is %d\n", g);

  func();
  func();
  // you cannot do the following, as the var x is a local variable (and not able to be called outside of func())
  /*
  printf("printing x outside of func(): %d", x);
  */

  int result = mul(5, 4);
  printf("Using the preprocessing macro mul(5, 4) you get: %d\n", result);

  return 0;
}

int func(void) {
  static int x = 10; // on the second go, x will be 11, as it was never destroyed upon function completion.
  int y = 10; // on the second go, y will be recreated with the value of 10, as it is destroyed upon function completion.
  printf("x = %d\ty = %d\n", x, y);
  x++;
  y++;
  printf("x = %d\ty = %d\n", x, y);
  return 0;
}
