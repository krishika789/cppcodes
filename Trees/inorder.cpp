// recursive approach
#include<iostream>
using namespace std;

struct node{
  int data;
  struct node *left;
  struct node *right;
  
}

void inOrder(node *curr , vector<int> inorder)
{
  if(curr == NULL)
    return;
  inOrder(curr->left ,inorder);
  inorder.push_back(curr->data);
  inOrder(curr->right, inorder);
  
}

struct node *Newnode(int data)
{
  struct node *node = (struct node*)malloc(sizeof(struct node));
  node->data=data;
  node->left =NULL;
  node->right=NULL;
  return (node);
}
int main()
{
  struct node *root = NewNode(1);
  root->left = NewNode(2);
  
  vector<int> inorder;
  inOrder(root , inorder);
  cout<<"The inorder traversal is ";
  for(int i =0;i<inorder.size();i++)
  {
    cout<<inorder[i]<<" ";
  }
  return 0;
}
// iterative approach 
#include<iostream>
using namespace std;

struct node{
  int data;
  struct node *left;
  struct node *right;
}
vector <int> inOrder(node *curr)
{
  vector<int> inorder;
  if(curr == NULL) return inorder;
    
  stack<node *> s;
  while(true)
  {
    if(curr !=NULL)
    {
      s.push(curr);
      curr = curr->left;
    }
    else
    {
      if(s.empty()) break;
      
      node *topNode = s.top();
      inorder.push_back(curr->data);
      s.pop();
      curr= curr->right ;
      
    }
  }
  return inorder;
}
struct node *Newnode(int data)
{
  struct node *node = (struct node*)malloc(sizeof(struct node));
  node->data=data;
  node->left =NULL;
  node->right=NULL;
  return (node);
}
int main()
{
  struct node *root = NewNode(1);
  root->left = NewNode(2);
  
  vector<int> inorder;
  inOrder(root , inorder);
  cout<<"The inorder traversal is ";
  for(int i =0;i<inorder.size();i++)
  {
    cout<<inorder[i]<<" ";
  }
  return 0;
}
