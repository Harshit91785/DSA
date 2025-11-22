#include<iostream>
#include<stack>
#include<string>
using namespace std;
bool balanced(string s)
{
    if(s.size() %2 != 0) return false;
    stack<char> st;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='(') st.push(s[i]);
        else{
            if(s.size()==0) return false;
            else st.pop();
        }
        if(s.size() ==0) return true;
        else return false ;
    }
}
int main()
{
    string s;
    s="(()";
    cout<<balanced(s);
    return 0;
}