#include <stdio.h>
int main()
{
	int arr[100], size, n, i;
	int flag = 0;
	printf("Enter the size of the array : ");
	scanf("%d", &size);
	printf("Enter the %d elements to an array  :", size);
	for (i = 0; i < size; i++)
	{
		scanf("%d", &arr[i]);
	}
	printf("Array elements are :\t");
	for (i = 0; i < size; i++)
	{
		printf("%d\t", arr[i]);
	}
	printf("\nEnter an integer to search in array :");
	scanf("%d", &n);
	for (i = 0; i < size; i++)
	{
		if (arr[i] == n)
		{
			printf("%d is found at %d place in array\n", n, i + 1);
			flag = 1;
			break;
		}
	}
	if (flag == 0)
	{
		printf("%d is not found\n", n);
	}
	return 0;
}
