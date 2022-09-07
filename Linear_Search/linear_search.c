#include <stdio.h>
int main()
{
	int a[200], size, i, n, flag = 0;
	printf("Enter the size of an array  :");
	scanf("%d", &size);
	printf("Enter %d integers  :", size);
	for (i = 0; i < size; i++)
	{
		scanf("%d", &a[i]);
		printf("%d\t", a[i]);
	}
	printf("\nEnter an integer to search :");
	scanf("%d", &n);
	for (i = 0; i < size; i++)
	{
		if (a[i] == n)
		{
			printf("%d is found at %d position\n", n, i + 1);
			flag = 1;
			break;
		}
	}
	if (flag == 0)
		printf("%d is not found\n", n);
	return 0;
}
