#include<iostream>
using namespace std;
 int main()
 {
    int num[5]={-1,1,-3,-3,0};
    int ans[5];
    int multi=1,i;
    for(i=0;i<5;i++)
    { 
        if(num[i]!=0)
        multi=multi*num[i];

    }
    cout<<"hello";
    for(i=0;i<5;i++)
    {
        if(num[i]==0)
        {
            ans[i]=multi;
        }
        else{
            ans[i]=multi/num[i];
        }
    }
    for(i=0;i<5;i++)
    {
        cout<<ans[i]<<endl;
    }

 }