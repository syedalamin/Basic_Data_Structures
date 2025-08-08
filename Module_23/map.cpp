#include <bits/stdc++.h>
using namespace std;

int main()
{
  map<string, int> mp;

  mp["alamin"] = 2;
  mp["shuvow"] = 5;
  mp["siyam"] = 20;
  

  for(auto it = mp.begin(); it !=mp.end(); it++){
    
    cout << it->first << " "<< it->second << endl;
  }
  return 0;
}
