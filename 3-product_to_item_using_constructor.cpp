#include<iostream>
using namespace std;
class Product
{
    private:
        int a,b;
    public:
        Product() { cout<<"DC for product"<<endl; }
        Product(Product &p)
        {
            cout<<"CC for product\n";
            a=p.a;
            b=p.b;
        }
        Product(int x,int y)
        {
            cout<<"PC called for Product"<<endl;
            a=x;
            b=y;
        }
        void setData(int x,int y)
        {
            a=x;
            b=y;
        }
        int getA()
        {
            return a;
        }
        int getB()
        {
            return b;
        }
};
class Item
{
    private:
        int i;
    public:
        Item()
        {
            cout<<"DC caleed for Item"<<endl;
        }
        Item(int d)
        {
            cout<<"item(int) called"<<endl;
            i=d;
        }
        Item(Product h)
        {
            cout<<"item(product) called"<<endl;
            i=h.getA()+h.getB();
        }
        void setData(int x)
        {
            i=x;
        }
        void display()
        {
            cout<<i<<endl;
        }
        Item operator=(Product j)
        {
            cout<<"operator = called for item"<<endl;
            i=j.getA()+j.getB();
            return *this;
        }
};

int main()
{
    Item i1;
    Product p1;
    p1.setData(3,4);
    i1=(Item)p1;
    i1.display();
    return 0;
}
