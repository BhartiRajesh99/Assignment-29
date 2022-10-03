#include<iostream>
using namespace std;
class Rupee
{
    private:
        float r;
    public:
        Rupee() { }
        Rupee(float x)
        {
            cout<<"PC for rupee\n";
            r=x;
        }
        float getR()
        {
            return r;
        }
        void display()
        {
            cout<<"Rupee="<<r<<endl;
        }

};
class Dollar
{
    private:
        float d;
    public:
        Dollar() { }
        Dollar(Rupee q)
        {
            cout<<"PC for dollar\n";
            d=q.getR()/100.0;
        }
        void display()
        {
            cout<<"Dollar="<<d<<endl;
        }
        operator Rupee()
        {
            cout<<"Rupee() called for Dollar\n";
            return d*100.0;
        }
};
int main()
{
    Rupee r1 = 23;
    Dollar d1 = r1; // Rupee to Dollar conversion
    d1.display();
    r1.display();
    r1 = d1; // Dollar to Rupee Conversion
    d1.display();
    r1.display();
    return 0;
}