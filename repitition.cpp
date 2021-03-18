
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define fo(i,n) for(i=0;i<n;i++)

void solve(){
	string s;
	ll n,maxx=1;
	cin>>s;
	n=s.length();
	ll curMax=INT_MIN;
	for(int i=1;i<n;i++){
		if(s[i]==s[i-1]){
			maxx+=1;
		}
		else{
			maxx=1;
		}
		curMax=max(maxx,curMax);
	} 
	cout<<max(maxx,curMax);

}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t=1;
	//cin>>t;
	while(t--)
		solve();
	
}
