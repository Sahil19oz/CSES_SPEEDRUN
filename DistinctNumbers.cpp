
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define fo(i,n) for(i=0;i<n;i++)

typedef vector<int>     vi;
typedef vector<ll>      vl;

void solve(){
	int n,m,k,i=0,j=0,ans=0;
	ll temp;
	cin>>n>>m>>k;
	vl a,b;
	fo(i,n){
		cin>>temp;
		a.push_back(temp);
	}
	fo(i,m){
		cin>>temp;
		b.push_back(temp);
	}
	sort(a.begin(),a.end(),greater<ll>());
	sort(b.begin(),b.end(),greater<ll>());
	
	while(i<n || j<m){
		ll p,q;
		p=a[i]-k;
		q=a[i]+k;
		if(b[j]>=p && b[j]<=q){
			ans++;
			i++;
			j++;
		}
		else{
			if(b[j]>p){
				i++;
			}
			else if(b[j]>q){
				j++;
			}
		}
		if(i==n-1 && j==m-1)break;
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
