#include <stdio.h>

int main() {
  int x[100] = {1, 1, 1};
  int *ip = &x[0];
  printf("%d\n", *ip+*(ip+1)+*(ip+2));
  return 0;
}

