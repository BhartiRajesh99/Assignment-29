#include<iostream>
using namespace std;
class Time
{
    private:
        int h,m;
    public:
        Time()
        {
            cout<<"DC called\n";
        }
        Time(int s)
        {
            cout<<"PC called\n";
            h=s/3600;
            m=s%3600;
        }
        void display()
        {
            cout<<"hour="<<h<<" min="<<m<<endl;
        }
};
int main()
{
    int duration;
    cout<<"Enter time duration in seconds:";
    cin>>duration;
    Time t1 = duration;
    t1.display();
    return 0;
}