#include<stdio.h>

int main(){
	int n,m;
	scanf("%d %d",&n,&m);
	int i=0,j=0;
	char name1[n][50],name2[m][50];
	int pra1[n],pra2[m];
	int k=0;
	for(k=0;k<n+m;k++){
		char group;
		char a[50];
		scanf("%s %s ",&a[50],&group);
		if(group=='H'){
			
			name2[i][50]=a[50];
			i++;
			scanf("%d",&pra2[i]);
		}
		if(group=='S'){
			
			name1[j][50]=a[50];
			j++;
			scanf("%d",&pra1[j]);
		}
		
	}
	char name3[n][50],name[m][50];
	int l=0,p=0;
	
	for(l=0;l<n;l++){
		j=n-1;
		for(p=l+1;p<n;p++){
			if(pra1[l]<pra1[p]){
				j--;
			}
			name3[j][50]=name1[l][50];
			
		}
	}
	for(l=0;l<m;l++){
		i=m-1;
		for(p=l+1;p<m;p++){
			if(pra2[l]<pra2[p]){
				i--;
			}
			name4[i][50]=name2[l][50];
			
		}
	}
	printf("%s",&name4[m-3][50]);
	printf("%s",&name3[n-6][50]);
	printf("%s",&name3[n-7][50]);
	printf("%s",&name3[n-8][50]);
	printf("%s",&name3[n-9][50]);
	return 0;	
}
