
void main()
{
    int n, num, i, count;

    printf("enter n: ");
    scanf("%d", &n);

    printf("prime numbers: ");

    for(num = 2; num <= n; num++)
    {
        count = 0;

        for(i = 1; i <= num; i++)
        {
            if(num % i == 0)
            {
                count++;
            }
        }

        if(count == 2)
        {
            printf("%d ", num);
        }
    }

}