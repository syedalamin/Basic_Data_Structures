#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
  int val;
  Node *next;
  Node(int val)
  {
    this->val = val;
    this->next = NULL;
  }
};

void inserted_at_tail(Node *&head, Node *&tail, int val)
{
  Node *newNode = new Node(val);
  if (head == NULL)
  {
    head = newNode;
    tail = newNode;
  }
  else
  {
    tail->next = newNode;
    tail = tail->next;
  }
}

void print_linked_list(Node *head)
{
  Node *temp = head;

  while (temp != NULL)
  {
    cout << temp->val << " ";
    temp = temp->next;
  }
}

void searching_tar_val(Node *head, int tar_val)
{
  Node *temp = head;
  int idx = 0;
  int flag = false;

  while (temp != NULL)
  {
    if (temp->val == tar_val)
    {
      flag = true;
      break;
    }
    temp = temp->next;
    idx++;
  }

  if (flag == true)
  {
    cout << idx << endl;
  }
  else
  {
    cout << -1 << endl;
  }
}
int main()
{
  int t;
  cin >> t;
  while (t--)
  {

    Node *head = NULL;
    Node *tail = NULL;
    int val;

    while (true)
    {
      cin >> val;
      if (val == -1)
      {
        break;
      }
      inserted_at_tail(head, tail, val);
    }
    int tar_val;
    cin >> tar_val;

    searching_tar_val(head, tar_val);
  }

  // print_linked_list(head);
  return 0;
}
