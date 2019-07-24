#include <stdio.h>

int main(void) {
  int a;
  int b;
  double r; /* doubleは浮動少数点型、rは半径 */

  printf("整数aとbの値：");
  scanf("%d%d", &a, &b);

  printf("a + b = %d\n", a + b);
  printf("a - b = %d\n", a - b);
  printf("a * b = %d\n", a * b);
  printf("a / b = %d\n", a / b);
  printf("a %% b = %d\n", a % b); /* 剰余 */


  printf("(a + b) / 2 = %d\n", (a + b) / 2);
  printf("平均値 = %f\n\n", (double)(a + b) / 2); /* doubleでキャスト */

  printf("半径：");
  scanf("%lf", &r);

  printf("半径%.3fの円の面積は%.3fです。\n", r, 3.14 * r * r); /* %.3fで小数部分を３桁で表示するよう指定 */
  printf("半径%7.3fの円の面積は%7.3fです。\n", r, 3.14 * r * r);
  printf("半径%07.3fの円の面積は%07.3fです。\n", r, 3.14 * r * r);
  printf("半径%-7.3fの円の面積は%-7.3fです。\n", r, 3.14 * r * r);

  return 0;
}
