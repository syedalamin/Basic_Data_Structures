#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
  int val;
  Node *left;
  Node *right;
  Node(int val)
  {
    this->val = val;
    this->left = NULL;
    this->right = NULL;
  }
};

Node *input_tree()
{
  int val;
  cin >> val;
  Node *root;
  if (val == -1)
  {
    root = NULL;
  }
  else
  {
    root = new Node(val);
  }
  queue<Node *> q;
  if (root != NULL)
    q.push(root);

  while (!q.empty())
  {
    Node *f = q.front();
    q.pop();

    int l, r;
    cin >> l >> r;

    Node *myLeft;
    Node *myRight;

    if (l == -1)
    {
      myLeft = NULL;
    }
    else
    {
      myLeft = new Node(l);
    }

    if (r == -1)
    {
      myRight = NULL;
    }
    else
    {
      myRight = new Node(r);
    }

    f->left = myLeft;
    f->right = myRight;

    if (f->left)
    {
      q.push(f->left);
    }
    if (f->right)
    {
      q.push(f->right);
    }
  }
  return root;
}

int count_leaf_nods(Node *root)
{
  if (root == NULL)
  {
    return 0;
  }

  if (root->left == NULL && root->right == NULL)
    return 1;

  int l = count_leaf_nods(root->left);
  int r = count_leaf_nods(root->right);

  return l + r;
}
int main()
{
  Node *root = input_tree();

  cout << count_leaf_nods(root) << endl;
  return 0;
}
