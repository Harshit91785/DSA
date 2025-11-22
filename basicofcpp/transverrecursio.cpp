#include<iostream>
using namespace std ;

void arr(int a[],int i,int s)
{ 
    if(i==s)
    {
        return;
    }
     
        cout<<a[i]<<"  ";
     arr(a,i+1,s);
     return ;
}

int main()
{ 
    int array[5]={1,2,3,4,5};
    cout<<"elements are";
    arr(array,0,5);

}