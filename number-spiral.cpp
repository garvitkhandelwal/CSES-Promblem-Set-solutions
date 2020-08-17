#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define fi first
#define se second
#define vi vector<int>
#define vii vector<int,int>
#define vvi vector<vector<int>>
#define pii pair<int,int>
#define rep(i,a,b) for(int i=a ; i<b ; i++)

const long long MOD = 1e9+7;

void solve() {
	ll x,y;
	scanf("%d %d", &x, &y);
	ll z=max(x,y);
	ll z2=(z-1)*(z-1);
	ll ans;
	if(z%2!=0) {
		if(x==z)
			ans=z2+y;
		else
			ans=z2+2*z-x;
	}
	else {
		if(y==z)
			ans=z2+x;
		else
			ans=z2+2*z-y;
	}
	cout << ans << endl;
}

signed main() 
{
	int t=1;
	cin>>t;
	while(t--) {
		solve();
	}
}
