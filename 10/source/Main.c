#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int l;//�٧Ϊ����

	while (1)
	{
		printf("��J�٧Ϊ�����G ");
		scanf_s("%d", &l);
		if (l <= 0)
		{
			break;
		}
		for (int i = 1; i <= l; i++)//�M���٧γ̪��@��W��]�]�A�̪����@��^�Ҧ���
		{
			printf(" ");//�C��e���[�Ů�A����n��
			for (int j = 1; j <= 2 * l - 1; j++)//�M���٧γ̪��@��W��]�]�A�̪����@��^�C�檺�Ҧ��C	
			{
				if (j > l - i && j < 2 * l - (l - i))
				{
					printf("*");
				}
				else
				{
					printf(" ");
				}
			}
			printf("\n");
		}
		for (int i = l + 1; i < 2 * l + 1; i++)//�M���٧γ̪��@��W��]�]�A�̪����@��^�Ҧ���
		{
			printf(" ");//�C��e���[�Ů�A���M��ؾ����A�i�h��
			for (int j = 1; j <= 2 * l - 1; j++)//�M���٧γ̪��@��U��]���]�A�̪����@��^�C�檺�Ҧ��C
			{
				if (j > i - l && j < 2 * l - (i - l))
				{
					printf("*");
				}
				else
				{
					printf(" ");
				}
			}
			printf("\n");
		}
	}
	system("pause");
	return 0;
}