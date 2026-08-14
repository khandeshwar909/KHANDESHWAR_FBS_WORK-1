#include <stdio.h>
void main ()
{
    int a,b;
    char op;
	
	
    printf("Enter First Number:");
    scanf("%d",&a);	
  
   
    printf("Enter Second Number:");
    scanf("%d",&b);
  
  
 printf("Enter Operator (+,-,*,/,%%): ");
    scanf(" %c",&op);
	  
 if(op=='+')
         printf("addition = %d",a+b);
  else if(op=='-')
        printf("subtraction = %d",a-b);
    else if(op=='*')
        printf("multiplication = %d",a*b);
     else if(op=='/')
        printf("division = %d",a/b);
        else if(op=='%')
        printf("modulus = %d",a%b);
           else
        printf("invalid  Operator");

         return 0;
    
}