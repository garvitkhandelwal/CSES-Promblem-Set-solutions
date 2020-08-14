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
	if(n==1) {
		cout << 1 << endl;
		return;
	}
	if(n==2 || n==3) {
		cout << "NO SOLUTION" << endl;
		return;
	}
	if(n==4) {
		cout << "2 4 1 3" << endl;
		return;
	}
	int mid;
	if(n%2==0)
		mid=n/2;
	else
		mid=(n+1)/2;
	int start=1, end=mid+1;
	while(start<=mid && end<=n) {
		cout << start++ << " " << end++ << " ";
	}
	if(start<=mid)
		cout << start << endl;;
	if(end<=n)
		cout << end << endl;
}

signed main() 
{
	int t=1;
	// cin>>t;
	while(t--) {
		solve();
	}
}
