#include <stdio.h>

#define N 10

int main(void) {
    int i;
    int a[N];

    for(i=0; i<N; i++) {
      a[i] = 2 * i +1;
    }

    printf("%d \n", *a);

    for (i=0; i<N; i++) {
      // printf("%d, %d \n", i, a[i]);
      // printf("%d, %d \n", i, a);
    }

    return 0;
}
