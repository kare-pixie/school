#include <stdio.h>



int add(int n1, int n2) {

	return n1 + n2;

}



int main()

{

    int n1, n2, result;

    

    result = add(3, 4);

    printf("%d\n", result);

    

    printf("%d\n", add(10, 20));

    

    result = add(add(1, 2), 3*10);

    printf("%d\n", result);

    

    scanf("%d%d", &n1, &n2);

    result = add(n1, n2);

    printf("%d\n", result);



    return 0;

}