#include<iostream>
using namespace std ;

class area
{
    private:
      int x,y,a;
      
    public:
      areac(int x , int y)
      {
        return x*y;
      }  
      areac(int a)
      {
        return 3.14*a*a ;

      }
};
int main()
{   
    int x,y,a,n;
    cout<<"find the area of which figure :"<<endl;
    cout<<"press 1 : for rectangle "<<endl<<"2: for circle ";
    cin>>n;
    area a1;
    switch (n)
    {
    case 1:
        cout<<"enter length and breadth";
        cin>>x>>y;
        cout<<"area of reactangle :"<<a1.areac(x,y);
        break;

    case 2:
        cout<<"enter radius of circle ";
        cin>>a;
        cout<<"area of circle  :"<<a1.areac(a);
        break;

    }
}