#include <stdio.h>
int main(void){
	int arr[4][5];
	int i,j,sum=0;

	for(i=0; i<3; i++){
		for(j=0; j<4; j++){
			scanf("%d",&arr[i][j]);
		}
	}
	
	for(i=0; i<3; i++){
		for(j=0;j<4; j++){
			sum+=arr[i][j];
		}
		arr[i][4]=sum;
		sum=0;
	}
	
	for(i=0; i<5; i++){
		for(j=0; j<3; j++){
			sum+=arr[j][i];
		}
		arr[3][i]=sum;
		sum=0;
	}
	for(i=0;i<4;i++){
		for(j=0;j<5;j++){
			printf("%5d ",arr[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
