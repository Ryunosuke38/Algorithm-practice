#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define N 30

int main() {
    FILE *fp;
    char name[N];
    int age;

    fp = fopen("sample.txt", "r");

    if(fp == NULL) {
      printf("そんなファイルは開けません。\n");
      exit(-1);
    }

    fscanf(fp, "%s %d\n", name, &age);
    fprintf(stdout, "%s %d\n", name, age);

    fclose(fp);

    return 0;

}
