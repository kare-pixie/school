#include <stdio.h>

int printFibonacci(int n){
	long int x=0, y=1, temp, a;
	for(a=0; a<n; a++){
		if(a==0)
			printf("%ld ",x);
		else if(a==1)
			printf("%ld ",y);
		else
		{
			temp=x+y;
			printf("%ld ",temp);
			x=y;
			y=temp;
		}
	}
}

int main(void)

{

	int n;

	scanf("%d", &n);

	printFibonacci(n);



	return 0;

}