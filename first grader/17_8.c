#include <stdio.h>
#include <string.h>
#define SIZE 10


int main()
{
	char bookList[SIZE][50] = {"The Vegetarian", "Me Before You", "Charlotte's Web",
 		"Charlie and the Chocolate Factory", "How to Steal a Dog(Paperback)", 			"Python Programming & Visualization for Scientists",
		"Python Machine Learning", "HTML and CSS: Design and Build Websites",
		"Reactive Programming with web", "Practical Programming for Total Beginners"};
    char bookList2[SIZE][50];
	char keywords[50];
	int i,j;

	gets(keywords);

  for(i=0; i<SIZE; i++)
    for(j=0; j<=strlen(bookList[i]); j++)
        bookList2[i][j]=tolower(bookList[i][j]);

  for(i=0; i<strlen(keywords); i++)
        keywords[i]=tolower(keywords[i]);

	for(i=0; i<SIZE; i++)
		if(strstr(bookList2[i], keywords))
    			puts(bookList[i]);
    			puts("\n");


	return 0;
}
