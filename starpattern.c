#include <stdio.h>
int main()
{
	int x,y;
	for(x = 5; x>=1; x++)
	{
    for (y = 5; y<=x; y++)
    {
    	printf("\t*",y);
	}
	printf("\n");
	}
	return 0;
}
