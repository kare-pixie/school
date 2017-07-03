#include <stdio.h>

void howToUse()
{
	printf("두 개의 정수를 입력하면 큰 수가 출력됩니다.\n두 개의 정수를 입력하세요.\n");
}

int readInt()
{
	int num;
	scanf("%d",&num);
	return num;
}

int calcBiggerValue(int num1, int num2)
{
	return num1>num2? num1:num2;
}

showResul(result);

void showResult(int num)
{
	printf("큰 수 : %d",num);
}

int main(void)

{

	int result, num1, num2;



	howToUse();

	num1 = readInt();

	num2 = readInt();

	result = calcBiggerValue(num1, num2);

	showResult(result);



	return 0;

}

