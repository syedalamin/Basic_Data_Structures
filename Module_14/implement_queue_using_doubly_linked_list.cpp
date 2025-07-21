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

class myQueue
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
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
    sz++;
  }
  void pop() 
  {
    ListNode *deleteNode = head;
    head = head->next;
    delete deleteNode;
    sz--;
    if (head == NULL)
    {
      tail = NULL;
      return;
    }
    head->prev = NULL;
  }

  int front()
  {
    return head->val;
  }
  int back()
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

int main()
{
  myQueue q;

  int n;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    int val;
    cin >> val;

    q.push(val);
  }

  while (!q.empty())
  {
    cout << "Front " << q.front() << " Back " << q.back() << " Size " << q.size() << endl;
    q.pop();
  }

  return 0;
}
