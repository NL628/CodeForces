// COMPETITION: Codeforces
// URL: bit.ly/2znminU
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
int n;
ll v[5], a[MX];
ll dp[5][MX];

int main() {
  cin >> n >> v[1] >> v[2] >> v[3];
  for (int i = 1; i <= n; i++)
    cin >> a[i];
  for (int i = 1; i <= 3; i++) {
    dp[i][0] = -LLONG_MAX;
    for (int j = 1; j <= n; j++) {
      dp[i][j] = max(v[i] * a[j] + dp[i - 1][j], dp[i][j - 1]);
    }
  }
  cout << dp[3][n] << endl;
}
