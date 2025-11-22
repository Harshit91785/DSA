#include<iostream>
#include<math.h>
using namespace std ;

int main()
{
    int arr[4]={1,2,3,4};
    int ans[4];
    int i;
    int count =0,mul=1; 
    for(i=0;i<4;i++)
    {
        if(arr[i]!=0)
        {
            mul=mul*arr[i];
        }
        else{
            count=count+1;

        }
    }

    for(i=0;i<4;i++)
    {
        if(count>=1)
        {
            ans[i]=0;
        }
        else if(count==1)
        {
            if(arr[i]!=0)
            {
                ans[i]=0;
            }
            else
            ans[i]=mul;
        }
        else{
            ans[i]=mul/arr[i];
        }
    }
    for(i=0;i<4;i++)
    {
        cout<<ans[i]<<endl;
    }
}