#include <stdio.h>
#include <string.h>
#define N 100

int main() {
    int i;
    char str[N];

    // str[0] = 'A';
    // str[1] = 'B';
    // str[2] = 'C';
    // str[3] = '\0';

    printf("名前を入力してください。\n");
    scanf("%s", str);

    // for(i=0; i < N: i++) {
    //   printf("%c\n", str[i]);
    //   if (str[i] == '\0') {
    //     break;
    //   }
    // }

    i = 0;
    do {
      printf("%c\n", str[i]);
      i++;
    } while (str[i] != '\0');

}
