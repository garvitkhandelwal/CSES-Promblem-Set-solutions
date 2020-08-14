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
	cin >> n;
	ll arr[n];
	ll ans = 0;
	for(int i=0; i<n; i++) {
		cin >> arr[i];
		if(i==0)
			continue;
		else {
			if(arr[i]<arr[i-1]) {
				ans+=arr[i-1]-arr[i];
				arr[i]=arr[i-1];
			}
		}
	}
	cout << ans << endl;
}

signed main() 
{
	int t=1;
	// cin>>t;
	while(t--) {
		solve();
	}
}
