#include <stdio.h>

int main(void) {
  double a, b;


  printf("aとbの値を入力してください。");
  scanf("%lf %lf", &a, &b);

  printf("a + b = %.1f\n", a + b);
  printf("a - b = %.1f\n", a - b);
  printf("a * b = %.1f\n", a * b);
  printf("a / b = %.1f\n", a / b);

  printf("平均値 = %.1f\n\n", a + b / 2);

  return 0;
}
