#include <stdio.h>
#include <algorithm>

using namespace std;
double binarySearch(double x[],int  lon, int b){
double li=0;
double ls=b;

while(li<ls){
	double cont=0;
	double first=0;
	bool chico=false;
	double mid=li+(ls-li)/2;
	double res1=0;
	double res2=0;
	for(int i=0;i<lon;i++){
		double sgt=0;
		if(i==lon-1){
			sgt=b;
			res2=sgt;
		}
		else{
			sgt=x[i+1];
			res2=sgt-mid;
		}
		if(i==0)res1=0;
		else res1=first+mid;
		
		if(x[i]-mid<=res1 && x[i]+mid>=res2){
			first=x[i];
			cont++;
			continue;
		}
		else{
			chico=true;
			break;
		}
	}
	if(cont!=lon*1.0){
		if(!chico){
			ls=mid;
		}
		else li=mid+1e-9;
	}
	else{
		ls=mid;
	}

	if(li>=ls-1e-9){
		break;
	}
}
return li;
}	
int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	double x1[a];
	for(int i=0;i<a;i++){
		scanf("%lf",&x1[i]);
	}
	sort(x1,x1+a);
	double res=binarySearch(x1,a,b);
	printf("%.9f",res);
	return 0;
}