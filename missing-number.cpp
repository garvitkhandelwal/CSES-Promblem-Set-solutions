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
	int arr[n-1];
	ll sum=0;
	for(int i=0; i<n-1; i++) {
		cin >> arr[i];
		sum+=arr[i];
	}
	ll total=0;
	for(int i=1; i<=n; i++)
		total+=i;
	cout << total-sum << endl;
}

signed main() 
{
	int t=1;
	// cin>>t;
	while(t--) {
		solve();
	}
}
