#include <stdio.h>
#include <math.h>
typedef struct pointType {
   int x;
   int y;
} Point;
void getPosition(Point *ptr) {
   scanf("%d%d", &ptr->x, &ptr->y);
}
int main() {
   int i, j;
   //구조체 temp 변수선언
     Point temp;
   Point pos[10] = { 0 };
   for (i = 0; i<10; i++) 
      getPosition(&pos[i]);
   for (i = 0; i <= 9; i++)
      for (j = 0; j <= 9; j++) 
      {
         //버블정렬
         if (sqrt(pow(pos[i].x, 2) + pow(pos[i].y, 2))<sqrt(pow(pos[j].x, 2) + pow(pos[j].y, 2)))
         {
            temp=pos[i];
            pos[i]=pos[j];
              pos[j]=temp;
         }
      }
   for (i = 0; i <= 9; i++)
   {
      printf("[%d,%d]\n",pos[i].x,pos[i].y);
   }
   return 0;
}