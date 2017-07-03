#include <stdio.h>
#include <string.h>

struct studentType {
 char name[20];
 int admition;
 char gender;
};

int main() {
 struct studentType s1 = { "Kyeon Daeun", 2014, 'F' };
 struct studentType s2;
 fgets(s2.name, sizeof(s2.name), stdin);
 s2.name[strlen(s2.name) - 1] = '\0';
 scanf("%d", &s2.admition);
 while(!isalpha(s2.gender=getchar()));
 printf("Name : %s, Admission : %d, Gender : %c\n", s1.name, s1.admition, s1.gender);
 printf("Name : %s, Admission : %d, Gender : %c\n", s2.name, s2.admition, s2.gender);
 return 0;
}