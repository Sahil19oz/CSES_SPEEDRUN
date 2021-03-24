
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array
#define REP(i,a,b) for(int i=a;i<b;i++)
#define pb push_back
#define mp make_pair 

typedef vector<int>     vi;
typedef vector<ll>      vl;
typedef pair<ll, ll>    pl;

const int maxn=2e5+10;
int n,m,k,a[maxn],b[maxn],ans;

bool compare(pl &a,pl &b){
	if(a.second<b.second)
		return true;
	if (a.second==b.second)
		return a.first<b.first;
	return false;
}

void solve() {
	int n,q,a,b,i;
	cin>>n>>q;
	ll arr[n+1];
	arr[0]=0;
	REP(i,1,n+1){
		cin>>arr[i];
	}
	REP(i,2,n+1){
		arr[i]+=arr[i-1];
	}
	
	while(q--){
		cin>>a>>b;
		cout<<(arr[b]-arr[a-1])<<endl;
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
