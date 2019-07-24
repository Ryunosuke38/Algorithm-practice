#include <stdio.h>
#include <stdio.h>

int main(void) {
    int i = 1;
    int n = 0;

    while(i < 11) {
        printf("%d回目の処理です\n", i);
        n = n + i;

        if (i == 10) {
          printf("合計値は%dです。\n", n);
          break;
        }

        i++;
    }
    printf("処理が終了しました\n");

    return 0;
}
