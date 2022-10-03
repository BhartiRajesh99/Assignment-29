#include<iostream>
using namespace std;
class Dollar
{
    private:
        int d;
    public:
        Dollar() { cout<<"DC called\n"; }
        Dollar(int x)
        {
            cout<<"PC called\n";
            d=x;
        }
        void display()
        {
            cout<<"dollar="<<d<<endl;
        }

};
int main()
{
    int x = 50;
    Dollar d;
    d = (int)x;
    d.display();
    return 0;
}
