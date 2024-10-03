#include <stdio.h>
#include<math.h>
int main() {
    
	int p = 3000;
	int r ;
	int n= 5;
int t= 2;
int A;

	printf("enter principal amount");
	scanf("%d" ,&p);
	printf("enter the interest rate");
	scanf("%d" ,&r);
	printf("enter compound");
	scanf("%d" ,&n);
	printf("enter time");
	scanf("%d" ,&t);
	  A=p*pow((1+r/100),t);
printf("%d" , A);