#include<stdio.h>
#include<stdlib.h>
void staticarrayinit(void);
void automaticarrayinit(void);
int main(void)
{
	printf("first call to each function:\n");
	staticarrayinit();
	automaticarrayinit();
	printf("\n\nsecond call to each function:\n");
	staticarrayinit();
	automaticarrayinit();
	printf("\n");
	system("pause");
	return 0;
}
void staticarrayinit(void)
{
	static int array[3];
	int i;
	printf("\n values on entering staticarrayinit:\n");
		for (i = 0; i <= 2; i++)
			printf("array[%d]=%d", i, array[i]); 
	printf("\n values on exciting staticarrayinit:\n");
	for (i = 0; i <= 2; i++)
		printf("array[%d]=%d", i, array[i]+=5);
}
void automaticarrayinit(void)
{
	int array2[3] = { 1,2,3 };
	int i;
	printf("\n values on entering automaticarrayinit:\n");
	for (i = 0; i <= 2; i++)
		printf("array2[%d]=%d", i, array2[i]);
	printf("\n values on exciting automaticarrayinit:\n");
	for (i = 0; i <= 2; i++)
		printf("array2[%d]=%d", i, array2[i] += 5);
}