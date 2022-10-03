#include<iostream>
using namespace std;
class Minute
{
    private:
        int m;
    public:
        Minute() { cout<<"DC for minute\n";}
        Minute(int d)
        {
            cout<<"PC for minute\n";
            m=d;
        }
        void display()
        {
            cout<<"minutes="<<m<<endl;
        }
        
};
class Time
{
    private:
        int h,m;
    public:
        Time() { cout<<"DC called for time\n"; }
        Time(int x,int y)
        {
            cout<<"PC(int,int) called for time\n";
            h=x;
            m=y;
        }
        void display()
        {
            cout<<h<<"hour "<<m<<"minutes"<<endl;
        }
        operator Minute()
        {
            cout<<"Minute() for time\n";
            return h*60+m;
        }
};

int main()
{
    Time t1(2,30);
    t1.display();
    Minute m1;
    m1.display();
    m1=t1; // Fetch minute from time
    t1.display();
    m1.display();
    return 0;
}
