#include<iostream>
using namespace std ;
int main()
{
    int n=7 ;
    int arr[n]={2,5,1,8,4,0,6,7};
  
    int i=0;
    while(i<n)
    {
        int correct=arr[i]-1;
        if(i==correct)
        {
            i++;
        }
        else
        {
            swap(arr[i],arr[correct]);
        }
    }
    return 0;


}