#include <stdio.h>
#include <string.h>

int main()
{
	char str;
    scanf("Enter the string:",&str);
	printf("The given string is =%s\n", str);
	printf("After reversing string is =%s", strrev(str));
	return 0;
}
