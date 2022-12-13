#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int a[9] = { 6,5,7,9,15,3,23,25,14,};
	int i, j, k;
	for (i = 8; i >0; i--)
	{
		for (j = 0; j <= 8; j++)
		{
			if (a[j] > a[j + 1])
			{
				k = a[j];
				a[j] = a[j+1];
				a[j+1] = k;
				//printf("%3d", a[j]);
			}
		}
	}
	for (i = 0; i <=8; i++)
	{
		printf("%3d", a[i],8);
	}
	system("pause");
	return 0;
}