#include<iostream>
using namespace std;

class complex 
{
    private:
    int real;
    int img ;

    public:
    void display()
    {
        cout<<"real part is"<<real<<"  img part is"<<img;
    }
    complex(int x,int y)
    {
        real=x;
        img =y;
    }
    explicit operator int()
    {
        return (real+img);
    }

    operator long()
    {
        return (real-img);
    }

};
int main()
{
    complex c(2,5); //primitive  defined is coverted into user defiend 
    cout<<(long)c<<endl;// user defiend is converted into long 
    cout<<(int )c;   // user defiend is converted into int 

    return 0;

}
