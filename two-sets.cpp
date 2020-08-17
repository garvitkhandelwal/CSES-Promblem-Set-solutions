#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define fi first
#define se second
#define vi vector<int>
#define vii vector<int,int>
#define vvi vector<vector<int>>
#define vll vector<long long>
#define pii pair<int,int>
#define rep(i,a,b) for(int i=a ; i<b ; i++)

const long long MOD = 1e9+7;

void solve() {
	ll n;
	cin >> n;
	vll v;
	if(n*(n+1)%4!=0) {
		cout << "NO" << endl;
		return;
	}
	ll rsum, sum=0, pos=1;
	rsum=(ll)(n*(n+1))/4;
	ll temp=n;
	if(rsum%n==0) {
		v.pb(n);
		sum+=temp;
		while(rsum != sum) {
			v.pb(n-pos);
			v.pb(pos++);
			sum+=temp;
			n--;
		}
	}
	else {
		while(rsum != sum) {
			v.pb(n--);
			v.pb(pos++);
			sum+=temp+1;
		}
	}
	sort(v.begin(), v.end());
	cout << "YES\n" << v.size() << endl;
	pos=0;
	string y="";
	for(int i=1; i<=temp; i++) {
		if(v[pos]==i) {
			cout << i << " ";
			pos++;
		}
		else {
			y+=to_string(i) + " ";
		}
	}
	cout << endl << temp-v.size() << endl << y << endl;
} 

signed main() 
{
	int t=1;
	// cin>>t;
	while(t--) {
		solve();
	}
}
