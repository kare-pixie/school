#include <stdio.h>
#include <ctype.h>
int main()
{
	char str[100];
	int i = 0, count = 0;
	
	//공백을 포함해서 줄바꿈 전까지의 모든 문자를 문자열로 입력하기 위해
 	//scanf 대신 gets 함수를 이용합니다. 
	gets(str);
	
	//공백을 빼고 출력하는 코드를 작성하시오. 
	while(str[i] != '\0') {
		if(!isspace(str[i]))
			printf("%c",str[i]);
		i++;
}
	printf("\n");
	
	//소문자를 모두 대문자로 변환해서 출력하고, 나머지 문자는 그대로 출력하는 코드를 작성하시오.
	i = 0;
	while(str[i] != '\0') {
		printf("%c",toupper(str[i]));
		i++;
	}
	printf("\n");
	
	//대문자만 소문자로 변환해서 출력하고, 나머지 문자는 출력하지 않는 코드를 작성하시오.
	i = 0;
	while(str[i] != '\0') {
		if(isupper(str[i]))
			printf("%c",tolower(str[i]));
		i++;
	}
	
	//알파벳 문자의 갯수를 세어서 출력하는 코드를 작성하시오.
	i = 0;
	while(str[i] != '\0') {
		if(isalpha(str[i]))
			count++;
		i++;
	}
	
	printf("\n%d", count);
	return 0;
}