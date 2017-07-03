#include <stdio.h>

#include <math.h>

#define PI 3.141519



int main()

{
	double x, y, angle;

    scanf("%lf%lf%lf", &x, &y, &angle);



    printf("절대값(%.2f) = %.2f\n", x, fabs(x));

    printf("올림값(%.2f) = %.2f\n", x, ceil(x));

    printf("반올림값(%.2f) = %.2f\n", x, round(x));

    printf("내림값(%.2f) = %.2f\n", x, floor(x));

    printf("%.2f의 %.2f 승 = %.2f\n", x, y, pow(x,y) );

    printf("%.2f 나누기 %.2f의 몫 = %.2f\n", x, y, floor(x/y));

    printf("%.2f 나누기 %.2f의 나머지 = %.2f\n", x, y, fmod(x,y));

    printf("제곱근(%.2f) = %.2f\n", y, sqrt(y));



    printf("sin(%.2f도) = %.2f\n", angle, sin(angle*PI/180));

    printf("cos(%.2f도) = %.2f\n", angle, cos(angle*PI/180));

    printf("tan(%.2f도) = %.2f\n", angle, tan(angle*PI/180));



    return 0;

}
