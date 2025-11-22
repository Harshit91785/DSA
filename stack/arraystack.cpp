#include<iostream>
using namespace std;
class stack
{
   private:
   int arr[5];
   int idx;
   public:
   stack()
   {
    idx=-1;
   }
   void push(int val)
   {
    if(idx==4){
        cout<<"stack is full";
        return;
    }
    idx++;
    arr[idx]=val;
   }

   void pop(){
    if(idx==0){
        cout<<"stack is empty ";
        return;
    }
    idx--;
   }
   int top()
   {
    cout<<"top function called ";
    if(idx==0){
        cout<<"stack empty ";
        return -1;
    }
    int a=arr[idx];
    return a;
   }
};

int main()
{
    stack st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.pop();
    st.push(80);
    st.top();
    return 0;
}