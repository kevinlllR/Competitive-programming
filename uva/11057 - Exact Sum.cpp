#include <bits/stdc++.h>
using namespace std;

struct nodo{
	int a;
	int b;
	int c;
};
	
nodo binarySearch(vector<int> b,int k){

	nodo res;
	res.c=1e9;
	for(int i=0;i<(int)b.size();i++){
			int li=0;
	int ls=b.size();
		while(1<ls-li){
			int md=li+(ls-li)/2;
			if(b[i]+b[md]==k){
				if(i!=md){
					if(abs(b[i]-b[md])<res.c){
						
						res.a=min(b[i],b[md]);
						res.b=max(b[i],b[md]);
						res.c=abs(b[i]-b[md]);
		
						break;
					}
					break;
				}
				else li=md;
			}
			else{
				if(b[i]+b[md]<k){
						li=md;
				}
				else ls=md;
			}
		}
	}
	return res;
}
int main() {
	int n;
	while(cin>>n){
	vector<int> b(n);
	for(int i=0;i<n;i++){
		cin>>b[i];
	}
	int sum;
	cin>>sum;
	string s;
	getline(cin,s);
	sort(b.begin(),b.end());
	nodo res=binarySearch(b,sum);
	if(res.c<1e9 && res.c>=0){
		printf("Peter should buy books whose prices are %d and %d.\n\n",res.a,res.b);
	}

	}
		return 0;
}