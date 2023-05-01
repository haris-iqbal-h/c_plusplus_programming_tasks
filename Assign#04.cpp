#include <iostream>

using namespace std;

class Queue {
    private:
        int items[50];
        int front, rear;

    public:
        Queue() {
            front = -1;
            rear = -1;
        }

        bool isEmpty() {
            if (front == -1 && rear == -1)
                return true;
            else
                return false;
        }

        bool isFull() {
            if (rear == MAX_SIZE - 1)
                return true;
            else
                return false;
        }

        void enqueue(int value) {
            if (isFull()) {
                cout << "Queue is full" << endl;
                return;
            }
            else if (isEmpty()) {
                front = 0;
                rear = 0;
            }
            else {
                rear++;
            }
            items[rear] = value;
        }

        void dequeue() {
            if (isEmpty()) {
                cout << "Queue is empty" << endl;
                return;
            }
            else if (front == rear) {
                front = -1;
                rear = -1;
            }
            else {
                front++;
            }
        }

        void display() {
            if (isEmpty()) {
                cout << "Queue is empty" << endl;
                return;
            }
            for (int i = front; i <= rear; i++)
                cout << items[i] << " ";
            cout << endl;
        }
};

int main() {
    Queue q;

    q.enqueue(13);
    q.enqueue(45);
    q.enqueue(323);
    q.display();
    q.dequeue();
    q.dequeue();
    q.display();

    return 0;
}
