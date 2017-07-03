#include <stdio.h>

int main() {

    int i[5];
	int j;

    for(j=1; j<=5; j++){
		scanf("%d",&i[j]);
		i[j]++;
		printf("%d ",i[j]);
	}

    return 0;

}