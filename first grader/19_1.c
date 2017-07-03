#include <stdio.h>
struct pointType {
	int x;
	int y;
};


int main()
{
	struct pointType position;
	//구조체 pointType형의 포인터 변수 pPtr을 선언하고 position을 가리키게 합니다.
	struct pointType *pPtr;
	pPtr = &position;
	
	//포인터 변수 pPtr을 이용해서 구조체 변수 position에 접근해서
	//1. 좌료 정보를 [10, 20]으로 변경합니다. 
	//2. 좌표 정보를 출력합니다.
	pPtr -> x = 10;
	pPtr -> y = 20;
	printf("[%d, %d]",pPtr->x,pPtr->y);
	
	
	return 0;
}