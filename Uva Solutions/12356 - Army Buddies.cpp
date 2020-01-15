#include <cstdio>
#include <vector>
using namespace std;
int main(){
	int s,b,l,r,rl,rr;
	vector<int> left(100100);
	vector<int> right(100100);
	while(scanf("%d %d",&s,&b) and s!=0 and b!=0){
		
		for(int i=1;i<=s;i++){
			left[i]=i-1;
			right[i]=i+1;
		}
		left[1]=-1;
		right[s]=-1;
		while(b--){
			scanf("%d %d",&l,&r);
			left[right[r]]=left[l];
			right[left[l]]=right[r];
			rl=left[l];
			rr=right[r];
			if(rl==-1) printf("* ");
			else printf("%d ",rl);
			if(rr==-1) printf("*\n");
			else printf("%d\n",rr);
		}
		printf("-\n");
	}
	return 0;
}