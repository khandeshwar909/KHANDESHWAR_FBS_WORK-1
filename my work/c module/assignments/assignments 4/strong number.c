void main()
{
    int n, num, temp, digit;
    int i, fact, sum;

    printf("enter n: ");
    scanf("%d", &n);

    printf("strong numbers: ");

    for(num = 1; num <= n; num++)
    {
        temp = num;
        sum = 0;

         while(temp > 0)
         {
            digit = temp % 10;

            fact = 1;

            for(i = 1; i <= digit; i++)
            {
                fact = fact * i;
            }

            sum = sum + fact;

            temp = temp / 10;
         }

        if(sum == num)
        {
            printf("%d ", num);
        }
    }

}