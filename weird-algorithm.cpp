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
	ll n;
	cin >> n;
	cout << n << " ";
	while(n>1) {
		if(n%2==0)
			n/=2;
		else
			n=n*3+1;
		cout << " " << n;
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