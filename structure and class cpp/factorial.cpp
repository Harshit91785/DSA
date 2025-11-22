#include<iostream>
using namespace std;
class factorial
{
    private:
    static int a ;
    public:
    static getno(int x)
    {
        a=x;

    }
    static int factorailc()
    {   int fact=1;
        if(a==0||a==1)
        {
            cout<<"factorail is 1";
        }
        else
        {for(int i=0;i<=a-1;i++)
        {
            fact=fact*a;
            a=a-1;
        
        }
        cout<<"factorail is"<<fact;
    }
    }
};
int factorial::a;
int main()
{
    int a;
    cout<<"enter the number ";
    cin>>a;
    factorial::getno(a);
    factorial::factorailc();

}