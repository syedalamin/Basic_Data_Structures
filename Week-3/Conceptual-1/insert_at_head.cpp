#include <bits/stdc++.h>
using namespace std;

class ListNode
{
public:
  int val;
  ListNode *next;
  ListNode *prev;
  ListNode(int val)
  {
    this->val = val;
    this->next = NULL;
    this->prev = NULL;
  }
};

void insert_At_Head(ListNode *&head, ListNode *&tail, int val)
{
  ListNode *newNode = new ListNode(val);
  if (head == NULL)
  {
    head = newNode;
    tail = newNode;
    return;
  }

  newNode->next = head;
  head->prev = newNode;
  head = newNode;
}

void print_linked_list_forword(ListNode *head)
{

  ListNode *temp = head;
  while (temp != NULL)
  {

    cout << temp->val << " ";
    temp = temp->next;
  }
  cout << endl;
}

int main()
{
  ListNode *head = NULL;
  ListNode *tail = NULL;
  int val;

  while (cin >> val)
  {
    if (val == -1)
    {
      break;
    }
    insert_At_Head(head, tail, val);
  }

  print_linked_list_forword(head);
  return 0;
}
