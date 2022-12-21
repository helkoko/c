#pragma once
#include <iostream>
#include <string>
#include<queue>
#include"bitree.cpp"
using namespace std;

class Node{
 public:
     int val;
     Node *left, *right;
     Node(){right = NULL; left = NULL;}
 };

Node* build(Node* root, int val){
       if(root == NULL){
             root = new Node();
             root->val = val;
             return root;
       }
       if(val < root->val) root->left = build(root->left, val);
      else if(val > root->val) root->right = build(root->right, val);
      return root;
}
void levelOrder(Node* root){ //层序遍历
     queue<Node*>p;
     p.push(root);
     while(!p.empty()){
         Node*temp=p.front();
         cout<<temp->val<<" ";
         p.pop();
         if(temp->left)p.push(temp->left);
         if(temp->right)p.push(temp->right);
         
     }
 }
 
 
 void btdepth(Node* T){ //求树深度
     if(T==NULL)return 0;
     int front=-1,rear=-1;
     int last=0,level=0;
     arrqueue* q=new arrqueue(128);
     
     
     
     
     
     
     
     
     
     
     
 }
 
 

int main()
{
    Node *root = NULL;
    int t[] = {5,4,6,3,7};
    for(int i = 0; i < 5; i++) root = build(root, t[i]);
    levelOrder(root);
	return 0;
} 
