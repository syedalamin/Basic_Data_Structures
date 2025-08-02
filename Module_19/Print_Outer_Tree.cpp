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
    }
    if (r == -1)
    {
      myRight = NULL;
    }
    else
    {
      myRight = new Node(r);
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

void traverse_left(Node *root)
{
  if (root == NULL)
    return;
  stack<int> my_st;

  Node *current = root->left;
  while (current != NULL)
  {

    if (current->left)
    {
      my_st.push(current->val);
      current = current->left;
    }
    else
    {
      my_st.push(current->val);
      current = current->right;
    }
  }

  while (!my_st.empty())
  {

    cout << my_st.top() << " ";
    my_st.pop();
  }
}

void traverse_right(Node *root)
{
  if (root == NULL)
    return;
  queue<int> my_q;

  Node *current = root->right;
  while (current != NULL)
  {

    if (current->right)
    {
      my_q.push(current->val);
      current = current->right;
    }
    else
    {
      my_q.push(current->val);
      current = current->left;
    }
  }

  while (!my_q.empty())
  {
    cout << my_q.front() << " ";
    my_q.pop();
  }
}

int main()
{
  Node *root = input_tree();

  traverse_left(root);
  if (root)
    cout << root->val << " ";
  traverse_right(root);

  return 0;
}
