#include<iostream.h>
#include<conio.h>
class M
{
    protected: int m;
    public: void getm(int);
};
class N
{
    protected: int n;
    public: void getn(int);
};
class p:public M,public N
{
    public: void display(void);
};
void M::getm(int x)
{
    m=x;
}
void N::getn(int y)
{
    n=y;
}
void P::display(void)
{
    cout<<"m="<<m;
    cout<<"n="<<n;
}
void main()
{
    P ob;
    ob.getm(10);
    ob.getn(20);
    ob.display();
}

#include<iostream.h>
#include<conio.h>
class test
{
    public:int a,b;
    public:void show()
        {
            a=10;b=20;
            cout<<"address="<<this<<endl;
            cout<<"this->a="<<this->a<<endl;
            cout<<"this->b="<<this->b<<endl;
        }
}
void mmain()
{
    test t;
    t.show();
}
