#include <stdio.h>
#define SIZE 60
int main() {
	int a[SIZE];
	int n,i;
	
	for(i=0; i<SIZE; i++){
		scanf("%d",&a[i]);
		}
	printf(" 90 ~ 100  ");
	for(i=0; i<SIZE; i++){
		if(a[i]>=90 && a[i]<=100){
			printf("*");
	}}
	
	printf("\n 80 ~ 89   ");
	for(i=0; i<SIZE; i++){
		if(a[i]>=80 && a[i]<90){
			printf("*");			
	}}
	
	printf("\n 70 ~ 79   ");
	for(i=0; i<SIZE; i++){
		if(a[i]>=70 && a[i]<80){
			printf("*");			
	}}
	
	printf("\n 60 ~ 69   ");
	for(i=0; i<SIZE; i++){
		if(a[i]>=60 && a[i]<70){
			printf("*");			
	}}
	
	printf("\n 50 ~ 59   ");
	for(i=0; i<SIZE; i++){
		if(a[i]>=50 && a[i]<60){
			printf("*");			
	}}
	
	printf("\n 40 ~ 49   ");
	for(i=0; i<SIZE; i++){
		if(a[i]>=40 && a[i]<50){
			printf("*");			
	}}
	
	printf("\n 30 ~ 39   ");
	for(i=0; i<SIZE; i++){
		if(a[i]>=30 && a[i]<40){
			printf("*");			
	}}
	
	printf("\n 20 ~ 29   ");
	for(i=0; i<SIZE; i++){
		if(a[i]>=20 && a[i]<30){
			printf("*");			
	}}
	
	printf("\n 10 ~ 19   ");
	for(i=0; i<SIZE; i++){
		if(a[i]>=10 && a[i]<20){
			printf("*");			
	}}
	
	printf("\n 0 ~ 9   ");
	for(i=0; i<SIZE; i++){
		if(a[i]>=0 && a[i]<10){
			printf("*");			
	}}
	
 return 0;
}
