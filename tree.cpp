#include<bits/stdc++.h>
using namespace std;


class Node{

    public:
    int data;
    Node * left;
    Node* right;

    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};


int main(){

    Node * root = new Node(2);
    root->left = new Node(3);
    root->right = new Node(9);
    root->left->right = new Node(10);

    return 0;
}