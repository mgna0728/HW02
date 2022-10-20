#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a, b;
	float c, d, e, f;
	while (a = 1)
	{
		printf("Enter account number(-1 to end):");
		scanf_s("%d", &b);
		if (b == -1)
		{
			break;
		}
		printf("Enter beginng balance:");
		scanf_s("%f", &c);
		printf("Enter total charges:");
		scanf_s("%f", &d);
		printf("Enter total credits:");
		scanf_s("%f", &e);
		printf("Enter credits limit:");
		scanf_s("%f", &f);
		if (f - c < e)
		{
			printf("Acount:%d\n", b);
			printf("Credit limit:%.2f\n", f);
			printf("Balance:%.2f\n", c + e);
			printf("Credit limit Exceeded.\n\n");
		}
	}
	return 0;
}