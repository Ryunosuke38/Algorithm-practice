#include <stdio.h>

#define n 10

void qsort_ascending(int *, int, int);
void qsort_decending(int *, int, int);

int main(){
  int data[n] = {2,3,6,8,10,1,5,7,4,9};
  int i, ans;

  qsort_ascending(data, 0, n-1);

  printf("昇順のクイックソート後\n");
  for (i=0; i<n; i++) {
    printf("%d %d \n", i, data[i]);
  }

  qsort_decending(data, 0, n-1);
  printf("降順のクイックソート後\n");
  for (i=0; i<n; i++) {
    printf("%d %d \n", i, data[i]);
  }

  return 0;
}

void qsort_ascending(int *a, int left, int right) {
  int i, j, pivot, tmp;

  i = left;
  j = right;

  pivot = a[(right + left)/2];

  while(1) {
    while(a[i] < pivot)
      i++;

    while(pivot < a[j])
      j--;

    if(i >= j)
      break;

    tmp = a[i];
    a[i] = a[j];
    a[j] = tmp;
    i++;
    j--;
  }

  if (left < i-1)
    qsort_ascending(a, left, i-1);
  if (j+1 < right)
    qsort_ascending(a, j+1, right);
}

void qsort_decending(int *a, int left, int right) {
  int i, j, pivot, tmp;

  i = left;
  j = right;

  pivot = a[(right + left)/2];

  while(1) {
    while(a[i] > pivot)
      i++;

    while(pivot > a[j])
      j--;

    if(i >= j)
      break;

    tmp = a[i];
    a[i] = a[j];
    a[j] = tmp;
    i++;
    j--;
  }

  if (left < i-1)
    qsort_decending(a, left, i-1);
  if (j+1 < right)
    qsort_decending(a, j+1, right);
}
