#include <stdio.h>

int main(void) {
    int i = 1;
    int n = 0;
    int input;

    do {
        printf("整数を入力してください。\n終了する場合は0を入力してください。\n");
        scanf("%d", &input);

        if (input == 0) {
            printf("処理を終了します。\n");
            break;
        } else if(input < 0) {
            printf("あなたが入力した値は無効です。\n");
        }

        do {

            printf("%d回目の処理です\n", i);
            n = n + i;

            if (i == input) {
                printf("合計値は%dです。\n", n);
                break;
            }

            i++;
        } while (i - 1 < input);

    } while (1);

    return 0;
}
