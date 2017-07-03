#include <stdio.h>

int main()
{
    int k,e,m,c,h=0;
    double i=0;

    printf("%-15s : ","Korean");
    scanf("%d",&k);

    printf("%-15s : ","English");
    scanf("%d",&e);

    printf("%-15s : ","Mathmetics");
    scanf("%d",&m);

    printf("%-15s : ","C Programming");
    scanf("%d",&c);

    h=k+e+m+c;
    printf("%-15s : %d\n","Sum",h);

    i=h/4.0;
    printf("%-15s : %.2lf\n","Average",i);
    printf("%-15s : ","Grade");
    if(i>=90){
        printf("A");}
    else if(i>=80){
        printf("B");}
    else if(i>=70){
        printf("C");}
    else if(i>=60){
        printf("D");}
    else printf("F");
	
	return 0;
}
