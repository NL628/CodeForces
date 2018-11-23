// COMPETITION: Codeforces
// URL: bit.ly/2DF29N6
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

const int MX = 1e5 + 5;
int n, k, a[MX];
bool t[MX];
int p1[MX], p2[MX];

int rsum(int* x, int a, int b) {
  return x[b] - x[a - 1];
}

int main() {
  cin >> n >> k;
  for (int i = 1; i <= n; i++) {
    cin >> a[i];
  }
  for (int i = 1; i <= n; i++) {
    cin >> t[i];
  }
  for (int i = 1; i <= n; i++) {
    p1[i] = p1[i - 1] + a[i];
    p2[i] = p2[i - 1] + (t[i] ? a[i] : 0);
  }
  int ans = 0;
  for (int i = 1; i <= n - k + 1; i++) {
    ans = max(ans, rsum(p1, i, i + k - 1) + rsum(p2, 1, i - 1) + rsum(p2, i + k, n));
  }
  cout << ans << endl;
}
