#include<iostream.h>
#include<conio.h>
void main()
{
	int a,b,c;
	clrscr();
	cout<<"Enter any three integers \n";
	cin>>a>>b>>c;
	if(a>b&&a>c)
	{
		cout<<"a is big";
	}
	else
	{
		if(b>a&&b>c)
		{
			cout<<"b is big";
		}
		else
		{
			cout<<"c is big";
		}
	}
	getch();
}
