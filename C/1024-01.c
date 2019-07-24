#include <stdio.h>

int main(void) {

    int n = 10;
    int k = 0;
    int i = 1;

    while (i <= n) {
      k = k + 1;
      i = i + 1;
    }

    printf("%d \n", k);

    return 0;
}
