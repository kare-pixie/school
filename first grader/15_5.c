#include <stdio.h>

int isPerfectNumber(int i){
 int j, sum=0;
 for(j=1; j<=i; j++)
  if(i%j==0)
   sum+=j;
 if(sum-i==i) 
  return 1;
 else 
  return 0;
}

int main(){
    int i, num;
    scanf("%d", &num);
    for(i=1; i<=num; i++)
        if(isPerfectNumber(i))
            printf("%d ", i);
    return 0;
}