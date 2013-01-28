#include <cstdio>

using namespace std;

void solve(char* _str) {
  int i = 0;
  int begin = 0;
  int end = 0;
  int str_len = 0;
  int cr_len = 0;
  int cr_num = 1;
  int num = 1;
  int has_word = 0;

  while (_str[i] != '\0') {
    // printf("%c\n", _str[i]);
    if (_str[i] == ' ') {
      end = i;
      str_len = end - begin;
      if (str_len != 0) {
        has_word = 1;
        if (str_len == cr_len) {
          cr_num++;
        } else {
          if (cr_num > num) {
            num = cr_num;
          }
          cr_len = str_len;
          cr_num = 1;
        }
      }
      begin = end + 1;
    }
    i++;
  } 

  // adjusting
  str_len = i - begin;
  if (str_len != 0) {
    has_word = 1;
    if (str_len == cr_len) cr_num++;
    if (cr_num > num) num = cr_num;
  }
  if (has_word == 0) num = 0;

  printf("%d\n", num);
}

int main() {
  int iter;
  char str[200000];
  scanf("%d", &iter);
  gets(str);

  for (int i=0; i<iter; i++) {
    gets(str);
    solve(str);
  }

  return 0;
}
