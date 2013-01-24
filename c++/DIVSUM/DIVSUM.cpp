#include <iostream>
#define MAXNUM 200

using namespace std;

void solve(int N) {
	int tmp_N = N;
	int divisor = 2;
	int product = 1;
	int tmp_sm = 1;
	int sm = 1;
	int res;
	while (tmp_N > 1) {
		if (tmp_N%divisor == 0) {
			product = product * divisor;
			tmp_sm = tmp_sm + product;
			tmp_N = tmp_N / divisor;
		} else {
			sm = sm * tmp_sm;
			product = 1;
			tmp_sm = 1;
			divisor = divisor + 1;
		}
	}
	sm = sm * tmp_sm;
	res = sm - N;
	cout << res << endl;
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