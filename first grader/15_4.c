#include <stdio.h>

double roundToN(double num, int n){
    double num2;
 switch(n){
    case 0:
        num2=num-(int)num;
        if((int)(num2*10)>=5)
            return (num+1)-num2;
        return num-num2;
    case 1:
        num2=(num*10)-(int)(num*10);
        if((int)(num2*10)>=5)
            return (num+0.1)-(num2/10);
        return num-(num2/10);
    case 2:
        num2=(num*100)-(int)(num*100);
        if((int)(num2*10)>=5)
            return (num+0.01)-(num2/100);
        return num-(num2/100);
    case 3:
        num2=(num*1000)-(int)(num*1000);
        if((int)(num2*10)>=5)
            return (num+0.001)-(num2/1000);
        return num-(num2/1000);
 }
}

int main(){
    double num;
    scanf("%lf", &num);
    printf("%.5f\n%.5f\n%.5f\n%.5f", roundToN(num, 0), roundToN(num, 1), roundToN(num, 2), roundToN(num, 3));
    return 0;
}