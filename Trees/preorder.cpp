// recursive approach 
#include<iostream>
using namespace std;

struct node{
  int data;
  struct node*left;
  struct node*right;
}
void preOrder(node *curr , vector<int> &preorder)
{
  if(cur==NULL)
    return;
  preorder.push_back(curr->data);
  preOrder(curr->left , preorder);
  preOrder(curr->right , preorder);
}

struct node *newNode(int data)
{
 struct node* node= (struct node*)malloc(sizeof(struct node))
   node->data = data;
  node->left = NULL;
  node->right=NULL;
  return (node);
  
}
int main()
{
  struct node* root = node(1);
  root->left=node(2);
  root->right = node(3);
  root->left->right = node(4);
  vector<int> preorder;
  preOrder(root , preorder);
  cout<<"the preorder traversal is ";
  for(int i =0;i<preorder.size();i++)
  {
    cout<<preorder[i]<<" ";
  }
}
//iterative approach 
#include<iostream>
using namespace std;

struct node{
  int data;
  struct node*left;
  struct node*right;
}
vector<int> preOrder(node*curr)
{
  vector<int> preorder;
  if(curr==NULL)
    return preorder;
  //stack creation 
  stack<node *>s;
  s.push(curr);
  while(!s.empty)
  {
    node *topnode = s.top();
    preorder.push_back(topnode->data);
    s.pop();
    if(topnode->right != NULL)
    {
      s.push(topnode->right);
    }
    if(topnode->left != NULL)
    {
      s.push(topnode->left);
    }
    
  }
  return preorder; 
}
// data
struct node *newNode(int data)
{
 struct node* node= (struct node*)malloc(sizeof(struct node))
   node->data = data;
  node->left = NULL;
  node->right=NULL;
  return (node);
}

//main
int main()
{
  struct node* root = node(1);
  root->left=node(2);
  root->right = node(3);
  root->left->right = node(4);
  vector<int> preorder;
  preOrder(root , preorder);
  cout<<"the preorder traversal is ";
  for(int i =0;i<preorder.size();i++)
  {
    cout<<preorder[i]<<" ";
  }
}
