#include<iostream.h>
#include<conio.h>

void main()
{
   clrscr();
   int a[4][4],i,j, cnt=0, min=10000,sum=0;
   cout<<"Enter adjacency matrix:\n";
   for(i=0; i<4; i++)
     for(j=0;j<4;j++)
	cin>>a[i][j];

   cout<<"Matrix: \n";
   for(i=0; i<4; i++)
     { for(j=0;j<4;j++)
	 { cout<<a[i][j]<<" ";
	 }
       cout<<endl;
     }

     cout<<endl;
   while(cnt<3)
    {
       for(i=0; i<4; i++)
	 {  for(j=0;j<4;j++)
	      { if(a[i][j]!=0)
		  {
		    if(a[i][j]<min)
		      { min=a[i][j];
			a[i][j]=0;
			a[j][i]=0;
		      }

		  }
	      }
	 }
      sum+=min;
      min=10000;
      cnt++;
    }

    cout<<"Minimum spanning tree: "<<sum;
   getch();
}