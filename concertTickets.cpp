
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
	ll n,ans=0,curMax=INT_MIN;
	cin>>n;
	vector<ll> a;
	vector<ll> d;
	while(n--){
		ll aa,b;
		cin>>aa>>b;
		a.pb(aa);
		d.pb(b);
	}
	sort(a.begin(),a.end());
	sort(d.begin(),d.end());
	ll i=0,j=0;
	n=a.size();
	while(i<n || j<n){
		if(a[i]<d[j]){
			ans+=1;
			i+=1;
		}
		else{
			ans-=1;
			j+=1;

		}
		if (ans>curMax)
			curMax=ans;

				}
		cout<<curMax;
}


int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t=1;	
	//cin>>t;
	while(t--)
		solve();
	
}
