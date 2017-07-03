#include <stdio.h>

void swapInt(int* n1, int* n2){
	int temp=*n1;
	*n1=*n2;
	*n2=temp;
}

void swapDouble(double* d1, double* d2){
	double temp=*d1;
	*d1=*d2;
	*d2=temp;
}

int main()
{
    int n1, n2;
    double d1, d2;

    printf("두 개의 정수 입력 : ");
    scanf("%d%d", &n1, &n2);
    swapInt(&n1, &n2);
    printf("결과 : %d %d\n", n1, n2);

    printf("두 개의 실수 입력 : ");
    scanf("%lf%lf", &d1, &d2);
    swapDouble(&d1,&d2);
    printf("결과 : %.1f %.1f\n", d1, d2);

    return 0;
}