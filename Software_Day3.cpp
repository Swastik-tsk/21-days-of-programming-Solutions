#include<iostream.h>
#include<math.h>
#include<conio.h>

void main()
{       clrscr();
	int n;
	int a,r,g=0, s=0;

	cout<<"first term:";cin>>a;cout<<"\ncommon ratio:"
	cin>>r;cout<<"\nnumber of term:";cin>>n;

	for(int i=0;i<n;i++)
	{	g=a*pow(r,i);
		cout<<g<<" ";
		s+=g;
	}	cout<<"Sum of the GP: "<<s;
	getch();
}
