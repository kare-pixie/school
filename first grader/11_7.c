#include <stdio.h>
int main(void){
    int i, length=0, p=0, l, r, cnt=0;
    char str[50];
    fgets(str,50,stdin);
    for(i=0; str[i]!='\0'; i++)
        length++;
    for(l=0,r=length-2;;){
        if(!(str[l]>='A'&&str[l]<='Z'||str[l]>='a'&&str[l]<='z')){
            l++;
            continue;
        }
        if(!(str[r]>='A'&&str[r]<='Z'||str[r]>='a'&&str[r]<='z')){
            r--;
            continue;
        }
        if(str[l]>='a'&&str[l]<='z')
            str[l]-=32;
        if(str[r]>='a'&&str[r]<='z')
            str[r]-=32;
        if(str[l]==str[r]){
            l++;
            r--;
            p=1;
        }
        else{
            p=0;
            break;
        }
        if(l>=r)
            break;
    }
    if(p==1)
        printf("yes");
    else
        printf("no");
    return 0;
}
