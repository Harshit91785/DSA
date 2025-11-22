#include<iostream>
#include<math.h>
using namespace std ;

int main()
{
    int a[7]={0,4,11,14,3,2,1};
    int start=0,end=6,mid,ans;
    
    while(start<=end)
    { 
        mid=(start+end)/2;
        if(a[mid]>a[mid-1])
        {
            if(a[mid+1]<a[mid])
            {
                ans =mid;
                
                cout <<"hello";    
                break;    
            }
            else{
                start =mid +1;
            }
            
        }
        else
       {
                end=mid-1;
                
       }
        
    }
    
    cout<<"ans  "<<ans<<"  ";
}