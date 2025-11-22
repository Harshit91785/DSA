#include <iostream>
using namespace std;

#define SIZE 5   // maximum size of the queue

class Queue {
    int items[SIZE];
    int front, rear;

public:
    Queue() {
        front = -1;
        rear = -1;
    }

    // Enter elements in queue
    void enqueue(int element) {
        if (rear == SIZE - 1)
            cout << "Queue is Full\n";
        else {
            if (front == -1) front = 0;
            items[++rear] = element;
            cout << element << " inserted into queue\n";
        }
    }

    // deleting element from queue 
    void dequeue() {
        if (front == -1 || front > rear)
            cout << "Queue is Empty\n";
        else {
            cout << items[front] << " removed from queue\n";
            front++;
        }
    }

    // Display queue
    void display() {
        if (front == -1 || front > rear)
            cout << "Queue is Empty\n";
        else {
            cout << "Queue elements are: ";
            for (int i = front; i <= rear; i++)
                cout << items[i] << " ";
            cout << endl;
        }
    }
};

int main() {
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.display();
    q.dequeue();
    q.display();
    return 0;
}