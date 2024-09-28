//program to calculate simple interest
/*
program to calculate simple interest
Author:Gedion Kimutai Cheruiyot
Reg no:CT101/G/24133/24
Date:27/09/2024
*/
#include<stdio.h>

int main()  
{
	int principal ='p'//%d
	;float time ='t';//%f
	float rate ='r';//%f
	float simpleinterest ='SI';//%f
	
	printf("Enter the principal amount:");
	scanf("%d",&principal);
	printf("The principal is \t %d \n",principal);
	
	printf("Enter time (in year):");
	scanf("%f",&time);
	printf("The time is \t %.2f \n",time);
	
	printf("Enter the rate of interest(%%) :");
	scanf("%f",&rate);
	printf("The rate is \t %.2f \n",rate);
	
simpleinterest = (principal*time*rate) / 100;
	
	printf("The simpleinterest is: \t %.3f \n",simpleinterest);
	return 0;
	}