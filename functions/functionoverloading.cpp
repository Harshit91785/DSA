#include<iostream>
using namespace std;
float area(float r)
{
    return 3.14*r*r ;
}
int area(int a,int b)
{
    return a*b;
}
int main()
{
    float rad;
    int x,y;
    cout<<"radius of circle ";
    cin>> rad ;
    cout<<"area of circle :"<<area(rad);
    cout<<endl;
    cout<<"to calculate area of rectangle";
    cout<<"enter the length and  bredth ";
    cin>>x>>y ;
    cout<<"area of rectangle is "<<area(x,y);
    cout<<endl;

}
