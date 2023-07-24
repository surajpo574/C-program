#include <stdio.h>
#include <conio.h>
int main()
{
int r,c,x[3][3];
for (r=1;r<=3;r++)
{
printf("Enter the elements of row  %d: ",r);
for(c=1;c<=3;c++)
{
printf("Enter the element of column  %d:  ",c);
scanf("%d",&x[r-1][c-1]);
}
}

printf("\n3*3 matrix is :\n\n");
for(r=1;r<=3;r++)
{
for(c=1;c<=3;c++)
{
printf("\t%d",x[r-1][c-1]);
}
printf("\n");
}
return 0;
}

