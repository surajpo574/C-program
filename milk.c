#include <stdio.h>
#include <conio.h>
int main()
{
	float mlkcon[12] , tot = 0;
	int x;
	for(x = 0; x < 12; x++)
	{
		printf("\n Enter amount of milk consumed in month no:%d:", x+1);
		scanf("%f", & mlkcon [x]);
		tot = tot + mlkcon [x];
	}
	printf("\n\t Month no: \t\t\t Milk consumed in ltr");
	for(x = 0 ; x < 12 ; x++)
	{
		printf("\n\t %d \t\t %0.2f", x+1 , mlkcon[x]);
	}
	printf("\n\n\t TOtal milk consumed in ltr = %0.2f", tot);
	return 0;
}