#include<iostream>
using namespace std;
class item 
{
    private:
     int a,b;
    public:
     friend void f1(item);
     void setdata(int x, int y)
     {
        a=x;
        b=y;
     } 
};

void f1(item i)
{
    cout<<"sum is"<<i.a+i.b;

}
int main()
{
    item i1;
    i1.setdata(10,20);
   // f1(i1);
    cout<<endl;
    cout<<

    return 0;
}