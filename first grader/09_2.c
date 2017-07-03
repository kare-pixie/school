#include<stdio.h>

const int BREAD=700;
const int SNACK=500;
const int DRINK=400;

int main(void)
{
	int i, j, k;
	int money;
	scanf("%d", &money);

	for(i=1; i<money/BREAD; i++)
	{
		for(j=1; j<money/SNACK; j++)
		{
			for(k=1; k<money/DRINK; k++)
			{
				if(money==BREAD*i+SNACK*j+DRINK*k)
				{
					printf("크림빵 %d개, ", i);
					printf("새우깡 %d개, ", j);
					printf("콜라 %d개 \n", k);
				}
			}
		}
	}

	return 0;
}
