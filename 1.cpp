#include<iostream.h>
#include<conio.h>
int sum(int x,int y,int z=0,int w=0)
{
    return x+y+z+w;
}
void main()
{
    cout<<sum(10,20);
    cout<<sum(10,20,30);
    cout<<sum(10,20,30,40);
}

#include<iostream.h>
#include<conio.h>
class count
{
    private:int value;
    public:count()
            {
                value=5;
            }
            void operator ++()
            {
                ++value;
            }
            void operator ++(int)
            {
                value++;
            }
            void display()
            {
                cout<<"count="<<value;
            }
}
void mmain()
{
    count c1;
    c1++;
    c1.display();
    ++c1;
    c1.display();
}
