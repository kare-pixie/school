#include <stdio.h>

double calcMax(double num1, double num2, double num3){
	if(num1>num2){
		if(num1>num3)
			return num1;
		else
			return num3;
	}
	else
	{
		if(num2>num3)
			return num2;
		else
			return num3;
	}
}

double calcMin(double num1, double num2, double num3){
	if(num1<num2){
		if(num1<num3)
			return num1;
		else
			return num3;
	}
	else
	{
		if(num2<num3)
			return num2;
		else
			return num3;
	}
}
	
int main(void)

{

	double result, num1, num2, num3;



	scanf("%lf%lf%lf", &num1, &num2, &num3);

	printf("Max : %.1f\n", calcMax(num1, num2, num3));

	printf("Min : %.1f\n", calcMin(num1, num2, num3));



	return 0;

}