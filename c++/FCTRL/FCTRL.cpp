#include <iostream>

using namespace std;

void solve(long N) {
  long sum = 0;
  long devnum = 1;
  for (int i=0; i<12; i++) {
    devnum = devnum * 5;
    sum = sum + N / devnum;
  }
  cout << sum << endl;
}

int main() {
  int iter;
  long N;
  cin >> iter;

  for (int i=0; i<iter; i++) {
    cin >> N;
    solve(N);
  }

  return 0;
}