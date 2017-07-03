#include <stdio.h>
#include <stdlib.h>
int main()
{
	char str[100], *unit;
	double height;
	
	gets(str);
	
	//height에 입력받은 문자열 중 숫자를 double형으로 받고, 
	//unit은 숫자 바로 뒤의 문자를 가리키게 합니다.
	height=strtod(str,&unit);
	printf("%.2f%s", height-0.4, unit); //입력받은 숫자에 0.4를 빼고, 소수 둘째자리까지 출력
	
	return 0;
}