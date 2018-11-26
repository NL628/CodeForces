// COMPETITION: Codeforces
// URL: bit.ly/2FHvvgx
// DATE: Nov 25, 2018
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

const int MX = 5000;
string s;
bool ip[MX][MX];
ll np[MX][MX];

int len, length, i, j, q, x, y;

int main() {
  cin >> s;
  length = s.length();
  for (i = 0; i < length; i++) {
    np[i][i] = 1;
    ip[i][i] = true;
  }
  for (len = 2; len <= length; len++) {
    for (i = 0; i + len <= length; i++) {
      j = i + len - 1;
      if (s[i] == s[j] && (j < i + 2 || ip[i + 1][j - 1])) {
        ip[i][j] = true;
      }
      np[i][j] = np[i + 1][j] + np[i][j - 1] - np[i + 1][j - 1] + ip[i][j];
    }
  }
  cin >> q;
  while (q-- && cin >> x >> y) {
    cout << np[x - 1][y - 1] << endl;
  }
}
