#include <cstdio>
using namespace std;
int p[300000];
bool c[400000];
int index=0;
int main(){
	int n;
	scanf("%d",&n);
	for(int i=2;i<=n;i++){
		if(c[i]==false){
			p[index++]=i;
			for(int j=i*2;j<=n;j+=i)c[j]=true;
		}
	}
	int left=0;int right=0;int sum=index==0?0:p[0];
	int ans=0;
	
	while(left<=right && right<index){
		if(sum<=n){
			if(sum==n)ans++;
			sum+=p[++right];
		}
		else{
			sum -= p[left++];			
		}
	}
	printf("%d\n",ans);
	return 0;
}
