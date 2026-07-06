#include<stdio.h>

int main()
{
    int min = 130;
    int hour;
    int rem;

    hour = min / 60;
    rem = min % 60;

    printf("Hours = %d\n", hour);
    printf("Minutes = %d", rem);

    return 0;
}