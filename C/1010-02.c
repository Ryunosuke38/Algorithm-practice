#include <stdio.h>

int main(void) {

  double a, b, c; /* doubleは浮動少数点型 */
  char d;

  printf("計算式を入力してください：");
  scanf("%lf %c %lf", &a, &d, &b);


  switch (d) {
    case '+' : c = a + b; printf("足し算の答え: %.1lf\n", c); break;
    case '-' : c = a - b; printf("引き算の答え: %.1lf\n", c); break;
    case '*' : c = a * b; printf("掛け算の答え: %.1lf\n", c); break;
    case '/' :
      if (b != 0) {
        c = a / b;
        printf("割り算の答え: %.2lf\n", c);
      } else {
        printf("bが0なので割り切れません。\n");
      }
      break;
    default: printf("不正な演算子が入力されました。\n");
  }

  return 0;
}
