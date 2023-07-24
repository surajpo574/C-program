#include <stdio.h>
# include <conio.h>
void disp(char ch);
void main()
{
	int x;
	char arr[] = {'a','b','c','d','e','f','g','h','i','j'};
	for(x = 0; x<10; x++)
	{
		disp (arr[x]);
	}
	getch();
}
void disp(char ch)
{
	printf("%c",ch);
}
