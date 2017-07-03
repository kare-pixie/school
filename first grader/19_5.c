#include <stdio.h>
typedef struct pointType {
  int x;int y;
}Point;
typedef struct RectangleType{
 	Point Spos;
  Point Epos;
}Rectangle;
void getRectangleInfo(Rectangle *rPtr){
	scanf("%d%d",&rPtr->Spos.x,&rPtr->Spos.y);
	scanf("%d%d",&rPtr->Epos.x,&rPtr->Epos.y);
}
void showRectangleInfo(Rectangle r){
	printf("[%d, %d] ",r.Spos.x,r.Spos.y);
 	printf("[%d, %d] ",r.Epos.x,r.Spos.y);
 	printf("[%d, %d] ",r.Spos.x,r.Epos.y);
 	printf("[%d, %d]\n",r.Epos.x,r.Epos.y);
}
int calcArea(Rectangle r){
	return (r.Epos.x-r.Spos.x)*(r.Epos.y-r.Spos.y);
}
int main(){
  Rectangle rec;
  getRectangleInfo(&rec);
  showRectangleInfo(rec);
  printf("%d", calcArea(rec));
  return 0;
}
