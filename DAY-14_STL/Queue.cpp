#include <iostream>
#include <queue>
using namespace std;

// Print the queue
void show(queue<int> gq)
{
    queue<int> g = gq;

    while (!g.empty()) {
        cout << '\t' << g.front();
        g.pop();
    }

    cout << '\n';
}

int main()
{
    queue<int> que;

    que.push(11);
    que.push(22);
    que.push(33);

    cout << "The queue is : ";
    show(que);

    cout << "\nque.size() : " << que.size();
    cout << "\nque.front() : " << que.front();
    cout << "\nque.back() : " << que.back();

    cout << "\n\nque.pop() : ";
    que.pop();

    show(que);

    return 0;
}