#include <stdio.h>

#define N 10

int func(int);

int main(){
  int i, n;
  for(i=0; i<N; i++) {
    n = func(i);
    printf("%dの階乗は%d \n", i, n);
  }

  return 0;
}

int func(int n) {
  if (n==0) {
    return 1;
  } else {
    return n * func(n-1);
  }
}
