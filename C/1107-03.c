#include <stdio.h>
#include <string.h>
#define N 20

int main() {
    int i;
    char str[N];

    strcpy(str, "RYUNOSUKE MURATA");

    i = 0;
    while(str[i] != '0') {
      printf("str[%d] = %c \n", i, str[i]);
      i++;
    }

    printf("%s \n", str);
}
