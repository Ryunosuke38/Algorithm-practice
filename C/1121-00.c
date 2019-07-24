#include <stdio.h>

#define N 10

struct student{
  int id;
  int age;
  char name[30];
};

int main() {
    FILE *fp;
    int i, j;
    struct student students[N];

    fp = fopen("data-01.dat", "r");

    if(fp == NULL) {
      exit(1);
    }


    for(i=0; i<N; i++) {
      fscanf(fp, "%d %s %d", &(students[i].id), students[i].name, $(students[i].age));
    }

    fclose(fp);

    for(i=0; i<N; i++) {
      printf("id:%d name:%s age:%d \n", students[i].id, students[i].name, students[i].age);
    }

    return 0;

}
