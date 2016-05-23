#include <bits/stdc++.h>

using namespace std;
int main()
{
	bool c;
	string num;
	cin>>num;
	int i;
	char fin;
	for(i=0;num[i]!='.';){
		fin=num[i];
		i++;
	}
	if(fin=='9'){
		cout<<"GOTO Vasilisa."<<endl;

	}
	else{
		string ans="";
		for(i=0;num[i]!='.';){
			ans+=num[i];
			i++;
		}
		i++;
		if(num[i]<'5'){
			cout<<ans<<endl;
		}
		else{
			ans[ans.length()-1]++;
			cout<<ans<<endl;

			}

		}
	




	return 0;
}