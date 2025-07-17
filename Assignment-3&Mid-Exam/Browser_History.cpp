#include <bits/stdc++.h>
using namespace std;

int main()
{
  list<string> history;

  string address;

  while (cin >> address && address != "end")
    history.push_back(address);

  int q;
  cin >> q;
  auto current = history.begin();

  while (q--)
  {
    string command;
    cin >> command;

    if (command == "visit")
    {
      string command_name;
      cin >> command_name;
      auto isFound = find(history.begin(), history.end(), command_name);

      if (isFound != history.end())
      {
        current = isFound;
        cout << *isFound << endl;
      }
      else
      {
        cout << "Not Available" << endl;
      }
    }

    else if (command == "prev")
    {
      if (current == history.begin())
      {
        cout << "Not Available" << endl;
      }
      else
      {
        current = prev(current);
        cout << *current << endl;
      }
    }

    else if (command == "next")
    {
      if ( next(current) == history.end())
      {
        cout << "Not Available" << endl;
      }
      else
      {
        current = next(current);
        cout << *current << endl;
      }
    }
  }

  return 0;
}
