#include<iostream>
using namespace std;

class complex
{
    private:
     int real ;
     int img;

    public:
    void set(int r, int i)
    {
        real = r ;
        img = i;

    }
    int printc()
    {
        cout<<real   <<"+i"<< img ;

    }
    int printc(complex c)
    {
        cout<<real <<" +i"<<img<<endl;
        cout<<c.real <<" +i"<<c.img<<endl;
    }
    int addcom(complex c)
    {
        cout<<real+c.real<<" +i"<<img+c.img ;
    }
};

int main()
{

    complex c1,c2;
    c1.set(2,3);
    c2.set(4,5);
    c1.printc(c2);
    cout<<"addition of two complex number ";
    c1.addcom(c2);

    return 0;

} 