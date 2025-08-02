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
int cnt = 0;

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
    cnt++;
  }

  queue<Node *> q;

  if (root != NULL)
    q.push(root);

  while (!q.empty())
  {

    Node *p = q.front();
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
      cnt++;
    }
    if (r == -1)
    {
      myRight = NULL;
    }
    else
    {
      myRight = new Node(r);
      cnt++;
    }

    p->left = myLeft;
    p->right = myRight;

    if (p->left)
    {
      q.push(p->left);
    }
    if (p->right)
    {
      q.push(p->right);
    }
  }
  return root;
}

int max_depth(Node *root)
{
  if (root == NULL)
    return 0;

  if (root->left == NULL && root->right == NULL)
    return 1;

  int l_depth = max_depth(root->left);
  int r_depth = max_depth(root->right);

  return max(l_depth, r_depth) + 1;
}

int main()
{
  Node *root = input_tree();

  int mx_depth = max_depth(root);

  int perfect_tree = 1;

  for (int i = 0; i < mx_depth; i++)
  {
    perfect_tree *= 2;
  }

  int tree = perfect_tree - 1;

  if (cnt == tree)
  {
    cout << "YES" << endl;
  }
  else
  {
    cout << "NO" << endl;
  }

  return 0;
}