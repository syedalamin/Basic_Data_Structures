#include <bits/stdc++.h>
using namespace std;

int main()
{
  list<string> playList;

  string song;
  // while (true)
  // {
  //   cin >> song;
  //   if (song == "stop")
  //   {
  //     break;
  //   }
  //   else
  //   {
  //     playList.push_back(song);
  //   }
  // }
  while (cin >> song && song != "stop")
    playList.push_back(song);

  int q;
  cin >> q;
  auto current = playList.begin();
  while (q--)
  {
    string cmd;
    cin >> cmd;
    if (cmd == "play")
    {
      string songName;
      cin >> songName;
      auto isFound = find(playList.begin(), playList.end(), songName);
      if (isFound != playList.end())
      {
        current = isFound;
        cout << "playing" << " " << *isFound << endl;
      }
      else
      {
        cout << "Not Found" << endl;
      }
    }
    else if (cmd == "right")
    {
      if (next(current) != playList.end())
      {
        current = next(current);
        cout << "playing" << " " << *current << endl;
      }
      else
      {
        cout << "Not Found" << endl;
      }
    }
    else if (cmd == "left")
    {

      if (current == playList.begin())
      {
        cout << "Not Found" << endl;
      }
      else
      {
        current = prev(current);
        cout << "playing" << " " << *current << endl;
      }
    }
  }

  return 0;
}
