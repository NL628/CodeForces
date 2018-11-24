// COMPETITION: Codeforces
// URL: bit.ly/2QdBnlE
// DATE: Nov 23, 2018
// STATUS: Unfinished

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

int MX = 1e5 + 5;
int n, s, f;
vi a, b;

int rsum(int x, int y) {
  return b[y] - b[x - 1];
}

int main() {
  cin >> n;
  a.resize(2 * n + 1);
  b.resize(2 * n + 1);
  a[0] = b[0] = 0;
  for (int i = 1; i <= n; i++) {
    cin >> a[i];
    a[n + i] = a[i];
  }
  for (int i = 1; i <= 2 * n; i++)
    b[i] = b[i - 1] + a[i];
  cin >> s >> f;
  int ans = INF, maxs = -1;
  for (int i = 1; i <= n; i++) {
    int rs = rsum(i, f - s + i - 1);
    if (maxs < rs) {
      ans = (s - (i - 1) + n) % n;
      ans = (ans == 0) ? n : ans;
      maxs = rs;     
    }
    else if (maxs == rs) {
      int temp = (s - (i - 1) + n) % n;
      temp = (temp == 0) ? n : temp;
      if (ans > temp)
        ans = temp;
    }
  }
  cout << ans << endl;
}
