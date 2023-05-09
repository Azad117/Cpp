#include<iostream.h>
#include<conio.h>
class emp
{
    char name[20];
    int age;
    public:void getdata(void);
            void display(void);
};
void emp::getdata(void)
{
    cout<<"enter name "<<endl;
    cin>>name;
    cout<<"enter age "<<endl;
    cin>>age;
}
void emp::display(void)
{
    cout<<"name ="<<name<<endl;
    cout<<"age ="<<age<<endl;
}
const int size=3;
void main()
{
    emp ob[size];
    for(int i=0;i<size;i++)
    {
        ob[i].gatdata();
    }
    cout<<"\n";
    for(int i=0;i<size;i++)
    {
        ob[i].display();
    }
}

#include<iostream.h>
#include<conio.h>
template <class t>
t add(t a,t b)
{
    return (a+b);
}
void mmain()
{
    int r1;
    float r2;
    r1=add(2,3);
    cout<<r1;
    r2=add(3.5,6.5);
    cout<<r2;
}
