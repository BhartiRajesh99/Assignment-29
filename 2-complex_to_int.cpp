#include<iostream>
using namespace std;
class complex 
{
    private:
        int real,img;
    public:
        complex() { cout<<"dc call\n"; }
        complex(int x,int y)
        {
            cout<<"para1 call\n";
            real=x;
            img=y;
        }
        complex(int x)
        {
            cout<<"para2 call\n";
            real=x;
            img=x;
        }
        friend istream& operator>>(istream &in,complex &h)
        {
            in>>h.real>>h.img;
            return in;
        }
        friend ostream& operator>>(ostream &out,complex &n)
        {
            out<<n.real<<"+"<<n.img<<"i"<<endl;
            return out;
        }
        operator int()
        {
            return (real+img);
        }
};
int main()
{
    complex c1(4,5);
    cin>>c1;
    int x;
    x=(int)c1;
    cout<<x;
    return 0;
}
