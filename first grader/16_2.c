#include <stdio.h>

#define SIZE 4

void initializeBoard(int arr[][SIZE]){
	int i, j;
	for(i=0; i<SIZE; i++){
		for(j=0; j<SIZE; j++)
			arr[i][j]=i*SIZE+j+1;
	}
}

void printBoard(int (*arr)[4])
{
int i, j;

   for(i=0; i<4; i++)
   {
      for(j=0; j<4; j++)
         printf("%3d ", arr[i][j]);

   printf("\n");
   }
   printf("\n");
}

void turnRight(int (*arr)[4]){
   int i, j;
   int temp[4][4];

   for(i=0; i<4; i++)
   {
      for(j=0; j<4; j++)
         temp[j][3-i]=arr[i][j];
   }

   for(i=0; i<4; i++)
   {
      for(j=0; j<4; j++)
         arr[i][j]=temp[i][j];
   }
}

void turnLeft(int (*arr)[4]){
   int i, j;
   int temp[4][4];

   for(i=0; i<4; i++)
   {
      for(j=0; j<4; j++)
         temp[3-j][i]=arr[i][j];
   }

   for(i=0; i<4; i++)
   {
      for(j=0; j<4; j++)
         arr[i][j]=temp[i][j];
   }
}

int main() {

	int board[SIZE][SIZE];

	int i, j;

	char menu;



	initializeBoard(board);

	printf("[Source Board]\n");

	printBoard(board);



	while(1) {

        scanf("%c", &menu);



		if(menu=='q') break;

		if(menu!='l'&&menu!='r') continue;



		if(menu=='l')

			turnLeft(board);

		else if(menu=='r')

			turnRight(board);



		printBoard(board);

	}



	return 0;

}