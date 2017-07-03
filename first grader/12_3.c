#include <stdio.h>
int main(void){
	int arr[2][3];
	int i,j;
	for(i=0; i<2; i++){
		for(j=0; j<3; j++){
			printf("%p ",arr[i][j]);
		}
	}
	return 0;
}
