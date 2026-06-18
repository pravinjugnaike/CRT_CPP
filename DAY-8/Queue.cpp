#include <iostream>
using namespace std;

class Queue
{
private:
    int *arr;
    int front;
    int rear;
    int capacity;

public:
    Queue(int size)
    {
        capacity = size;
        arr = new int[capacity];
        front = 0;
        rear = -1;
    }

    bool isEmpty()
    {
        return rear < front;
    }

    bool isFull()
    {
        return rear == capacity - 1;
    }

    void enqueue(int value)
    {
        if (isFull())
        {
            cout << "Queue Overflow!" << endl;
            return;
        }

        arr[++rear] = value;
        cout << value << " inserted into queue" << endl;
    }

    void dequeue()
    {
        if (isEmpty())
        {
            cout << "Queue Underflow!" << endl;
            return;
        }

        cout << arr[front] << " removed from queue" << endl;
        front++;
    }

    void frontElement()
    {
        if (isEmpty())
        {
            cout << "Queue is Empty" << endl;
            return;
        }

        cout << "Front Element: " << arr[front] << endl;
    }

    void display()
    {
        if (isEmpty())
        {
            cout << "Queue is Empty" << endl;
            return;
        }

        cout << "Queue Elements: ";

        for (int i = front; i <= rear; i++)
        {
            cout << arr[i] << " ";
        }

        cout << endl;
    }

    void deleteQueue()
    {
        delete[] arr;
        arr = nullptr;
        front = 0;
        rear = -1;
        capacity = 0;

        cout << "Queue Deleted Successfully" << endl;
    }

    ~Queue()
    {
        if (arr != nullptr)
        {
            delete[] arr;
        }
    }
};

int main()
{
    Queue q(5);

    cout << "Queue Created with Capacity 5" << endl;

    while (true)
    {
        int ch;

        cout << "\n===== MENU =====" << endl;
        cout << "1. Enqueue" << endl;
        cout << "2. Dequeue" << endl;
        cout << "3. Display Queue" << endl;
        cout << "4. Front Element" << endl;
        cout << "5. Delete Queue" << endl;
        cout << "6. Exit" << endl;
        cout << "Enter Your Choice: ";
        cin >> ch;

        switch (ch)
        {
        case 1:
        {
            int val;
            cout << "Enter Value: ";
            cin >> val;
            q.enqueue(val);
            break;
        }

        case 2:
            q.dequeue();
            break;

        case 3:
            q.display();
            break;

        case 4:
            q.frontElement();
            break;

        case 5:
            q.deleteQueue();
            break;

        case 6:
            cout << "Exiting..." << endl;
            return 0;

        default:
            cout << "Invalid Choice!" << endl;
        }
    }

    return 0;
}