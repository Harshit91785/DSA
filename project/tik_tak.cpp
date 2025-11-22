#include<iostream>
using namespace std ;
void frontview()
{
  int i,n=0,j;
    cout<<"welcome to the game tik tak ."<<endl;
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            cout<<n <<"  ";
            n=n+1;
        }
        cout<<endl;
    }
}
void win()
{
    if(arr[i][j]==arr[i][j+1]==arr[i][j+2]=0)
    {
        cout<<"1st player win ";

    }
    else if(arr[i][j]==arr[i][j+1]==arr[i][j+2]=='x')
    {
        cout<<"2nd player wins";

    }

    else 
    cout<<"match draw";

}
int main()
{
  
    
}
