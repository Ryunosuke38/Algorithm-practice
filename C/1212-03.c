#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define M 10
#define N 2

int main() {
  FILE *fp;
  int i, j;
  int a[M][N];
  double ave;
  int max;

  fp = fopen("data-00.txt", "r");

  if (fp == NULL) {
    printf("ファイルを開けません。\n");
    exit(-1);
  }

  for (i=0; i<M; i++) {
    for (j=0; j<N; i++) {
      fscanf(fp, "%d", &a[i][j]);
    }
  }

  for (i=0; i<M; i++) {
    for (j=0; j<N; j++) {
      printf("%3d", a[i][j]);
    }
    printf("\n");
  }

  int maxup(int n, int a[M][N]) {
    int i, max;

    max = a[0][n];
    for (i = 1; i < M; i++) {
      if (max < a[i][n]) {
        max = a[i][n];
      }
    }
  }

  return max;
}
