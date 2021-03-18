
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define fo(i,n) for(i=0;i<n;i++)

void solve(){
	ll n;
	cin>>n;
	if(n==1){
		cout<<1;
		return;
	}
	if(n==2 || n==3){
		cout<<"NO SOLUTION";
		return;
	}
	else{
		for(ll i=2;i<=n;i+=2)cout<<i<<" ";
		for(ll i=1;i<=n;i+=2)cout<<i<<" ";
	}


}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t=1;
	//cin>>t;
	while(t--)
		solve();
	
}
