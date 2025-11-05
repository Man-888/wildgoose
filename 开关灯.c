#include<stdio.h>
#include<string.h>
int main(){
	int n=0;
	scanf("%d",&n);
	
	int light[n];
//	static int L[n];
	int i=0,j=0;
	for(i=0;i<n;i++){
		light[i]=1;
	}
//	memcpy(light,L,sizeof(light));

	
	for(i=0;i<n;i++){
		j=i+1;
		int k=i;
		for(k=i;k<n;k+=j){
			light[k]=1-light[k];
			}
		}
	
	for(i=0;i<n;i++){
		if(light[i]==0){
			printf("%d ",i+1);
		}
	}
	return 0;
}
