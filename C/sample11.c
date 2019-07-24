#include <stdio.h>
#include <string.h>

int main(void) {
  int a;

  printf("何か整数を入力してください\n");
  scanf("%d", &a);

  a = a % 3;

  switch (a) {
    case 0: printf("余りは0です。 %d\n", a); break;
    case 1: printf("余りは1です。 %d\n", a); break;
    case 2: printf("余りは2です。 %d\n", a); break;
    default: printf("その値は無効です。 %d\n", a);
  }

  return 0;
}
