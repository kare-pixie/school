#include <stdio.h>

void snale_matrix(){
	int n;
	scanf("%d",&n);
    int matrix[n][n];
    int num=1;
    int delta=1;
    int limit=n;
    int i=0,j=-1;
    int p,q;

    while(1){

        //가로로 이동하면서 하나씩 할당
        for(p=0; p<limit; p++){
            j=j+delta;
            matrix[i][j]=num;
            num++;
        }

        //횟수 줄이고
        limit--;

        if(limit<0) break;

        //세로로 이동하면서 하나씩 할당
        for(p=0; p<limit; p++){
            i=i+delta;
            matrix[i][j]=num;
            num++;
        }

        //이동방향의 양음이 바뀜
        delta=-delta;
    }

    //2차원 배열 출력
    for(p=0; p<n; p++){
        for(q=0; q<n; q++){
            printf("%d\t",matrix[p][q]);
        }
        printf("\n");
    }

}

int main(void){
    snale_matrix();
    return 0;
}
