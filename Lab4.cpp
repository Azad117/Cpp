#include<iostream.h>
#include<conio.h>
void main()
{
	int n,i,a[5];
	clrscr();
	cout<<"enter any 5 numbers";
	for(i=0;i<5;i++)
	{
		cin>>a[i];
	}
	for(n=0;n<5;n++)
	{
		cout<<a[n]<<" ";
	}
	getch();
}
