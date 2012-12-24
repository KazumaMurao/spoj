#include <iostream>

using namespace std;

void solve(int N) {
  int sum = 0;
  int maxnum = 708;
  for (int i=1; i<maxnum; i++) {
    if (i == N) break;

    if (N%i == 0) {
      sum = sum + i;
    }
  }
  cout << sum << endl;
}

int main() {
  int iter;
  int N;
  cin >> iter;

  for (int i=0; i<iter; i++) {
    cin >> N;
    solve(N);
  }

  return 0;
}