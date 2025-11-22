#include<iostream>
using namespace std ;

class larger
{
    private:
    int a ;
    int b;

    public:
    int setno(int x, int y)
    {
        a=x;
        b=y;
    }

    int getsout(){
    if(a>b){
        return a;   
    } 
    else
    return b ;};
};
int main()
{
   class larger l1;
    l1.setno(4,5);
    cout<<"larger between two is: "<<l1.getsout();

}