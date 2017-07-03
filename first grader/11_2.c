#include <stdio.h>
#define SIZE 50
int main() {
	int counts[SIZE+1]={0};
	int n,i;
	
	for(i=0; i<SIZE; i++){
		scanf("%d",&n);
		if(n>=1 && n<=7)
			counts[n]++;
		else counts[0]++;
	}
	
	for(i=1; i<=7; i++){
		printf("%d %d\n",i,counts[i]);
	}
		printf("무효 %d",counts[0]);
	
	
 return 0;
}
