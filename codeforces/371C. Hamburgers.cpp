#include <bits/stdc++.h>
typedef long long int ll;

using namespace std;

int cb=0,cc=0,cs=0,pb,pc,ps,nb,nc,ns;
ll R;

bool precio(ll n){
	ll rs=(n*cs-ns)*ps;if(rs<=0)rs=0;
	ll rb=(n*cb-nb)*pb;if(rb<=0)rb=0;
	ll rc=(n*cc-nc)*pc;if(rc<=0)rc=0;
	ll rs1=R-(rs+rb+rc);
	if(rs1>=0)return true;
	else return false;
}

ll binarySearch(ll a,ll b){
	ll li=a;
	ll ls=b;
	while(1<ls-li){
		ll md=li+(ls-li)/2;
		if(precio(md))li=md;
		else ls=md;
	}
	return li;
}	
int main() {
	string s;
	cin>>s;
	
	if(s.length()>0){
		for(int i=0;i<s.length();i++){
			if(s[i]=='C')cc++;
			else if(s[i]=='S')cs++;
			else if(s[i]=='B')cb++;
		}
	}
	scanf("%d %d %d %d %d %d",&nb,&ns,&nc,&pb,&ps,&pc);
	cin>>R;
	cout<<binarySearch(0,1LL<<44);
	
	return 0;
}