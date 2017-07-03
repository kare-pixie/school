#include <stdio.h>
typedef struct pointType {
	int x;
	int y;
} Point;

void getTwoPosition(Point *ptr1,Point *ptr2)
{
	scanf("%d %d",&ptr1->x,&ptr2->y);
	printf("[%d, %d]\n",ptr1->x,ptr2->y);
	
	scanf("%d %d",&ptr1->x,&ptr2->y);
	printf("[%d, %d]\n",ptr1->x,ptr2->y);
}

int main()
{
	Point pos1, pos2;
	
	getTwoPosition(&pos1,&pos2);;
	
	return 0;
}