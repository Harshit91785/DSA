#include<iostream>
using namespace std;

class queue{
    public:
    int f,b;
    int arr[5];
    queue(){
        f=0;
        b=0;
    }

    void enqueue(int val)
    {
        if(b==5) {
            cout<<"queue is full";
            return ;
        }
        arr[b]=val;
        b++;
    }

    void dequeue()
    {
        if(f-b==0){
            cout<<"is empty ";
            return ;
        }
        f++;
    }
    int front()
    {
        if(f-b==0) {
            cout<<"is empty";
            return 0 ;
        }
        return arr[f];
    }
    int size()
    {
        return b-f;
    }
};
int main()
{
    queue q1;
    q1.enqueue(10);
    q1.enqueue(20);
    q1.enqueue(30);
    q1.front();
    q1.enqueue(40);
    q1.enqueue(50);
    q1.enqueue(60);
    q1.size();
    return 0;
}