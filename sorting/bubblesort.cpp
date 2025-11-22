#include<iostream>
using namespace std;
int main()
{
     int n=6 ;
    int arr[5]={1,0,5,3,2};
    for(int i=0;i<n-1;i++)
    {
        bool flag = true;
        for(int j=0;j<n-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                flag =false ;
            }
        }
        if(flag ==true )
        {
            break;
        }
    }

    for(int i=0;i<n-1;i++)
    {
        cout<<arr[i]<<"  ";
    }
}