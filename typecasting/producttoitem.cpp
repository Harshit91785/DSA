#include<iostream>
using namespace std;

class product 
{
    private:
    int x;
    int y;
    public:
    product(int a , int b)
    {
        x=a;
        y=b;
    }
    void display()
    {
        cout<<"x="<<x<<"y="<<y<<endl;
    }
    int getx(){return x ;}
    int gety(){return y ;}

};

class item
{
    private:
    int i;
    public:
    item(product p)
    {
        i=p.getx()+p.gety();
        
    }
    void display()
    {
        cout<<i;
    }
};

int main()
{
    product p(2,5);
    item i=p;
    i.display();
    return 0;


}