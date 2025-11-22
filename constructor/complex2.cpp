#include<iostream>
using namespace std;

class complex
{
    private:
     int real ;
     int img;

    public:
    // default constructor : 
    complex() 
    {
        real=0;
        img=0; 
    }
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
    complex addcom(complex c)
    {
        complex temp;
        temp.real=real+c.real;
        temp.img=img+c.img;
        return temp;

    }
    //cpoy constructor :
    complex(complex &c) 
    {
        real =c.real;
        img =c.img ;

    }
    complex(int x)
    {
        real=x;
        img=0;

    }
};

int main()
{

    complex c1,c2,c3(2);
    complex c5=c1;
    c1.set(2,3);
    c2.set(4,5);
    c1.printc(c2);
    c3.printc();
    cout<<"addition of two complex number ";
    c1.addcom(c2);

    return 0;

} 