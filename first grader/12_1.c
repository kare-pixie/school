#include <stdio.h>
int main(void){
	int a[8][9],i,j;
	
	for(i=0; i<8; i++){
		for(j=0; j<9; j++){
	    a[i][j]=(i+2)*(j+1);
		}
	}
	

	for(i=0; i<8; i++){
		for(j=0; j<9; j++){
			printf("%2d ",a[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
