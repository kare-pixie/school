#include<stdio.h>
#include<string.h>

struct studentType{
char name[20];
int admission;
char gender;
};

int main (void){
struct studentType s1;
struct studentType s2;
struct studentType s3;
int y;

scanf("%d",&y);
getchar();

fgets(s1.name,sizeof(s1.name),stdin);
s1.name[strlen(s1.name)-1]='\0';
scanf("%d",&s1.admission);
while(!isalpha(s1.gender=getchar()));

    getchar();

s1.admission=y-s1.admission+1;

fgets(s2.name, sizeof(s2.name),stdin);
s2.name[ strlen(s2.name)-1]='\0';
scanf("%d",&s2.admission);
while(!isalpha(s2.gender=getchar()));

getchar();

s2.admission=y-s2.admission+1;
fgets(s3.name, sizeof(s3.name),stdin);
s3.name[ strlen(s3.name)-1]='\0';
scanf("%d",&s3.admission);
while(!isalpha(s3.gender=getchar()));

s3.admission=y-s3.admission+1;

printf("Name : %s, Grade : %d, Gender : %c\n",s1.name, s1.admission, s1.gender);

printf("Name : %s, Grade : %d, Gender : %c\n" ,s2.name, s2.admission, s2.gender);

printf("Name : %s, Grade : %d, Gender : %c\n",s3.name, s3.admission, s3.gender);

return 0;
}