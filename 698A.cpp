// COMPETITION: Codeforces
// URL: bit.ly/2DG6X4I
// DATE: Nov 23, 2018
// STATUS: Finished

#include<bits/stdc++.h>
using namespace std;
#define INF 0x3f3f3f3f
#define min3(a,b,c) min(a,min(b,c))

int n,a[105];
int dp[105][5];

int main() {
  cin>>n;
  for(int i=0;i<n;i++) cin>>a[i];
  for(int i=0;i<105;i++)
    for(int j=0;j<5;j++) dp[i][j]=INF;
  dp[0][0]=1;
  if(a[0]==1||a[0]==3) dp[0][1]=0;
  if(a[0]==2||a[0]==3) dp[0][2]=0;
  for(int i=1;i<n;i++) {
    if(a[i]==1||a[i]==3) dp[i][1]=min(dp[i-1][2],dp[i-1][0]);
    if(a[i]==2||a[i]==3) dp[i][2]=min(dp[i-1][1],dp[i-1][0]);
    dp[i][0]=min3(dp[i-1][0],dp[i-1][1],dp[i-1][2])+1;    
  }
  cout<<min3(dp[n-1][0],dp[n-1][1],dp[n-1][2])<<endl;
}
