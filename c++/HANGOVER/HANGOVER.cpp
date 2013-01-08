#include <iostream>

using namespace std;

int resarray[10][4] = 
{{0, 0, 0, 0},
 {1, 1, 1, 1},
 {2, 4, 8, 6},
 {3, 9, 7, 1},
 {4, 6, 4, 6},
 {5, 5, 5, 5},
 {6, 6, 6, 6},
 {7, 9, 3, 1},
 {8, 4, 2, 6},
 {9, 1, 9, 1}};

void solve(int A, int B) {
  if (B == 0) {
    cout << 1 << endl;
    return;
  }
  cout << resarray[A%10][(B-1)%4] << endl;
}

int main() {
  int iter;
  int A, B;
  cin >> iter;

  for (int i=0; i<iter; i++) {
    cin >> A >> B;
    solve(A,B);
  }

  return 0;
}
