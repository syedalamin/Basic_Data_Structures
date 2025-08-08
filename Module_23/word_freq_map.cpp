#include <bits/stdc++.h>
using namespace std;

int main()
{
  string str = "Phitron is a programming learning platform Phitron helps students learn programming especially C programming C++ programming data structure algorithm and AI/ML Phitron Phitron";

  stringstream ss(str);

  string word;

  map<string, int> mp;

  int cnt = 0;
  string mx_find_word ;
  while (ss >> word)
  { 

    mp[word]++; 
    if(mp[word]>cnt){
      cnt = mp[word];
      mx_find_word = word;
    }
  }


  // for (auto it = mp.begin(); it != mp.end(); it++)
  // {

    
  //   if(it->second > cnt){
  //     cnt = it->second;
  //     mx_find_word = it->first;
  //   }
    
  // }
  cout << cnt << " "<< mx_find_word << endl;


  return 0;
}
