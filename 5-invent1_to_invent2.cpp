#include<iostream>
using namespace std;
class invent1
{
    private:
        float f1;
    public:
        invent1() { cout<<"DC for invent1\n"; }
        invent1(float x)
        {
            cout<<"PC(float) for invent1\n";
            f1=x;
        }
        invent1(int a,int b)
        {
            cout<<"PC(int,int) for invent1\n";
            f1=a+b;
        }
        float getf1()
        {
            return f1;
        }
        operator float()
        {
            cout<<"float() called for invent1\n";
            return f1;
        }
        void display1()
        {
            cout<<f1<<endl;
        }
};
class invent2
{
    private:
        float f2;
    public:
        invent2() { cout<<"DC for invent2\n"; }
        invent2(float x)
        {
            cout<<"PC for invent2\n";
            f2=x;
        }
        invent2(invent1 h)
        {
            cout<<"PC(invent1) called for invent2\n";
            f2=h.getf1();
        }
        void display2()
        {
            cout<<f2<<endl;
        }
};

int main()
{
    invent1 s1(4,5);
    invent2 d1;
    float tv;
    tv=s1;
    d1=s1;
    d1.display2();
    cout<<tv;
    return 0;
}