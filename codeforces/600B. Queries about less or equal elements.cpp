#include <stdio.h>
#include <algorithm>

using namespace std;
int binarySearch(int k[],int lon, int b){
int li=0;
int ls=lon;
while(li<ls){
	int mid=li+(ls-li)/2;
	if(b>=k[mid]){
		li=mid+1;
	}
	else{
	ls=mid;
	}
}
return li;
}	
int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	int x1[a],x2[b];
	for(int i=0;i<a;i++){
		scanf("%d",&x1[i]);
	}
	sort(x1,x1+a);
	int e;
	for(int i=0;i<b;i++){
		scanf("%d",&e);
		int res=binarySearch(x1,a,e);
		printf("%d",res);
		if(i!=b-1)printf(" ");
		
	}
	return 0;
}