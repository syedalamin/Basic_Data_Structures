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

void level_order_nodes(Node *root, int targetLevel)
{
  if (root == NULL)
  {
    cout << "Invalid" << endl;
    return;
  }

  queue<pair<Node *, int>> q;
  q.push({root, 0});
  bool isFoundLevel = false;

  while (!q.empty())
  {
    pair<Node *, int> f = q.front();
    q.pop();

    Node *node = f.first;
    int level = f.second;

    if (level == targetLevel)
    {
      cout << node->val << " ";
      isFoundLevel = true;
    }

    if (node->left)
    {
      q.push({node->left, level + 1});
    }
    if (node->right)
    {
      q.push({node->right, level + 1});
    }
  }

  if (!isFoundLevel)
  {
    cout << "Invalid";
    return;
  }
}

int main()
{
  Node *root = input_tree();

  int target_level;
  cin >> target_level;

    level_order_nodes(root, target_level);

  return 0;
}
