#include <stdio.h>
int main()
{
	int num = 121;
	int first,second,third;
	
	first = num /100;
	second = (num/100)%10;
	third = num%10;
	
	if (second==third)
	
	{
		printf("%d is palindrome",num);
	}
	else
	{
		printf("%d is not palindrome",num);
	}
	
	return 0;
}