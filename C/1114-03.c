#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define N 100

struct student{
  char id[N];
  int age;
  char dep[N];
  char name[N];
};

void str_toupper(char name[]) {
  name[0] = toupper(name[0]);
}

int main(void) {
    struct student murata;

    printf("学籍番号を入力してください。");
    scanf("%s", murata.id);

    printf("年齢を入力してください。");
    scanf("%d", &murata.age);

    printf("学科を入力してください。");
    scanf("%s", murata.dep);

    printf("名前を入力してください。");
    scanf("%s", murata.name);

    str_toupper(murata.name);

    printf("学籍番号: %s\n", murata.id);
    printf("年齢: %d\n", murata.age);
    printf("学科: %s\n", murata.dep);
    printf("名前: %s\n", murata.name);

}
