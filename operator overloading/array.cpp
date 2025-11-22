#include<iostream>
using namespace std;

class array{
    private:
    int arr[100];
    int size ;

    public:
    array()
    {
        size=0;
    }
    array(int x,int y)
    {
        arr[x]=y;

    }
    int getelement(int index)
    {
        if(index>=0 && index<size)
        {
            return arr[index];

        }
        else{
            cout<<"index is outof bound ";
            return -1;

        }
    }
    
};
int main()
{
    array a1;
    array a2(2,5);
    array a3(101,10);
    cout<<a3.getelement(101)<<endl;
    cout<<a2.getelement(2);

}