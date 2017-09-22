#include<iostream.h>
#include<conio.h>

void main()
{
   clrscr();
   int a[5][5],i,j;
   cout<<"Enter adjacency matrix:\n";
   for(i=0; i<5; i++)
     for(j=0;j<5;j++)
	cin>>a[i][j];

   cout<<"Matrix: \n";
   for(i=0; i<4; i++)
     { for(j=0;j<4;j++)
	 { cout<<a[i][j]<<" ";
	 }
       cout<<endl;
     }

     cout<<endl<<endl<<"V1 ";

   for(i=0;i<5;i++)
     { for(j=0;j<5;j++)
	 {  if(i==4)
	      {
		if(a[j][i]==1 && j!=1)
		 {
		    cout<<"V"<<j+1<<" ";
		    a[i][j]=0;
		    a[j][i]=0;
		 }
	      }
	    else
	      {
		if(a[j][i]==1)
		 {
		    cout<<"V"<<j+1<<" ";
		    a[i][j]=0;
		    a[j][i]=0;
		    i=j-1;
		    break;
		 }
	      }
	 }
     }
   getch();
}