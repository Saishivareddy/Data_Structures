#include <stdio.h>
int main()
{
	int a[100], size, i, n;
	int first, last, middle;
	printf("Enter the size of an array :");
	scanf("%d", &size);
	printf("Enter %d elements :", size);
	for (i = 0; i < size; i++)
	{
		scanf("%d", &a[i]);
		printf("%d\t", a[i]);
	}
	printf("\nEnter an element to search :");
	scanf("%d", &n);
	first = 0;
	last = size - 1;
	middle = (first + last) / 2;
	while (first <= last)
	{
		if (a[middle] == n)
		{
			printf("%d is found at %d position\n", n, middle + 1);
			break;
		}
		else if (a[middle] < n)
		{
			first = middle + 1;
		}
		else
		{
			last = middle - 1;
		}
		middle = (first + last) / 2;
	}
	if (first > last)
	{
		printf("%d is not found\n", n);
	}
	return 0;
}
