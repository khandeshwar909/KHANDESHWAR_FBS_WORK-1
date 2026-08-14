
void main()
{
    int n, temp, digit, reverse = 0;

    printf("enter number: ");
    scanf("%d", &n);

    temp = n;

    while(temp > 0)
    {
        digit = temp % 10;

        reverse = reverse * 10 + digit;

        temp = temp / 10;
    }

    if(reverse == n)
        printf("palindrome");
    else
        printf("not Palindrome");

}