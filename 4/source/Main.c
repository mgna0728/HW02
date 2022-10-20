#include<stdlib.h>
#include<stdio.h>
int main()
{
	int a;
	float b;
	while (1)
	{
		printf("Enter # of hours worked (-1 to end):");
		scanf_s("%d", &a);
		if (a == -1)
			break;
		else
		{
			printf("Enter hourly rate of the worker($00.00):");
			scanf_s("%f", &b);
			printf("Salary is $%.2f\n\n", a*b);
		}
	}
}