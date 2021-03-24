
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array
#define fo(i,n) for(i=0;i<n;i++)

typedef vector<int>     vi;
typedef vector<ll>      vl;

const int maxn=2e5+10;
int n,m,k,a[maxn],b[maxn],ans;

void solve() {
	ll n,m;
    cin>>n>>m;
    multiset<ll,greater<int>> tickets;

    while(n--)
    {	ll ticket;
        cin>>ticket;
        tickets.insert(ticket);
    }
    while(m--)
    {
    	ll curr;
        cin>>curr;
        auto it=tickets.lower_bound(curr);
        if(it==tickets.end())
            cout<<-1<<endl;
        else
        {
            cout<<*it<<endl;
            tickets.erase(it);
        }
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
