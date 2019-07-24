#include <stdio.h>
#include <string.h>

int main(void) {
  int hand;
  char str[256];

  do {
    printf("手を選んでください\n [0]グー\n [1]チョキ\n [2]パー\n");
    scanf("%d", &hand);
  } while (hand < 0 || hand > 2);

  printf("あなたは");
  switch (hand) {
    case 0: printf("グー"); break;
    case 1: printf("チョキ"); break;
    case 2: printf("パー"); break;
  }

  printf("を選びました。\n");

  return 0;
}
