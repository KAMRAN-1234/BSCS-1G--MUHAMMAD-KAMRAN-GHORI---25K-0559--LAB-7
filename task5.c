#include<stdio.h>
#include<limits.h>
int main(){
	int x[10];
	int min_num=INT_MAX;
	int max_num=INT_MIN;
	for(int i=0;i<10;i++){
		printf("Enter the value of %d index: ",i+1);
		scanf("%d",&x[i]);
		if(min_num>x[i])min_num=x[i];
		
		if(max_num<x[i])max_num=x[i];
	}

	int num=max_num-min_num;
	printf("The difference between the maximum and minimum number is: %d",num);
}
