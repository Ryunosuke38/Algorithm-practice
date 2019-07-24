#include <stdio.h>

void describe_number() {
  int n, j;

  for (n = 1; n <=9; n++){
    for (j = 1; j <=9; j++){
      int seki = n * j;
      if (seki > 40)
        break;
      printf("%3d", seki);
    }

  putchar('\n');
  }
}

int main(void) {

    int a[10];
    int i;

    for (i = 0; i < 10; i++){
      a[i] = 19 - 2*i;
    }

    i = 0;
    while (i < 10) {
      printf("a[%d] = %d \n", i, a[i]);
      i += 1;
    }

    describe_number();  //　おまけ
    return 0;
}
