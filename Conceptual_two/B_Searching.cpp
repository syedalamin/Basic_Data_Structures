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
void inserted_at_head(Node *&head, Node *&tail, int val)
{
  Node *newnode = new Node(val);
  if (head == NULL)
  {
    head = newnode;
    tail = newnode;
  }
  newnode->next = head;
  head = newnode;
}
void inserted_at_tail(Node *&head, Node *&tail, int val)
{
  Node *newnode = new Node(val);
  if (head == NULL)
  {
    head = newnode;
    tail = newnode;
  }
  tail->next = newnode;
  tail = tail->next;
}
void printing_linked_list(Node *head)
{
  Node *temp = head;
  while (temp != NULL)
  {
    cout << temp->val << " ";
    temp = temp->next;
  }
}
int main()
{
  Node *head = NULL;
  Node *tail = NULL;

  int n;
  cin >> n;

  while (n--)
  {
    int val;
    cin >> val;
    inserted_at_tail(head, tail, val);
  }
  // printing_linked_list(head);

  int tar_val;
  cin >> tar_val;

  int indx = 0;
  bool flag = false;
  Node *temp = head;

  while (temp != NULL)
  {
    if (temp->val == tar_val)
    {
      cout << indx << endl;
      flag = true;
      break;
    }

    temp = temp->next;
    indx++;
  }

  if (flag == false)
  {

    cout << -1 << endl;
  }

  return 0;
}
