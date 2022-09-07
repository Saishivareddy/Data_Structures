#include <stdio.h>
int main()
{
	int arr[100], size, n, i;
	int first, last, middle;
	printf("Enter the size of the array :");
	scanf("%d", &size);
	printf("Enter %d elements (in ascending order) to array :", size);
	for(i=0;i<size; i++)
	{
		scanf("%d", &arr[i]);
	}
	printf("Array elements are :\t");
	for(i = 0; i < size; i++)
	{
		printf("%d\t", arr[i]);
	}
	printf("\nEnter an element to search in array : ");
	scanf("%d", &n);
	first = 0;
	last = size - 1;
	middle = (first + last) / 2;
	while(first <= last)
	{
		if(arr[middle] == n)
		{
			printf("%d is found at %d position\n", n, middle+1);
			break;
		}
		else if(arr[middle] < n)
		{
			first = middle + 1;
		}
		else
		{
			last = middle - 1;
		}
		middle = (first + last) / 2;
	}
	if(first > last)
	{
		printf("%d is not found\n", n);
	}
	return 0;
}
