#include<iostream.h>
#include<conio.h>

void Lsearch(int a[], int n)
{
	int key;
	cout<<"Enter the element to be searched: ";
	cin>>key;
	for(int i=0;i<n;i++)
	  {
		 if(a[i]==key)
			break;
	  }
	if(i!=n)
		cout<<"Element found at position "<<i+1;
	else
		cout<<"Element not found";
}

void main()
{  clrscr();
	int a[5];
	cout<<"Enter the elements of the array: ";
	for(int i=0;i<5;i++)
		cin>>a[i];
	Lsearch(a, 5);
	getch();
}