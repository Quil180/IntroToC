#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define ROLL 500000

// if you use void, you cannot return anything (except 'return;'), and the function will not work if you try to do that.
// function signatre/prototype.
double force(double);

int main(void) {
  // for the random number generator, you have to do rand()%(range+1) + (starting number)
  // for a range between 5-10 it would be: rand()%6+5
  
  srand(time(NULL)); // changing the seed for the num generator based on the time.
  int face, one=0, two=0, three=0, four=0, five=0, six=0; // doing the funny variable stuff.

  for (int i = 1; i<=ROLL; i++) {
    face = 1 + rand() % 6; //for a six sided dice (1 to 6 therefore 5 numbers), with a base number of 1.
    switch (face) {
      case 1:
        one++;
        break;
      case 2:
        two++;
        break;
      case 3:
        three++;
        break;
      case 4:
        four++;
        break;
      case 5:
        five++;
        break;
      case 6:
        six++;
        break;
    }
  }

  printf("Rolls:\n1: %d (%.2lf%)\n2: %d (%.2lf%)\n3: %d (%.2lf%)\n4: %d (%.2lf%)\n5: %d (%.2lf%)\n6: %d (%.2lf%)\n", one, (double)one/(double)ROLL*100, two, (double)two/(double)ROLL*100 , three, (double)three/(double)ROLL*100, four, (double)four/(double)ROLL*100, five, (double)five/(double)ROLL*100, six, (double)six/(double)ROLL*100);
  printf("force is %lf\n", force(4));
  return 0;
}

double force(double t) {
  double p = 2*(t-5) + 20;
  return p;
}
