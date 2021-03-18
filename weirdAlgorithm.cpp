
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define fo(i,n) for(i=0;i<n;i++)

void solve(){
	int i;
	ll n,x;
	cin>>n;
	ll sum1=0;
	fo(i,n-1){
		cin>>x;
		sum1+=x;
	}
	cout<<abs(sum1-(n*(n+1)/2));

}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t=1;
	//cin>>t;
	while(t--)
		solve();
	
}
