#include <stdio.h>

#define n 6

int main() {
  int data[n] = {50, 56, 80, 30, 51, 70};
  int i, j, ii, tmp;

  for (i=0; i<n; i++) {
    tmp = data[i];
    ii = i;
    for (j=i+1; j<n; j++) {
      if (tmp < data[j]) {
        tmp = data[j];
        ii = j;
      }
    }
    tmp = data[i];
    data[i] = data[ii];
    data[ii] = tmp;
  }

  printf("降順\n");
  for (i=0; i<6; i++) {
    printf("%d\n", data[i]);
  }
}
