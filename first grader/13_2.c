#include <stdio.h>

	int main(){
		int arr[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
		int i,j;

		for(i=4; i>0; i--){
			for(j=0; j<4; j++){
				printf("%d ",arr[j][i-1]);

	}
	printf("\n");
				  }

	return 0;
	}
