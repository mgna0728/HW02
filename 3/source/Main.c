#include <stdio.h>
#include <stdlib.h>
int main()
{
	int c;
	float a, b, d;
	while (1)
	{
		printf("Enter loan principle (-1 to end):");
		scanf_s("%f", &a);
		if (a == -1)
		{
			break;
		}
		printf("Enter interest rate:");
		scanf_s("%f", &b);
		printf("Enter term of the loan in days:");
		scanf_s("%d", &c);
		printf("The interest charge is $%.2f\n\n", a*b*c / 365);
	}
	return 0;
}