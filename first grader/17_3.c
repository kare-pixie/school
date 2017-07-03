#include <stdio.h>
#include <stdlib.h>
int main()
{
	char str[100],resultStr[100];
	int x;
	double y;
	
	gets(str);
	
	//문자열 str로부터 int형 정수 x와 double형 실수 y를 입력받고, 
	//resultStr에 출력결과와 같은 형태로 저장하는 코드를 작성하시오.
	
	sscanf(str,"%d%lf",&x,&y);
	sprintf(resultStr,"%d : %.2f",x-100,y-100);
	
	printf("%s", resultStr);
	
	return 0;
}