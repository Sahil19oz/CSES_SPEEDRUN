
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define fo(i,n) for(i=0;i<n;i++)

typedef vector<int>     vi;
typedef vector<ll>      vl;

const int maxn=2e5+10;
int n,m,k,a[maxn],b[maxn],ans;

void solve() {
	cin>>n>>m>>k;
	for(int i=0;i<n;++i) cin>>a[i];
	for(int i=0;i<m;++i) cin>>b[i];
	sort(a,a+n);
	sort(b,b+m);
	int i=0,j=0;
	while (i<n && j<m){
		if (abs(a[i]-b[j])<=k){ 
			++i;
			++j;
			++ans;
		}
		else{
			if (a[i]-b[j]>k){ 
				++j; 
			}
			else{
				++i;
			}
		}
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
