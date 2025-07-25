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

class MyStack
{
public:
  ListNode *head = NULL;
  ListNode *tail = NULL;
  int sz = 0;

  void push(int val)
  {
    ListNode *newNode = new ListNode(val);
    if (head == NULL)
    {
      head = newNode;
      tail = newNode;
    }
    else
    {
      tail->next = newNode;
      newNode->prev = tail;
      tail = newNode;
    }
    sz++;
  }
  void pop()
  {
    if (tail == NULL)
      return;
    ListNode *deletedNode = tail;
    tail = tail->prev;
    delete deletedNode;
    if (tail == NULL)
    {
      head = NULL;
    }
    else
    {
      tail->next = NULL;
    }
    sz--;
  }

  int top()
  {
    return tail->val;
  }
  int size()
  {
    return sz;
  }
  bool empty()
  {
    return head == NULL;
  }
};

class MyQueue
{
public:
  ListNode *head = NULL;
  ListNode *tail = NULL;
  int sz = 0;

  void push(int val)
  {
    ListNode *newNode = new ListNode(val);
    if (head == NULL)
    {
      head = newNode;
      tail = newNode;
    }
    else
    {
      tail->next = newNode;
      newNode->prev = tail;
      tail = newNode;
    }
    sz++;
  }
  void pop()
  {
    if (head == NULL)
      return;
    ListNode *deletedNode = head;
    head = head->next;
    delete deletedNode;
    if (head == NULL)
    {
      tail = NULL;
    }
    else
    {
      head->prev = NULL;
    }
    sz--;
  }

  int front()
  {

    return head->val;
  }
  int size()
  {
    return sz;
  }
  bool empty()
  {
    return head == NULL;
  }
};

int main()
{
  int n, m;
  cin >> n >> m;

  MyStack a;
  MyQueue b;

  for (int i = 0; i < n; i++)
  {
    int val;
    cin >> val;
    a.push(val);
  }
  for (int i = 0; i < m; i++)
  {
    int val;
    cin >> val;
    b.push(val);
  }

  if (a.size() != b.size())
  {
    cout << "NO" << endl;
  }
  else
  {
    bool flag = true;
    while (!a.empty() && !b.empty())
    {
      if (a.top() != b.front())
      {
        flag = false;
        break;
      }
      a.pop();
      b.pop();
    }

    if(flag){
      cout << "YES" << endl;
    }else{
      cout << "NO" << endl;
    }

  }

  return 0;
}
