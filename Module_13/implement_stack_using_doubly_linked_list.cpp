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

class myStack
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
      return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
    sz++;
  }

  void pop()
  {
    ListNode *deletedNode = tail;
    tail = tail->prev;
    delete deletedNode;
    if (tail == NULL)
    {
      head = NULL;
      return;
    }
    tail->next = NULL;
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
  int empty()
  {
    return head == NULL;
  }
};

int main()
{
  myStack st;

  int n;
  cin >> n;

  for (int i = 0; i < n; i++)
  {
    int x;
    cin >> x;
    st.push(x);
  }

  while (!st.empty())
  {
    cout << st.top() << endl;
    st.pop();
  }

  return 0;
}
