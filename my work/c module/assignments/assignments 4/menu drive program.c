void main()
{
    int choice, num;
    int i, count, temp, digit;
    int reverse, sum;

    printf("enter a number ");
    scanf("%d", &num);

    printf("\n MENU \n");
    printf("1. Check Even or Odd\n");
    printf("2. Check Prime or Not\n");
    printf("3. Check Palindrome or Not\n");
    printf("4. Check Positive, Negative or Zero\n");
    printf("5. Reverse a Number\n");
    printf("6. Sum of Digits\n");

    printf("\nenter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            if(num % 2 == 0)
                printf("Even Number");
              else
                   printf("Odd Number");
                 break;

    case 2:
        count = 0;

           for(i = 1; i <= num; i++)
            {
            if(num % i == 0)
                {
                count++;
                }
            }

            if(count == 2)
                printf("Prime Number");
               else
                     printf("not Prime Number");
                 break;

       case 3:
             temp = num;
            reverse = 0;

            while(temp > 0)
            {
                digit = temp % 10;
                reverse = reverse * 10 + digit;
                temp = temp / 10;
            }

            if(reverse == num)
                  printf("Palindrome Number");
                 else
                     printf("Not Palindrome Number");
                    break;

    case 4:
            if(num > 0)
                  printf("Positive Number");
                    else if(num < 0)
                       printf("Negative Number");
                         else
                           printf("Zero");
                               break;

case 5:
            temp = num;
            reverse = 0;

         while(temp > 0)
            {
                digit = temp % 10;
                reverse = reverse * 10 + digit;
                temp = temp / 10;
            }

            printf("Reverse = %d", reverse);
            break;

  case 6:
            temp = num;
            sum = 0;

            while(temp > 0)
            {
                digit = temp % 10;
                sum = sum + digit;
                temp = temp / 10;
            }

            printf("Sum of digits = %d", sum);
            break;

        default:
            printf("Invalid Choice");
    }

}