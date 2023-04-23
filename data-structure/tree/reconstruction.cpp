#include<bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *left, *right;
    Node(int val){
        data = val;
        left = nullptr;
        right = nullptr;
    }
};

Node* build(int i1, int j1, int i2, int j2, vector<int>& inorder, vector<int>& preorder, unordered_map<int,int>& inorderMap){
    if(i1>j1 || i2>j2) return nullptr;

    Node* root = new Node(preorder[i1]);
    int i = inorderMap[preorder[i1]];

    root-> left = build(i1+1, i1+i-i2, i2, i-1, inorder, preorder, inorderMap);
    root-> right = build(i1+i-i2+1, j1, i+1, j2, inorder, preorder, inorderMap);
    return root;
}

void inOrder(Node *root){
    if(!root) return;
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}

int main(){
    vector<int> preorder;
    vector<int> inorder;
    int n, t;
    cin>>n;
    cout<<"Enter Preorder elements :- /n";
    for(int i = 0;i<n;i++){
        cin>>t;
        preorder.push_back(t);
    }
    cout<<"Enter Ineorder elements :- /n";
    for(int i = 0;i<n;i++){
        cin>>t;
        inorder.push_back(t);
    }

    unordered_map<int, int> inorderMap;
    for(int i = 0;i<n;i++){
        inorderMap[inorder[i]] = i;
    }

    Node* root = build(0, n-1, 0, n-1, inorder, preorder, inorderMap);
    inOrder(root);
}
