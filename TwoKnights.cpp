
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define fo(i,n) for(i=0;i<n;i++)

void solve(){
	ll i,n;
	cin>>n;
	vector<ll> x;
	fo(i,n){
		ll e;
		cin>>e;
		x.push_back(e);
	}
	cout<<set<ll>(x.begin(),x.end()).size();
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t=1;	
	//cin>>t;
	while(t--)
		solve();
	
}
