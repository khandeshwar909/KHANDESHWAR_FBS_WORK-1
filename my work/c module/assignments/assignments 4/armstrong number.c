void main()
{
    int n, num, temp, digit, sum;

    printf("enter n: ");
    scanf("%d", &n);

    printf("armstrong numbers: ");

    for(num = 1; num <= n; num++)
    {
        temp = num;
        sum = 0;

        while(temp > 0)
        {
            digit = temp % 10;
            sum = sum + digit * digit * digit;
            temp = temp / 10;
        }

        if(sum == num)
        {
            printf("%d ", num);
        }
}
}