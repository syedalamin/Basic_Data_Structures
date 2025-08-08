#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
  string name;
  int roll;
  int marks;

  Student(string name, int roll, int marks)
  {
    this->name = name;
    this->roll = roll;
    this->marks = marks;
  }
};

class cmp
{
public:
  bool operator()(Student l, Student r)
  {
    if (l.marks < r.marks)
      return true;
    else if (l.marks > r.marks)
      return false;
    {
      return l.roll > r.roll;
    }
  }
};

int main()
{
  priority_queue<Student, vector<Student>, cmp> pq;
  int n;
  cin >> n;

  while (n--)
  {
    string name;
    int roll, marks;
    cin >> name >> roll >> marks;
    Student obj(name, roll, marks);
    pq.push(obj);
  }

  int q;
  cin >> q;
  while (q--)
  {
    int cmd;
    cin >> cmd;
    if (cmd == 0)
    {
      string name;
      int roll, marks;
      cin >> name >> roll >> marks;
      Student obj(name, roll, marks);
      pq.push(obj);
      cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
    }

    else if (cmd == 1)
    {
      if (pq.empty())
        cout << "Empty" << endl;
      else
        cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
    }
    else if (cmd == 2)
    {
      if (pq.empty())
        cout << "Empty" << endl;
      else
      {
        pq.pop();
        if (pq.empty())
          cout << "Empty" << endl;
        else
          cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
      }
    }
  }

  return 0;
}
