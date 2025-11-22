#include<iostream>
using namespace std;
int size =5 ,element=3,a=0;
int arr[5]={1,2,3};
void insertatend(int item )
{
    if(size==element)
    {
        cout<<"array is filled and insertion not possible ";
    }
    else
    {
        arr[element]=item;
        element=element+1;
        a=a+1;
    }
}
void deleteatend()
{
    if(element==0)
    {
        cout<<"array already empty";
    }
    else
    {
        for(int i=element-a;i<size;i++)
        {
            arr[i]=arr[i+1];
        }
        
        element--;

    }
}
void displayarr()
{
    for(int i=0;i<element;i++)
    {
        cout<<arr[i]<<endl;
    }
}
int main()
{
    insertatend(5);
    insertatend(4);
    displayarr();
    deleteatend();
    displayarr();
    
}