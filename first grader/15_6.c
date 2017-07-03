#include <stdio.h>

int gcd(int num1,int num2){
	return num2 ? gcd(num2, num1%num2):num1;
}
	
int lcm(int num1,int num2){
	return num1*num2/gcd(num1,num2);
}

int main()

{

    int num1, num2;



    scanf("%d%d", &num1, &num2);



    printf("GCD : %d\n", gcd(num1, num2));
    printf("LCM : %d\n", lcm(num1, num2));



    return 0;

}