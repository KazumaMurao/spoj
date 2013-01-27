#include <cstdio>
#include <cmath>

using namespace std;

void solve(int N) {
  int sum = 1;
  int maxnum = (int)sqrt(N);
  int i;
  for (i=2; i<=maxnum; i++) {
    if (N%i == 0) {
      sum = sum + i + N/i;
    }
  }
  if (maxnum*maxnum == N) sum = sum - maxnum;

  printf("%d\n", sum);
}

int main() {
  int iter;
  int N;
  scanf("%d", &iter);

  for (int i=0; i<iter; i++) {
    scanf("%d", &N);
    solve(N);
  }

  return 0;
}
