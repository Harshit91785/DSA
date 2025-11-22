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
    complex operator+(complex c)
    {
        complex temp ;
        temp.real=real+c.real;
        temp.img=img+c.img;

        return temp;
    }
    int getreal()
    {
        return real;

    }
    int getimg()
    {
        return img ;
    }
};

int main()
{

    complex c1,c2,c3;
    c1.set(2,3);
    c2.set(4,5);
    cout<<"addition of two complex number "<<endl;
    //c3=c1+c2; 
    c3=c1.operator+(c2);
    cout<<c3.getreal()<<"+i"<<c3.getimg();
    return 0;

} 