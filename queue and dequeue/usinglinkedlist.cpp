#include<iostream>
using namespace std ;
class node{
    public:
    int val;
    node* next;
    node(){
        val=0;
        next=nullptr;
    }
};
class  queue{
    public:
    node *head;
    node *tail;
    int size;
    queue()
    {
        head = nullptr;
        tail= nullptr;
        size=0;
    }
    void enqueue(int v)
    {
        
        node *newnode=new node();
        newnode->val=v;
        newnode->next=nullptr;
        if(head==nullptr){
            newnode=head;
        }
        tail->next=newnode;
        newnode=tail;
        size++;
    }

    void dequeue()
    {
        if(size==0){
            cout<<"is empty ";
            return ;
        }
        node *temp =head ;
        head=head->next;
        delete temp;
    }
    void display()
    {
        node *temp= head;
        while(temp!=0)
        {
            cout<<temp->val<<"  ";
            temp=temp->next;
        }
    }

};
int main()
{
    queue q1;
    q1.enqueue(10);
    cout<<"hello";
    q1.enqueue(20);
    q1.enqueue(30);
    q1.enqueue(40);
    q1.display();

}