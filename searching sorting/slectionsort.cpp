#include<iostream>
using namespace std;

void selectionsort(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        int min =i;

        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[min])
            {
                min=j;
            }
        }
        if(min!=i)
        {
            int remp=arr[i];
            arr[i]=arr[min];
            arr[min]=remp;

        }
    }

}
int main()
{
    int arr[5]={1,4,3,2,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"original array ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<"  ";

    }
    cout<<endl;

    selectionsort(arr,n);


    cout<<"sorted array ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<"  ";
        
    }
    cout<<endl;

    return 0;
}