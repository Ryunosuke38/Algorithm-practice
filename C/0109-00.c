#include <stdio.h>

#define N 10

void sort_ascending(int n, int *a);

void sort_decending(int n, int *a);

int main(){
  int a[N];
  int i;

  printf("ソート前: \n");
  for(i=0; i<N; i++) {
    a[i] = N-i;
    printf("%d \n", a[i]);
  }

  sort_ascending(N, a);

  printf("昇順ソート後:\n");
  for(i=0; i<N; i++) {
    printf("%d\n", a[i]);
  }

  sort_decending(N, a);

  printf("降順ソート後:\n");
  for(i=0; i<N; i++) {
    printf("%d\n", a[i]);
  }

  return 0;
}

void sort_ascending(int n, int *a){
  int i, j, ii, tmp;

  for(i=0; i<N; i++) {
    tmp = a[i];
    ii = i;
    for(j=i+1; j<N; j++) {
      if (tmp > a[j]) {
        tmp = a[j];
        ii = j;
      }
    }

    tmp= a[i];
    a[i] = a[ii];
    a[ii] = tmp;
  }
}

void sort_decending(int n, int *a) {
  int i, j, ii, tmp;

  for(i=0; i<N; i++) {
    tmp = a[i];
    ii = i;
    for(j=i+1; j<N; j++) {
      if (tmp < a[j]) {
        tmp = a[j];
        ii = j;
      }
    }

    tmp= a[i];
    a[i] = a[ii];
    a[ii] = tmp;
  }
}
