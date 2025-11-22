#include<iostream>
using namespace std;

class notop
{
    private :
    int x;
     public:
    notop()
    {
        x=1;
    }
    notop(int x)
    {
        this->x=x;

    }
    notop operator!()
    {
        return -x;
    }
};

int main()
{
     notop a1(10);
     int a=12;
     cout<<!a1;
}