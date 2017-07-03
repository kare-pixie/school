#include <stdio.h>

#define SIZE 10



int main() {

    int arr[SIZE], i, temp;



    for(i = 0; i < SIZE; i++)

        scanf("%d", &arr[i]);



    temp=arr[SIZE-10];
    for(i=SIZE-10; i<9; i++)
        arr[i]=arr[i+1];
        arr[9]=temp;




    for(i = 0; i < SIZE; i++)

        printf("%d ", arr[i]);



    return 0;

}
