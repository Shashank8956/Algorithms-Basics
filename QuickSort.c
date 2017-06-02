#include <stdio.h>
#include <conio.h>

void quick_sort(int[],int,int);					//quick_sort(array_reference, lower limit, upper limit)
int partition(int[],int,int);					//partition(array_reference, lower limit, upper limit)
 
int main()
{
    int a[50],n,i;
    printf("Array Length?");
    scanf("%d",&n);
    printf("\nElements:");
    
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        
    quick_sort(a,0,n-1);                         //quick_sort(array_reference, lower limit, upper limit)
    printf("\nArray after sorting:");
    
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
	getch();
    return 0;        
}
 
void quick_sort(int a[],int l,int u)
{
    int mid;
    if(l<u)
    {
        mid=partition(a,l,u);
        quick_sort(a,l,mid-1);
        quick_sort(a,mid+1,u);
    }
}
 
int partition(int a[],int l,int u)
{
    int v,i,j,temp;
    v=a[l];												//v = a[lower]
    i=l;
    j=u+1;
    
    do
    {
        do
            i++;
            
        while(a[i]<v&&i<=u);
        
        do
            j--;
        while(v<a[j]);
        
        if(i<j)											//Swaping
        {
            temp=a[i];
            a[i]=a[j];											
            a[j]=temp;
        }
    }while(i<j);
    
    a[l]=a[j];
    a[j]=v;
    
    return(j);
}
