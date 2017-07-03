#include <stdio.h>

double celToFah(double fat){
	return (1.8 * fat +32);
}

double fahToCel(double cel){
	return (cel -32)/1.8;
}

int main(void)

{

	double cel,fat;



	printf("섭씨 온도 입력 : ");

	scanf("%lf", &cel);

	printf("화씨 온도 : %.1f\n", celToFah(cel));



        printf("\n화씨 온도 입력 : ");

	scanf("%lf", &fat);

	printf("섭씨 온도 : %.1f\n", fahToCel(fat));



	return 0;

	
}