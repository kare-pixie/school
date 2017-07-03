#include<stdio.h>

const int H=60*60;
const int M=60;

void SecondToHMS(int sec);

int main(void)
{
	int sec;

	scanf("%d", &sec);
	SecondToHMS(sec);

	return 0;
}

void SecondToHMS(int sec)
{
	int h, m, s;

	h=sec/H;
	sec=sec%H;

	m=sec/M;
	sec=sec%M;

	s=sec;

	printf("[%d:%d:%d] \n", h, m, s);
}
