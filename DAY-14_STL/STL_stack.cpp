#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> stack;

    stack.push(21);  // The values pushed in the stack should be of the same data type
                     // which is written during declaration of stack
    stack.push(22);
    stack.push(24);
    stack.push(25);

    cout << stack.top()<< endl;

    int num = 0;

    stack.push(num);   // [21,22,24,25,0]

    stack.pop();       // [21,22,24,25]
    stack.pop();       // [21,22,24]

    while (!stack.empty())
    {
        cout<< stack.top()<<" "; // 24, 22, 21
        stack.pop();
    }
    return 0;
}