#include<iostream>
using namespace std;

class Node
{
    public: // declaratio
    int data;
    Node* left;
    Node* right;

    Node(int value) // constructor
    {
        data = value;
        left = NULL;
        right = NULL;
    }
};
int main()
{
    Node* root = new Node(10);

    root-> left = new Node(20);
    root-> right = new Node(30);

    root->left->left = new Node(40);
    root->left->right = new Node(50);

    cout<<"Root Node: "<<root->data<<endl;
    return 0;
}