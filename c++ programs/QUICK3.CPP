#include <stdio.h>
#include <conio.h>
#define MAX 18
int arr[MAX] = {4,6,2,2,56,2,38,3,2,6,3,6,9,12,55,2,7,6},k;
void swap(int num1, int num2) {
   int temp = arr[num1];
   arr[num1] = arr[num2];
   arr[num2] = temp;
}

int partition(int left, int right, int pivot) {
   int i;
   int l = left -1;
   int r = right;
   while(l < r)
   {
	 while(arr[++l] < pivot) {}
	 while(arr[--r] >= pivot) {}
	 if(l < r)
	    swap(l,r);
   }
   swap(l,right);
   k = l+1;
	 for(i=k;i<=right;i++)
	 {
		if(arr[l]==arr[i])
		{    swap(i,k);
			k++;
		}
	 }
   return l;
}

void quickSort(int left, int right) {
   if(right-left > 0)
   {
	 int part = partition(left, right, arr[right]);
	 quickSort(left,part-1);
	 quickSort(k,right);
   }
}

void main() {
   clrscr();
   int i;
   printf("Input Array: ");
    for(i = 0;i < MAX;i++)
	 printf("%d ",arr[i]);
   quickSort(0,MAX-1);
   printf("\nOutput Array: ");
	for(i = 0;i < MAX;i++)
	 printf("%d ",arr[i]);
   getch();
}