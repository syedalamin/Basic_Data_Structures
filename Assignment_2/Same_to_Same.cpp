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

void insert_at_tail(Node *&head, Node *&tail, int val)
{
  Node *newNode = new Node(val);
  Node *temp = head;
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

int linked_list_size(Node *head)
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

void print_linked_list(Node *head)
{
  Node *temp = head;

  while (temp != NULL)
  {
    cout << temp->val << " ";
    temp = temp->next;
  }

  cout << endl;
}

int main()
{
  Node *head1 = NULL;
  Node *tail1 = NULL;
  int val;

  while (true)
  {
    cin >> val;
    if (val == -1)
    {
      break;
    }
    insert_at_tail(head1, tail1, val);
  }

  int size1 = linked_list_size(head1);

  Node *head2 = NULL;
  Node *tail2 = NULL;

  while (true)
  {
    cin >> val;
    if (val == -1)
    {
      break;
    }
    insert_at_tail(head2, tail2, val);
  }

  int size2 = linked_list_size(head2);

  if (size1 != size2)
  {
    cout << "NO" << endl;
  }
  else
  {
    Node *temp1 = head1;
    Node *temp2 = head2;
    bool flag = true;

    while (temp1 != NULL || temp2 != NULL)
    {
      if (temp1->val != temp2->val)
      {
        flag = false;
        break;
      }
      else
      {
        temp1 = temp1->next;
        temp2 = temp2->next;
      }
    }

    if (flag == true)
    {
      cout << "YES" << endl;
    }
    else
    {
      cout << "NO" << endl;
    }
  }

  return 0;
}
