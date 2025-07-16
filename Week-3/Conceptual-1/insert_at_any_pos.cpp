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

int count_size(ListNode *head)
{
  int cnt = 0;
  ListNode *temp = head;

  while (temp != NULL)
  {
    cnt++;
    temp = temp->next;
  }
  return cnt;
}
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

void insert_At_any_post(ListNode *&head, ListNode *&tail, int idx, int val)
{
  ListNode *newNode = new ListNode(val);
  ListNode *temp = head;
  int sz = count_size(head);

  if (idx < 0 || idx > sz)
  {
    cout << "Invalid Index" << endl;
  }

  if (idx == 0)
  {
    insert_At_Head(head, tail, val);
  }
  else if (idx == sz)
  {
    insert_At_tail(head, tail, val);
  }

  else
  {
    for (int i = 1; i < idx; i++)
    {
      temp = temp->next;
    }
    newNode->next = temp->next;
    if (temp->next != NULL)
    {
      temp->next->prev = newNode;
    }
    temp->next = newNode;
    newNode->prev = temp;
  }
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
    else
    {

      insert_At_tail(head, tail, val);
    }
  }

  int idx;
  cin >> idx >> val;

  insert_At_any_post(head, tail, idx, val);
  print_linked_list_forword(head);

  return 0;
}
