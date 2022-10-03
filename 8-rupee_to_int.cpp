#include<iostream>
using namespace std;
class Rupee
{
    private:
        int r;
    public:
        Rupee() { }
        Rupee(int x)
        {
            cout<<"PC called\n";
            r=x;
        }
        void display()
        {
            cout<<r<<endl;
        }
        operator int()
        {
            cout<<"int() called\n";
            return r;
        }
};
int main()
{
    Rupee r = 10;
    int x = r;
    cout<<x;
    return 0;
}