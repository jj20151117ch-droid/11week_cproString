#include<stdio.h>

int main(void)
{
	const char* p = "HelloWorld!";
	printf("%s\n", p);

	p = "Welcome to C World!";
	printf("%s\n", p);

	p = "Goodbye!";//가능
	printf("%s\n", p);
	//p[0] = 'g';//불가능

	return 0;
}