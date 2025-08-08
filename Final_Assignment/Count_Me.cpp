#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  cin.ignore();
  while (t--)
  {
    string s;
    getline(cin, s);
    
    
    stringstream ss(s);
    string word;
    
    map<string, int> mp;

    string mx_find_word;
    int cnt = 0;

    while (ss >> word)
    {
      mp[word]++;
      if (mp[word] > cnt)
      {
        mx_find_word = word;
        cnt = mp[word];
      }
    }

    cout << mx_find_word << " " << cnt << endl;
  }

  return 0;
}
