#include <stdio.h>
#include <math.h>

struct pointType{
	int x,y;	
};

int main(){
	struct pointType p1,p2;
	
	scanf("%d %d",&p1.x,&p1.y);
	scanf("%d %d",&p2.x,&p2.y);
	printf("[%d, %d]\n",p1.x,p1.y);
	printf("[%d, %d]\n",p2.x,p2.y);
	
	printf("%.1f",sqrt(pow(p1.x-p2.x,2)+pow(p1.y-p2.y,2)));
	
	return 0;
}
