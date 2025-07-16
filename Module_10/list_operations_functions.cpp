#include<bits/stdc++.h>
using namespace std;

int main()
{
  list<int> l = {10,20,30,20,40,20,50,20,20};

  // l.remove(20);
  // l.sort(greater<int>());
  l.sort(); 
  l.unique();
  l.reverse();
  for(int v : l){
    cout << v << endl;
  }

  return 0;
}
