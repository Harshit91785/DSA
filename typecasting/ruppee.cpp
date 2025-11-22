#include<iostream>
using namespace std;

class rupee
{
    private:
    int x;

    public:

    int getr()
    {
        return x;

    }
    rupee ()
    {
        cout<<"default construtor called";

    }
    rupee (float n)
    {
        cout<<"paramterizer constructor called for rupee "<<endl;
        x=n;

    }
    void display()
    {
        cout<<"ruppee is "<<x<<endl;
    }

    operator float()
    {
        cout<<"float() called for rupee"<<endl;
        return x ;
    }


};

class dollar
{
    private:
    float x;
    public:

    dollar(rupee r)
    {
        cout<<"pc constrouctor called for dollar(rupee)"<<endl;
        x=r/100.0;
    }
    dollar()
    {
        cout<<"default comstructor called "<<endl;

    }
    dollar(float n )
    {
        cout<<"pc  for dollar "<<endl;
        x=n;
    }
    float display()
    {
        cout<<"dollar is "<<x<<endl;
    }

    operator rupee()
    {
        cout<<"ruppe( ) called for dollar "<<endl;
        return x*100;
    }
};


int main()
{
    float x=5;
    float y=6;
    rupee r=x; // this typecasting done by pc 
    r.display();

    x=(float)r; // thid is by overloading typecasting 
    cout<<x;

    dollar d=y;
    d.display();
   // r=d;
    //r.display();

    d=r;         // not run because dollar is defined after ruppe class 
    d.display(); // we have to define dollar in starting and make a pc constructor in dollat with argument ruppe 

}