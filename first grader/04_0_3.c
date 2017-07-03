#include <stdio.h>

#define SIZE 10



int main() {

    int arr[SIZE], i, temp;



    for(i = 0; i < SIZE; i++)

        scanf("%d", &arr[i]);



    temp=arr[SIZE-1];
    for(i=SIZE-1; i>0; i--)
        arr[i]=arr[i-1];
        arr[0]=temp;




    for(i = 0; i < SIZE; i++)

        printf("%d ", arr[i]);



    return 0;

}
