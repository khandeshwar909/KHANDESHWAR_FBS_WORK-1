#include<stdio.h>

void main()
{
    float price,discount;

    char student;

    printf("Enter Price : ");
    scanf("%f",&price);

    printf("Are you Student? (y/n): ");
    scanf(" %c",&student);

    if(student=='y' || student=='Y')
    {
        if(price>500)
            discount=price*0.20;
          else
              discount=price*0.10;
    }else
    {
        if(price>600)
            discount=price*0.15;
          else
               discount=0;
    }

    printf("Discount = %.2f\n",discount);
    printf("Final Price = %.2f",price-discount);

    return 0;
}