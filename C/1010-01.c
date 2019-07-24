#include <stdio.h>
#include <string.h>

int main(void) {
  char a;

  printf("文字列を入力してください。：");
  scanf("%s", &a);

  if((a >= 'a') && (a <='z')){
    printf("あなたが入力したのはアルファベットの小文字です！\n");
  }
  else if((a >= 'A') && (a <='Z')){
    printf("あなたが入力したのはアルファベットの大文字です！\n");
  }
  else {
    printf("その他の文字！\n");
  }

  return 0;
}
