// COMPETITION: Codeforces
// URL: bit.ly/2P15acE
// DATE: Nov 26, 2018
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
#define pplus(x, y) mp(x.f + y.f, x.s + y.s)

const double PI = 4 * atan(1);
const int MOD = 1000000007;
const ll LINF = 1ll << 60;
const int INF = 1 << 30;

const int MX = 200;
int n, k;
pi a[MX];
pi dp[MX][MX];

pi f(ll x) {
  pi ans = make_pair(0, 0);
  while (x % 5 == 0) {
    x /= 5;
    ans.s++;
  }
  while (x % 2 == 0) {
    x /= 2;
    ans.f++;
  }
  return ans;
}

bool best(pi x, pi y) {
  
}

int main() {
  cin >> n >> k;
  for (int i = 0; i < n; i++) {
    ll x;
    cin >> x;
    a[i] = f(x);
  }
  
}
