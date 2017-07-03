#include <stdio.h>
#include <math.h>

double calcCharges(double parkingTime){
	if(parkingTime<=3)
		return 2000;
	else if(3<parkingTime&&parkingTime<11)
		return (ceil(parkingTime-3))*1000+2000;
	else
		return 10000;
}

int main()

{

    double parkingTime[3], totalHours = 0;

    int charges, totalCharges = 0;

    int i;



    for(i = 0; i < 3; i++)

        scanf("%lf", &parkingTime[i]);



    printf("%-10s%-10s%-10s\n", "Car", "Hours", "Charges");



    for(i = 0; i < 3; i++) {

        charges = calcCharges(parkingTime[i]);

        printf("%-10d%-10.1f%-10d\n", i+1, parkingTime[i], charges);

        totalHours += parkingTime[i];

        totalCharges += charges;

    }

    printf("%-10s%-10.1f%-10d", "TOTAL", totalHours, totalCharges);



    return 0;

}