#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define N 30

int main() {
    FILE *fp;
    char name[N];
    int age = 49;

    strcpy(name, "AAAA AAAAA");

    fp = fopen("sample.txt", "w");

    if(fp == NULL) {
      exit(-1);
    }

    fprintf(fp, "%s %d\n", name, age);

    fclose(fp);

    return 0;

}
