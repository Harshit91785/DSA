//using STACK 
#include<iostream>
#include<stack>
using namespace std;
int main()
{
    int arr[8]={3,1,2,7,6,2,3,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    int nge[n];
stack<int> st;
nge[0]=-1;
st.push(arr[0]);
for(int i=1;i<=n-1;i++)
{
    while(st.size()>0 && st.top()<=arr[i]){
        st.pop();
    }
    //mark ans
    if(st.size()==0) nge[i]=-1;
    else nge[i]=st.top();
    //push ele
    st.push(arr[i]);
}
//cout<<"hello";
for(int j=0;j<n;j++)
{
    cout<<nge[j]<<"  ";
}
cout<<endl;
}