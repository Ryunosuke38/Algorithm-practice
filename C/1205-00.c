#include <stdio.h>
#include <string.h>

#define N 30

void test(int *pA);

int main() {
    int a;
    int *pA;
    char name[N];
    char *pC;

    a = 1;
    pA = &a;
    printf("a = %d\n", *pA);

    test(pA);
    printf("a = %d\n", *pA);

    strcpy(name, "AAA AAAA");

    pC = name;

    while( *pC != '\0') {
      printf("%c\n", *pC++);
    }
    printf("\n");

    return 0;
}

void test(int *pA) {
  *pA = 100;
}
