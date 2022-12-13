#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int a[] = { 6,5,7,9,15,62,1,23,25,14 };
	int i, j, k;
	for (i = 8; i >= 0; i--)
	{
		for (j = 0; j <= 8; j++)
		{
			if (a[j] > a[j + 1])
			{
				k = a[j + 1];
				a[j+1] = a[j];
				a[j] = k;
			}
		}
	}
	return 0;
}
