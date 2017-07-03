#include <stdio.h>
#include <string.h>
#define SIZE 10
int main()
{
char bookList[SIZE][50] = {"The Vegetarian", "Me Before You", "Charlotte's Web",
"Charlie and the Chocolate Factory", "How to Steal a Dog(Paperback)",
"Python Programming & Visualization for Scientists",
"Python Machine Learning", "HTML and CSS: Design and Build Websites",
"Reactive Programming with web", "Practical Programming for Total Beginners"};
char keywords[50];
int i;
gets(keywords);
for(i=0; i<SIZE; i++)
		if(strstr(bookList[i], keywords))
    			puts(bookList[i]);
    			puts("\n");

	return 0;
}