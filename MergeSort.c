#include <stdio.h>
#include <conio.h>

void mergesort(int[] ,int ,int ,int);
void partition(int[], int, int);

int n;

int main()
{
	printf("Size of array? ");
	scanf("%d", &n);
	int a[n];
	printf("Elements: ");
	for(int i=0; i<n; i++)
		scanf("%d",&a[i]);
	partition(a, 0, n-1);
	for(int i=0; i<n; i++)
		printf("%d ",a[i]);
	getch();
	return 0;
}

void partition(int a[], int low, int high)								//Breaks the array
{
	int mid;
	if(low<high)
	{
		mid = (high + low)/2;
		partition(a, low, mid);
		partition(a, mid+1, high);
		mergesort(a, low, mid, high);
	}
}

void mergesort(int a[], int low, int mid, int high)						//Merges all the broken parts of array
{
	int i, mi, k, lo, temp[n];											//Size of the temp array must be -eq to the
	lo = low;															//original Array
	mi = mid+1;
	i = low;
	
	while((lo<=mid) && (mi<=high))
	{
		if(a[lo]<=a[mi])
		{
			temp[i] = a[lo];
			lo++;
		}
		else{
			temp[i] = a[mi];
			mi++;
		}
		i++;
	}
	
	if(lo>mid)
	{
		for(k=mi; k <=high; k++)
		{
			temp[i] = a[k];
			i++;
		}
	}
	else
	{
		for(k=lo;k<=mid;k++)
		{
			temp[i] = a[k];
			i++;
		}
	}
	
	for(k=low; k<=high; k++)								//Copying temp array back in original array
		a[k] = temp[k];
}









