#include <stdio.h>
#include <stdlib.h>

int main()
{
	float a, c;
	while (1)
	{
		printf("Enter sales in dollars(-1 to end):");
		scanf_s("%f", &a);
		if (a == -1)
			break;
		else
			c = 200 + 0.09*a;
		printf("Salary is:$%7.2f\n", c);
	}
}