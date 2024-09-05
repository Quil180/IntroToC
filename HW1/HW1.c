#include <stdio.h>

int main(void) {
  // First program
  printf("First Program\n");

  int year;

  printf("Please enter a birthyear for Jane: ");
  scanf("%d", &year);
  printf("\nHer name is Jane, \n");
  printf("\nShe was born in %d\n", year);

  // Second program
  printf("\nSecond Program\n");
  int first, second, third;

  printf("Please enter the first number: ");
 scanf("%d", &first);
  printf("Please enter the second number: ");
  scanf("%d", &second);
  printf("Please enter the third number: ");
  scanf("%d", &third);

  int one = first + second;
  int two = first / third;
  int three = second * third;

  printf("\nThe sum of the first and second number is %d.", one);
  printf("\nThe difference between the first and third number is %d.", two);
  printf("\nThe product of the second and thurd number is %d.", three);

  // Third program
  printf("\n\nThird Program\n");

  int fahrenheit;
  printf("Please enter degrees in Fahrenheit: ");
  scanf("%d", &fahrenheit);
  double celsius = ((fahrenheit - 32.0) * 5.0) / 9.0;
  printf("It is %f degrees Celsius.", celsius);

  return 0;
}
