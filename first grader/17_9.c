 #include <stdio.h> 
#include <stdio.h>
#include <string.h>
#define SIZE 10
 
 
int main()
{
 char bookList[SIZE][50] = {"The Vegetarian", "Me Before You", "Charlotte's Web",
   "Charlie and the Chocolate Factory", "How to Steal a Dog(Paperback)","Python Programming & Visualization for Scientists",
   "Python Machine Learning", "HTML and CSS: Design and Build Websites",
  "Reactive Programming with web", "Practical Programming for Total Beginners"};
  char bookList2[SIZE][50];
 char keywords[50];
 char *keywordList[10];
 int i, j, countOfTokens = 0;
 
  gets(keywords);
 
  for(i=0;i<strlen(keywords);i++){
   keywords[i]=toupper(keywords[i]);
  }
  keywordList[countOfTokens]=strtok(keywords," ");
  while(keywordList[countOfTokens]!=NULL){
    countOfTokens++;
    keywordList[countOfTokens]=strtok(NULL," ");
  }
 for(i=0;i<SIZE;i++){
    for(j=0;j<=strlen(bookList[i]);j++){
     bookList2[i][j]=toupper(bookList[i][j]);
    }
    for(j=0;j<countOfTokens;j++){
      if(strstr(bookList2[i],keywordList[j])!=NULL){
        printf("%s\n",bookList[i]);
        break;
      }
    }
  }
 
 
 return 0;
}