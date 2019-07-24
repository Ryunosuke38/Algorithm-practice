#include <stdio.h>
#include <string.h>

#define n 10

int main() {
  int data[n] = {2,3,6,8,10,1,5,7,4,9};
  int i, ans;

  ans = data[0];

  for(i=1; i<n; i++) {
    if (ans > data[i]) {
      ans = data[i];
    }
  }

  printf("maximum value: %d \n", ans);

  return 0;
}
