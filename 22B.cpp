// COMPETITION: Codeforces
// URL: bit.ly/2RaREF9
// DATE: Nov 23, 2018
// STATUS: Finished

#include<bits/stdc++.h>
using namespace std;

typedef pair<double, double> pd;
typedef pair<int, int> pi;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pi> vpi;

#define min3(a, b, c) min(a, min(b, c))
#define max3(a, b, c) max(a, max(b, c))
#define sz(x) (int)(x).size()
#define mp make_pair
#define pb push_back
#define f first
#define s second

const double PI = 4 * atan(1);
const int MOD = 1000000007;
const ll LINF = 1ll << 60;
const int INF = 1 << 30;

const int MX = 25 + 5;
int n, m;
char room[MX][MX];

int main() {
  cin >> n >> m;
  for (int i = 0; i < n; i++)
    for (int j = 0; j < m; j++)
      cin >> room[i][j];
  int ans = 0;
  for (int r1 = 0; r1 < n; r1++) {
    for (int r2 = r1; r2 < n; r2++) {
      int c1 = 0, c2;
      for (c2 = c1; c2 < m; c2++) {
        bool f = false;
        for (int x = r1; x <= r2; x++)
          if (room[x][c2] == '1') {
            f = true;
            break;
          }
        if (f) c1 = c2 + 1;
        else ans = max(ans, r2 + r2 + c2 + c2 - r1 - r1 - c1 - c1 + 4);
      }
    }
  }
  cout << ans << endl;
}
