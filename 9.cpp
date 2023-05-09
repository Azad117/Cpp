#include<iostream.h>
#include<conio.h>
class abc
{
    private:int x,y
    public:void getdata()
        {
            cout<<"enter x,y values";
            cin>>x>>y;
        }
void add(abc ob1,abc ob2)
{
    x=ob1.x+ob2.x;
    y=ob1.y+ob2.y;
}
void show()
{
    cout<<"x="<<x<<"\n";
    cout<<"y="<<y<<"\n";
}
void main()
{
    abc ob1,ob2,ob3;
    ob1.getdata();
    ob2.gatdata();
    ob1.show();
    ob2.show();
    ob3.add(ob1,ob2);
    ob3.show();
}

#include<iostream.h>
#include<conio.h>
template <class t>
class test
{
    t a;
    public:test(t x)
        {
            a=x;
        }
        void show()
        {
            cout<<a;
        }
};
void mmain()
{
    test<int>ob(2);
    test<float>ob1(2.6);
    ob.show();
    ob1.show();
}
