#include <stdio.h>

int main(void) {
  int width;
  int height;

  puts("長方形の長さを求めます。"); /* 勝手に改行される */

  printf("横幅："); /* 改行されない */
  scanf("%d", &width);

  printf("高さ：");
  scanf("%d", &height);

  printf("面積は%dです。\n", width * height);

  return 0;
}
