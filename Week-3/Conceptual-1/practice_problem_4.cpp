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

  int q;
  cin >> q;

  while (q--)
  {
    int idx, val;
    cin >> idx >> val;
    int sz = count_size(head);

    if (idx < 0 || idx > sz)
    {
      cout << "Invalid" << endl;
    }
    else if (idx == 0)
    {
      insert_At_Head(head, tail, val);
      print_linked_list_forword(head);
      print_linked_list_backword(tail);
    }
    else if (idx == sz)
    {
      insert_At_tail(head, tail, val);
      print_linked_list_forword(head);
      print_linked_list_backword(tail);
    }
    else
    {
      insert_At_any_post(head, tail, idx, val);
      print_linked_list_forword(head);
      print_linked_list_backword(tail);
    }
  }

  return 0;
}
