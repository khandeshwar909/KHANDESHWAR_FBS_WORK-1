#include <stdio.h>
void main()
{
	char n= "a";
	
	if (n=="a"|| n=="e"|| n=="i"|| n=="o"||
	n=="u"||n=="A"||n=="E"||n=="I"|| n=="O"|| n=="U")
	
	{
		printf ("%c is vowel",n);
	}
	else
	{
		printf("%c is consonant",n);
	}
	
	return 0;
}