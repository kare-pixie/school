#include <stdio.h>
#define SIZE 10
int main() {
	int i,j,temp;
	int arr[SIZE];
	for(i=0; i<SIZE; i++){
		scanf("%d",&arr[i]);}
	
	for(i=0; i<SIZE-1; i++){
			for(j=0; j<SIZE-1-i; j++){
				if(arr[j]>arr[j+1]){
					temp=arr[j];
					arr[j]=arr[j+1];
					arr[j+1]=temp;
				}}}
		
		for(i=0; i<SIZE; i++){
		printf("%d ",arr[i]);
		}
 return 0;
}
