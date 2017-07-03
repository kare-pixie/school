#include <stdio.h>
#include <string.h>

void sort(char str[][20])
{
  char temp[20];

	if(strcmp(str[0], str[1])>0)
  {
    strcpy(temp, str[0]);
    strcpy(str[0], str[1]);
    strcpy(str[1], temp);
  }

}

int main()
{
	char names[2][20];
	int i;

	for(i=0; i<2; i++)
		gets(names[i]);

	sort(names);

	for(i=0; i<2; i++)
		puts(names[i]);

	return 0;
}
