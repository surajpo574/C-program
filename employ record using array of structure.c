#include <stdio.h>
#include <conio.h>
struct employee
{
	char ename[10];
	int sal;
	int eid[5];
	char addr[10];
	char gend[10];
};
struct employee emp[5];
int i,j;
void ask()
{
	for(i = 0; i < 2; i++)
	{
		printf("\n enter %dst employee record:\n",i+1);
		printf("\n Enter employee id:");
		scanf("%d", &emp[i].eid);
		printf("\nemployee name:\t");
		scanf("%s",emp[i].ename);
		printf("\n enter salary:\t");
		scanf("%d",&emp[i].sal);
		printf("\n Enter employess address:");
		scanf("%s" , emp[i].addr);
		printf("Enter Employees gender:\t");
		scanf("%s",emp[i].gend);
		
		
		
	}
	printf("\n Displaying Employment Record:\n");
	for(i = 0; i < 2; i++)
	{
		printf("Employee id is:%d",emp[i].eid);
		printf("\n Employee Name is:%s",emp[i].ename);
		printf("\n salary is %d", emp[i].sal);
		printf("\n Address is:%s", emp[i].addr);
		printf("\n Gender is:%s\n", emp[i].gend);
	}
}
void main()
{
	ask();
	getch();
}
