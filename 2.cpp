#include<iostream.h>
#include<conio.h>
inline float area(float a,float b)
{
    return a*b;
}
void main()
{
    float a,b,h;
    cout<<"Enter b,h values: ";
    cin>>b>>h; 
    a=area(b,h);
    cout<<"Area is "<<a;
}

