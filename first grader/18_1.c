#include <stdio.h>

struct pointType{
	int x,y;	
};

int main(){
	struct pointType p;
	scanf("%d %d",&p.x,&p.y);
	printf("[%d, %d]",p.x,p.y);
	
	return 0;
}
