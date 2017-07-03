#include <stdio.h>

int main(int args, char* argv[]){
    int tunnel;
    int i;
    int isCrashed = 0;

    for(i=1; i<=3; i++){
        scanf("%d",&tunnel);
        if(tunnel<=170){
            printf("CRASH %d",tunnel);
            isCrashed = 1;
            break;
        }
    }
    if(isCrashed == 0)
        printf("PASS");
	return 0;
}
