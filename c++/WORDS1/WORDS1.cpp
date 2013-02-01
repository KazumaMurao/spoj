#include <iostream>
#include <string>
#include <queue>
using namespace std;

int euler_check_array[27];
int loop_check_array[27][27];

int eulerCheck(){
  int fta1 = 1;
  int fta2 = 1;
  for (int i=0;i<27;i++) {
    if (euler_check_array[i] != 0) {
      // First time admission
      if (euler_check_array[i] == 1 && fta1 > 0) {
        fta1--;
      } else if (euler_check_array[i] == -1 && fta2 > 0) {
        fta2--;
      } else {
        return 0;
      }
    }
  }
  // for (int j=0;j<27;j++) cout << euler_check_array[j] << endl;
  if (fta1 != fta2) return 0;

  return 1;
}

int loopCheck(int ch){
  queue<int> qu;

  qu.push(ch);
  while (!qu.empty()) {
    ch = qu.front();
    qu.pop();
    for (int i=0;i<27;i++) {
      loop_check_array[i][ch] = 0; // Avoid duplication
    }
    for (int i=0;i<27;i++) {
      if (loop_check_array[ch][i] == 1) {
        qu.push(i);
        loop_check_array[ch][i] = 0;
      }
    }
  }
  
  for (int p=0;p<27;p++) {
    for (int q=0;q<27;q++) {
      if (loop_check_array[p][q] != 0) return 0; // Remain another loop
    }
  }

  return 1;
}

void solve(){
  int i;
  int x,y; // 'a' = 97
  string word;


  // Array initialized
  for (int j=0;j<27;j++) euler_check_array[j] = 0;
  for (int p=0;p<27;p++) {
    for (int q=0;q<27;q++) {
      loop_check_array[p][q] = 0;
    }
  }

  cin >> i;
  while (i--) {
    cin >> word;
    x = word[0] - 97;
    y = word[word.length()-1] - 97;
    // cout << x << y << endl;
    euler_check_array[x]++;
    euler_check_array[y]--;
    loop_check_array[x][y] = 1;
    loop_check_array[y][x] = 1;
  }

  // Euler check
  if( 0 == eulerCheck()) {
    cout << "The door cannot be opened." << endl;
    return;
  }

  // Loop check
  if( 0 == loopCheck(x)) {
    cout << "The door cannot be opened." << endl;
    return;
  }

  cout << "Ordering is possible." << endl;
}

int main(){
  int iter;

  cin >> iter;
  while (iter--) {
    solve();
  }
  return 0;
}
