#include <stdio.h>
#include <string.h>
#define N 100

int main() {
    int len;
    char str1[N], str2[N];

    printf("何か文字を入力してください。\n");
    scanf("%s", str1);

    printf("何か文字を入力してください。\n");
    scanf("%s", str2);

    // strcpy(str1, "RYUNOSUKE");
    printf("str1: %s \n", str1);

    // strcpy(str2, "str1");
    printf("str2: %s \n", str2);


    // strcpy(str2, "MURATA");
    // printf("str2: %s \n", str2);

    if (strcmp(str1,str2) == 0){
      printf("str1とstr2は等しい : %s, %s\n", str1, str2);
    } else {
      printf("str1とstr2は等しくない\n");
    }

    strcat(str1, str2);
    printf("str1, str2 : %s, %s\n", str1, str2);

    len = strlen(str1);
    printf("str1の文字数： %d\n", len);

}
