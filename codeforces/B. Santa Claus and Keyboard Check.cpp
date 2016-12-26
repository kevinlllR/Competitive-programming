#include <bits/stdc++.h>
using namespace std;
	
int main() {
	int m,n,k;
	cin>>n>>m>>k;
	int res1=0;
	int res2=0;
	char res3;
	if(k%(2*m)==0){
		res1=k/(2*m);
		res2=m;
		res3='R';
	}
	else{
		res1=(k/(2*m)) +1;
		res2=(k%(2*m));
		if(res2%2==0){
			res2=res2/2;
			res3='R';
		}
		else{
			res2=(res2/2)+1;
			res3='L';
		}

	}
	cout<<res1<<" "<<res2<<" "<<res3<<endl;
	return 0;
}