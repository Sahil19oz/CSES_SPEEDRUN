
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array
#define fo(i,n) for(i=0;i<n;i++)
#define pb push_back
#define mp make_pair 

typedef vector<int>     vi;
typedef vector<ll>      vl;
typedef pair<ll, ll>    pl;

const int maxn=2e5+10;
int n,m,k,a[maxn],b[maxn],ans;

bool compare(pl &a,pl &b){
	return a.second<b.second;
}

void solve() {
	ll n,ans=0;
	cin>>n;
	vector<pl> s;
	while(n--){
		ll a,b;
		cin>>a>>b;
		s.pb(mp(a,b));

	}
	
	sort(s.begin(),s.end(),compare);
	for(int i=0;i<s.size()-1;i++){
		if(s[i].second<=s[i+1].second)
			ans++;
	}
	cout<<ans;
}


int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t=1;	
	//cin>>t;
	while(t--)
		solve();
	
}
