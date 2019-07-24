#include <stdio.h>

#define N 10

int main(void) {
    int a = 1;
    int *pA;
    pA = &a;


    printf("%d \n", a);
    printf("*pA = %d \n", *pA);
    printf("&a = %p \n", &a);
    printf("pA = %p \n", pA);
}
