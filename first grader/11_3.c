#include <stdio.h>
#define SIZE 99
int main() {
	int arr[SIZE];
	int i,j;
	double k=0;
	double p=0;
	
	for(i=0; i<SIZE; i++){
		scanf("%d",&arr[i]);
	}
	
	for(j=0; j<SIZE; j++){
		k+=arr[j];
	}
	
	p=k/SIZE;
	
	printf("%f",p);
	
 return 0;
}
