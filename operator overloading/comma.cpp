#include<iostream>
using namespace std;

class comma
{
   private:
   int a ,b,c;
   public:
   comma()
   {
   }
   comma(int x,int y,int z)
   {
    a=x;
    b=y;
    c=z;
   }
   void display()
   {
     cout<<"value of a  "<<a<<endl;
     cout<<"value of b  "<<b<<endl;
     cout<<"value of c  "<<c<<endl;
   }

   comma operator,(comma obj)
   {
    comma temp;
    temp.a=a+obj.a;
    temp.b=b+obj.b;
    temp.c=c+obj.c;
    return temp;
   }
};

int main()
{
    comma c1(3,3,4);
    comma c2(2,2,2);
    comma c3,c4;
    c3=(c1,c2);
    c3.display();
    c4=(c1,c2,c3);
    c4.display();
}