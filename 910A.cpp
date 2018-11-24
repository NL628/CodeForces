// COMPETITION: Codeforces
// URL: bit.ly/2S4Jsq6
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

const int MX = 100 + 5;
int n, d;
string s;
vi lily;
int dp[MX];

int main() {
  cin >> n >> d >> s;
  for (int i = 0; i < n; i++) {
    if (s[i] == '1') {
      lily.pb(i);
    }
  }
  for (int i = 0; i < sz(lily); i++) {
    dp[i] = INF;
  }
  dp[0] = 0;
  for (int i = 0; i < sz(lily); i++) {
    for (int j = i + 1; j < sz(lily); j++) {
      if (lily[j] - lily[i] <= d) {
        dp[j] = min(dp[j], dp[i] + 1);
      }
    }
  }
  cout << (dp[sz(lily) - 1] > 1000 ? -1 : dp[sz(lily) - 1]) << endl;
}
