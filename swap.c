#include<stdio.h>  
 int main()    
{    
int a,b;     
printf("enter the values of the two variables to be swapped");
scanf("%d %d",&a,&b); 
printf("Before swap a=%d b=%d",a,b);      
a=a+b;  
b=a-b;   
a=a-b;   
printf("\nAfter swap a=%d b=%d",a,b);    
return 0;  
}   
