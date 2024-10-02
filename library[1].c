//Program to calculate charges in the library
/*
program to calcuate charges in the library
Author:Gedion Kimutai Cheruiyot
Reg no:CT101/24133/24
Date:28/9/2024
*/
//preprocessor directive-printf(),scanf()

#include<stdio.h>

int main(){
	int BookID ='BI'//%d
	;int DueDate ='DD'//%d
	;int ReturnDate='RD'//%d
	;float Overdue ='Od'//%f
	;int but ='b'//%d
	;float Charges='C'//%f
	
	;printf("Enter the BookID:");
	scanf("%d",&BookID);
	printf("The BookID is \t %d \n",BookID);
	
	printf("Enter the DueDate:");
	scanf("%d",&DueDate);
	printf("The Due Date is \t %d \n",DueDate);
	
	printf("Enter the ReturnDate:");
	scanf("%d",&ReturnDate);
	printf("The ReturnDate is \t %d \n",ReturnDate);
	
	Overdue =(ReturnDate-DueDate);
	printf("The Overdue is:%.1f \n",Overdue);
	
	
	if(Overdue <=9){
	Charges=Overdue*25;
	printf("The Charges is:%.1f \n",Charges);}
	
	
    
	  else if(Overdue<=15){
    ;Charges=Overdue*60
    ;printf("The Charges is:%.1f \n",Charges);}
    
   
    
  
      else{
	  (Overdue>=20)
    ;Charges=Overdue*90
    ;printf("The Charges is:%.1f \n",Charges);}
 
	return 0;
}
	
