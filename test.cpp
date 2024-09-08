#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
  int T;
  cin >> T;
  while (T--) {
    int M, N, Q;
    cin >> M >> N >> Q;
    cin.ignore();

    vector<string> map(M);
    for (int i = 0; i < M; ++i) {
      getline(cin, map[i]);
    }

    cout << M << " " << N << " " << Q << endl;

    while (Q--) {
      int x, y;
      cin >> x >> y;

      int ans = 1;
      for (int i = 1; i <= min(M, N); ++i) {
        bool flag = false;
        for (int a = x - i; a <= x + i && !flag; ++a) {
          for (int b = y - i; b <= y + i; ++b) {
            if (a < 0 || b < 0 || a >= M || b >= N || map[a][b] != map[x][y]) {
              flag = true;
              break;
            }
          }
        }
        if (!flag) {
          ans = 2 * i + 1;
        } else {
          break;
        }
      }
      cout << ans << endl;
    }
  }
  return 0;
}