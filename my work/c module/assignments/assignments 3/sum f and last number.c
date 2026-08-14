
void main()
{
    int n, first, last;

    printf("enter number: ");
    scanf("%d", &n);

    last = n % 10;

    while(n >= 10)
    {
        n = n / 10;
    }

    first = n;

    printf("sum = %d", first + last);

    return 0;
}