#include <stdio.h>

int main(void) {
  int i=1, k=0, n=10;

  while(i<n) {
    k+=i;
    i++;
  }

  printf("%d \n", k);

}
