#include <iostream>
#include <sstream>
#include <string>

using namespace std;

void solve() {
  int len;
  int num = 0;
  int pr_len = 0;
  int cr_num = 0;
  string line, s;

  getline(cin, line);
  stringstream ss(line);

  while (ss >> s) {
    len = s.size();
    if (len==pr_len) cr_num++;
    else {
      if (cr_num > num) num = cr_num;
      cr_num = 1;
      pr_len = len;
    }
  }

  if (cr_num > num) num = cr_num;
  cout << num << endl;
  
}

int main() {
  string s;
  int iter;

  cin >> iter;
  getline(cin, s);

  while (iter--) {
    solve();
  }
  return 0;
}
