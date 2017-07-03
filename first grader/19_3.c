#include <stdio.h>

typedef struct pointType {
	int x;
	int y;
} Point;

Point getPosition()
{
	Point p;
	scanf("%d %d",&p.x,&p.y);
	return p;
}

void showPosition(Point p)
{
	printf("[%d, %d]",p.x,p.y);
}

int main()
{
	Point position = getPosition();
	showPosition(position);
	
	return 0;
}