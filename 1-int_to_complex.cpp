#include<iostream>
using namespace std;
class complex
{
    private:
        int real,img;
    public:
        complex() { cout<<"dc call\n"; }
        complex(int x)
        {
            cout<<"para call\n";
            real=x;
            img=x;
        }
        friend istream& operator>>(istream &input,complex h)
        {
            input>>h.real>>h.img;
            return input;
        }
        friend ostream& operator<<(ostream &output,complex n)
        {
            output<<n.real<<"+"<<n.img<<"i"<<endl;
            return output;
        }
};
int main()
{
    complex c1;
    int x=5;
    c1=x;
    cout<<c1;
    return 0;
}