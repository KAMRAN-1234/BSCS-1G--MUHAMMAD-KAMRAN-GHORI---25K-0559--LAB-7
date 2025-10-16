#include<stdio.h>
int main(){
	int freq[100]={0};
	int x[10];
	for(int i=0;i<10;i++){
		int y;
		printf("Enter the value for %d index: ",i+1);
		scanf("%d",&y);
		if(freq[y]!=0)x[i]=-1;
		else x[i]=y;
		
		freq[y]++;
	}
	
	for(int i=0;i<10;i++){
		printf(" %d",x[i]);
	}
	
}
