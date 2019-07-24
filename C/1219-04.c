#include <stdio.h>

#define n 6

void maximum_value(int d[]) {
  int i, ans;
  ans = d[0];
  for(i=0; i<n; i++) {
    if (ans < d[i]) {
      ans = d[i];
    }
  }
  printf("------------------\n最大値: %d \n", ans);
}

void minimum_value(int d[]) {
  int i, ans;
  ans = d[0];
  for(i=0; i<n; i++) {
    if (ans > d[i]) {
      ans = d[i];
    }
  }
  printf("------------------\n最小値: %d \n", ans);
}

void asc_order(int d[]){
  int i, j, ii, tmp;

  for (i=0; i<n; i++) {
    tmp = d[i];
    ii = i;
    for (j=i+1; j<n; j++) {
      if (tmp > d[j]) {
        tmp = d[j];
        ii = j;
      }
    }
    tmp = d[i];
    d[i] = d[ii];
    d[ii] = tmp;
  }

  printf("------------------\n昇順\n");
  for (i=0; i<6; i++) {
    printf("%d\n", d[i]);
  }
}

void desc_order (int d[]){
  int i, j, ii, tmp;

  for (i=0; i<n; i++) {
    tmp = d[i];
    ii = i;
    for (j=i+1; j<n; j++) {
      if (tmp < d[j]) {
        tmp = d[j];
        ii = j;
      }
    }
    tmp = d[i];
    d[i] = d[ii];
    d[ii] = tmp;
  }

  printf("------------------\n降順\n");
  for (i=0; i<6; i++) {
    printf("%d\n", d[i]);
  }
}

void ave(int d[]){
  int i, sum;
  for(i=0; i<n; i++) {
    sum += d[i];
  }
  printf("------------------\n平均 %3.1d \n", sum / n);
}

int main() {
  int data[n] = {50, 56, 80, 30, 51, 70};

  maximum_value(data);
  minimum_value(data);
  asc_order(data);
  desc_order(data);
  ave(data);
}
