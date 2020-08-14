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
	string s;
	cin >> s;
	int mx=1;
	int curr_max=1;
	for(int i=0; i<s.size()-1; i++) {
		if(s[i]==s[i+1])
			curr_max++;
		else {
			mx=max(curr_max,mx);
			curr_max=1;
		}
	}
	mx=max(mx, curr_max);
	cout << mx << endl;
}

signed main() 
{
	int t=1;
	// cin>>t;
	while(t--) {
		solve();
	}
}
