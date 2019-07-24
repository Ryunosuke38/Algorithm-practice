#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define M 10
#define N 10

int main() {
  FILE *fp;
  int i, j;
  int a[M][N];

  fp = fopen("data.txt", "r");

  if (fp == NULL) {
    printf("ファイルを開けません。\n");
    exit(-1);
  }

  for (i=0; i<M; i++) {
    for (j=0; j<N; i++) {
      fscanf(fp, "%d", &a[i][j]);
    }
  }

  fclose(fp);

  for (i=0; i<M; i++) {
    for (j=0; j<N; j++) {
      printf("%3d", a[i][j]);
    }
    printf("\n");
  }

  return 0;
}
