#include<iostream>
#include<stack>
#include<string>
using namespace std;
string remcon(string s)
{
    stack<char> st;
    st.push(s[0]);
    for(int i=0;i<s.size();i++)
    { 
        if(s[i]!=st.top()) st.push(s[i]);
    }
    s="  ";
    while(st.size()>0)
    {
        s=s+st.top();
        st.pop();
    }  
      
    return s;
}
int main()
{
    string s;
    s="aaaabacb";
    cout<<remcon(s);
    return 0;
}