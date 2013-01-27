#include <cstdio>

#define MAXNUM 250001

using namespace std;

int primes[MAXNUM];

void setup() {
    int flag;
    int primes_size = 1;
    primes[0] = 2;
    for (int i=2;i<MAXNUM;i++) {
        flag = 0;
        for (int j=0;j<primes_size;j++) {
            if (i%primes[j] == 0)  {
                flag = 1;
                break;
            }
        }
        if (flag == 0) {
            primes[primes_size] = i;
            primes_size++;
        }
    }
}

void solve(int N) {
	int tmp_N = N;
    int prime_iter = 0;
	int divisor = primes[prime_iter];
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
            prime_iter++;
			divisor = primes[prime_iter];
		}
	}
	sm = sm * tmp_sm;
	res = sm - N;
	// cout << res << endl;
    printf("%d\n", res);
}

int main() {
  int iter;
  int N;

  setup();
  // cin >> iter;
  scanf("%d", &iter);

  for (int i=0; i<iter; i++) {
    // cin >> N;
    scanf("%d", &N);
    solve(N);
  }

  return 0;
}