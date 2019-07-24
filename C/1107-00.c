#include <stdio.h>

void func_01(void);
void func_02(char *);
double func_03(void);
double func_04(double, double);

int main() {

    int a;
    double b;

    func_01();
    func_02("止まりなさい \n");

    a = func_03();
    printf("a = %d \n", a);

    b = func_04(3.0, 4.0);
    printf("b = %lf \n", b);
    return 0;
}

void func_01(void){
  printf("stop\n");
}

void func_02(char *str){
  printf("%s", str);
}

double func_03(void){
  int a = 1, b = 2;
return a + b;
}

double func_04(double a, double b){
  return (a + b)/2.0;
}
