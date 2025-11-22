#include<iostream>
using namespace std;
int highest(int x)
{   
    int a ,b=0,high=0,i;
    for( i=0;i<=3;i++)
    {
        a=x%10;
        x=x/10;
        if(x==0)
        {
            break;
        }
        if(a>b)
        {
            b=a ;
        }
    }
    
    return b ;
}
int main()
{
    int a;
    cout<<"enter the number ";
    cin>>a;
    cout<<"highest number in the given number is:" <<highest(a);
     return 0;
}