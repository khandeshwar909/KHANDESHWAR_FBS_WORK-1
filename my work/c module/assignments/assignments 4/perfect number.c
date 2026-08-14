void main()
{
    int n, num, i, sum;

    printf("enter n: ");
    scanf("%d", &n);

    printf("perfect numbers: ");

    for(num = 1; num <= n; num++)
    {
        sum = 0;

        for(i = 1; i < num; i++)
        {
            if(num % i == 0)
            {
                sum = sum + i;
            }
        }

        if(sum == num)
        {
            printf("%d ", num);
        }
    }

}