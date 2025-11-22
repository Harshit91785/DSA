#include<iostream>
using namespace std ;
int prime(int x)
{
    int flag=0;
   for(int i=2;i<x-1;i++)
   {
      if(x%i==0)
      {
        flag=1;
        break;
      }
   }
   return flag ;
}
int main()
{
    int a;
    cout<<"enter the number ";
    cin>>a;
    if(prime(a)==1)
    {
        cout<<"number is composite ";
    }
    else 
    cout<<"number is prime ";

    return 0;

}