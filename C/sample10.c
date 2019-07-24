#include <stdio.h>
#include <string.h>

int main(void) {
  char a[100];

  printf("文字列を入力してください。：");
  scanf("%s", &a);

  if((a[0] >= 'a') && (a[0] <='z')){
    printf("あなたが入力したのはアルファベットの小文字です！\n");
  }
  else if((a[0] >= 'A') && (a[0] <='Z')){
    printf("あなたが入力したのはアルファベットの大文字です！\n");
  }
  else {
    printf("その他の文字！\n");
  }

  return 0;
}
