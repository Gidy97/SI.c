//function to calculate electricity bill

/*
Author:Geion Kimutai Cheruiyot
Reg No:CT101/G/24133/24
Date:18/10/2024
*/

#include<stdio.h>
#include<math.h>
float totalBill;
float unitsConsumed(float a,float b,float c,float d);

int main(){
     
	 float unitsConsumed;
	 int customerID;
	 char customerName[10];
	
	 
    printf("Enter Customer ID: ");
    scanf("%d", &customerID);
	
    printf("Enter Customer Name: ");
    scanf(" %s", customerName); 
		
    printf("Enter Units Consumed: ");
    scanf("%f", &unitsConsumed);
 	
  
	printf("The customerID is %d \n",customerID);
	 
	printf("The customerName is: %s \n",customerName);	

 	printf("The unitsConsumed are %.2f \n",unitsConsumed);



   if(unitsConsumed<=83.4){
   	float totalBill;
	   totalBill=100;
       return totalBill;
   }
	
   else if(unitsConsumed<=199){
   	 float a;
     float totalBill;
     a=1.20;
   	 totalBill=unitsConsumed*a;
	    return totalBill;
   }
   		
   else if(unitsConsumed<=399){
   	 float b;
     float totalBill;
     b=1.50;
   	totalBill=unitsConsumed*b;
	    return totalBill;
   }
	
   else if(unitsConsumed<=599){
   	 float c;
     float totalBill;
     c=2.07;
   	totalBill=unitsConsumed*c;
	   return totalBill;
   }	
	
   else {
         (unitsConsumed >=600);
         float d;
		 float totalBill;
         d=2.30;
        totalBill=unitsConsumed*d;
	   return totalBill; 
   }
}	
