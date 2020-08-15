#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int num1,sum=1,min=10000;
	scanf_s("%d", &num1);
	for (int x = 1; x <= num1; x++)
	{
		if (x != 1 && num1 % x == 0)
		{
			sum++;
			if (min > x)
			{
				min = x;
			}
		}
	}
	printf("%d", sum);
        if (sum > 2)
		{
			printf("%d",min); 
		}
		else
		{
			printf("%d",num1);
		}
}