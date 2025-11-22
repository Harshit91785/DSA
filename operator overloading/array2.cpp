#include<iostream>
using namespace std;

class array
{
    private:
    int arr[100];
    const int size=100;

    public:
     array()
     {
        arr[0]=0;
     }

     void setarry(int n,int idx)
     {
        if(idx >= size)
        {
            cout<<"index out of bound ";
            exit(0);
        }
        arr[idx]=n;
     }

     void display(int idx)
     {
        cout<<arr[idx];
     }

     int operator[](int idx)
     {
        if(idx >=size)
        {
            cout<<"index out of bound ";

        }
        return arr[idx];
     };
};

int main()
{
    array a1, a2 ;
    a1.setarry(18,10);
    //a1.display(100);
    cout<<a1[10];
}