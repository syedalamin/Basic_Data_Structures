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

void delete_At_Head(ListNode *&head, ListNode *&tail)
{
  if (head == NULL)
  {
    return;
  }
  ListNode *deleteNode = head;
  head = head->next;
  delete deleteNode;

  if (head == NULL)
  {
    tail = NULL;
    return;
  }
  head->prev = NULL;
}
void delete_At_Tail(ListNode *&head, ListNode *&tail)
{
  ListNode *deleteNode = tail;
  tail = tail->prev;
  delete deleteNode;

  if (tail == NULL)
  {
    head = NULL;
    return;
  }
  tail->next = NULL;
}

void delete_At_Any(ListNode *head, int idx)
{
  ListNode *temp = head;

  for (int i = 1; i < idx; i++)
  {
    temp = temp->next;
  }
  ListNode *deleteNode = temp->next;
  temp->next = temp->next->next;
  temp->next->prev = temp;
  delete deleteNode;
}

void insert_At_tail(ListNode *&head, ListNode *&tail, int val)
{
  ListNode *newNode = new ListNode(val);

  if (head == NULL)
  {
    head = newNode;
    tail = newNode;
    return;
  }

  tail->next = newNode;
  newNode->prev = tail;

  tail = newNode;
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
void print_linked_list_backword(ListNode *tail)
{
  ListNode *temp = tail;

  while (temp != NULL)
  {
    cout << temp->val << " ";
    temp = temp->prev;
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
    else
    {

      insert_At_tail(head, tail, val);
    }
  }
  // delete_At_Head(head, tail);
  // delete_At_Tail(head, tail);
  // delete_At_Tail(head, tail);
  delete_At_Any(head, 2);
  print_linked_list_forword(head);

  return 0;
}
