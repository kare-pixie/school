#include <stdio.h>
#include <string.h>

int main()
{
	char firstName[20], lastName[20], fullName[50];
	
	scanf("%s%s", firstName, lastName);
	
	//출력결과를 참고해서 fullName에 문자열을 저장하는 코드를 작성하시오.
	strcpy(fullName, lastName);
	strcat(fullName, " ");
	strcat(fullName, firstName);
	
	
	printf("first name : %s, length : %d\n", firstName,  strlen(firstName));
	printf("last name : %s, length : %d\n", lastName,  strlen(lastName));
	printf("full name(Korean Style) : %s", fullName);
	
return 0;
}