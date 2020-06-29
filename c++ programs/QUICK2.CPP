/* C implementation QuickSort */
#include<stdio.h>
#include<conio.h>
// A utility function to swap two elements
void swap(int* a, int* b)
{
	int t = *a;
	*a = *b;
	*b = t;
}
int partition (int arr[], int low, int high)
{
	int pivot = arr[high]; // pivot
	int i = (low); // Index of	 smaller element
	//printf("i = %d",i);
	for (int j = low; j < high; j++)
	{
		if (arr[j] < pivot)
		{
			swap(&arr[i], &arr[j]);
			i++;
		}
	}
	swap(&arr[i], &arr[high]);
	return (i);
}
void quickSort(int arr[], int low, int high)
{
	if (low < high)
	{
		int pi = partition(arr, low, high);
		quickSort(arr, low, pi - 1);
		quickSort(arr, pi + 1, high);
	}
}

void printArray(int arr[], int size)
{
	int i;
	for (i=0; i < size; i++)
		printf("%d ", arr[i]);
	printf("\n");
}
int main()
{
	clrscr();
	int arr[] = {10, 7, 8, 9, 1, 5};
	int n = sizeof(arr)/sizeof(arr[0]);
	quickSort(arr, 0, n-1);
	printf("Sorted array: \n");
	printArray(arr, n);
	getch();
	return 0;
}
