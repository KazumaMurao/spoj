#include <iostream>
using namespace std;

void solve(){
  int cup1, cup2, target;
  int cbig, csml;
  int pour1, pour2, num;

  cin >> cup1;
  cin >> cup2;
  cin >> target;

  if (cup1 > cup2) {
    cbig = cup1;
    csml = cup2;
  } else {
    cbig = cup2;
    csml = cup1;
  }

  // Size check
  if (target > cbig) {
    cout << -1 << endl;
    return;
  }

  pour1 = cbig;
  pour2 = 0;

  if (pour1 == target || pour2 == target) {
    cout << 1 << endl;
    return;
  }
  num = 2;
  
  while (1) {
    if (pour1 == target || pour2 == target) {
      cout << num << endl;
      return;
    } else if (pour1 == 0 || pour2 == cbig) {
      cout << -1 << endl;
      return;
    }
    pour1 = pour1 - csml;
    pour2 = pour2 + csml;
    if (pour1 < 0) {
      pour1 = pour1 + cbig;
      pour2 = pour2 - cbig;
      num = num + 2;
    }
    num = num + 2;
  }

}

int main(){
  int iter;

  cin >> iter;
  while (iter--) {
    solve();
  }
  return 0;
}
