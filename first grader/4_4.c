#include <stdio.h>

int main()

{

    char str[50], str2[50];
	
    int length = 0; //문자열의 길이

    char temp;

    int i;

 

    scanf("%s", str);

 

    length = 0;
    while (str[length] != '\0')
    {
        length++;
    }

    i = 0;
    for (length; length > 0; length--)
    {
        str2[i] = str[length-1];
        i++;
    }
    str2[i] = '\0';


 
    printf("%s", str2);

    return 0;

}

