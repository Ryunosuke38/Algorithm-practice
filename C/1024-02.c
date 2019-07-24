#include <stdio.h>
#define n 10

int main(void) {

    int a[n];
    int i = 0;
    int k = 19;

    while (i < 10) {
      a[i] = k;
      printf("a[%d] = %d \n", i, a[i]);
      k -= 2;
      i += 1;
    }

    // for文とwhile文を結合

    return 0;
}
