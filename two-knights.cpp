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
	int n;
	scanf("%d", &n);
	for(int k=1; k<=n; k++) {
		ll a1=k*k;
		ll a2=a1*(a1-1)/2;
		if(k>2)
			a2-=4*(k-1)*(k-2);
		cout << a2 << endl;
	}
}

signed main() 
{
	int t=1;
	// cin>>t;
	while(t--) {
		solve();
	}
}
