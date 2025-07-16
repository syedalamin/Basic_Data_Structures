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
  Node *newnode = new Node(val);
  if (head == NULL)
  {
    head = newnode;
    tail = newnode;
  }
  tail->next = newnode;
  tail = tail->next;
}

int size_linked_list(Node *head)
{
  Node *temp = head;
  int count = 0;
  while (temp != NULL)
  {
    count++;
    temp = temp->next;
  }
  return count;
}
void printing_linked_list(Node *head)
{
  Node *temp = head;
  while (temp != NULL)
  {
    cout << temp->val << " ";
    temp = temp->next;
  }
  cout << endl;
}
int max_find(Node *head)
{
  int maxs = INT_MIN;
  Node *temp = head;
  while (temp != NULL)
  {
    // if (maxs < temp->val)
    // {
    // max = temp->val; // manual
    // }
    maxs = max(maxs, temp->val);
    temp = temp->next;
  }

  return maxs;
}

int main()
{
  Node *head = NULL;
  Node *tail = NULL;

  int val;

  while (cin >> val && val != -1)
  {
    inserted_at_tail(head, tail, val);
  }

  cout << max_find(head) << endl;
  // printing_linked_list(head);
  return 0;
}
