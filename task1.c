#include<stdio.h>
int main(){
    int arr[5];
    for(int i=0;i<5;i++){
        printf("Enter the value of %d index: ",i+1);
        scanf("%d",&arr[i]);
    }
    
    int last=arr[4];
    
    for(int i=4;i>=1;i--){
    	arr[i]=arr[i-1];
	}
	
	arr[0]=last;
    
     for(int i=0;i<5;i++){
        printf("The value of %d index is: %d\n",i+1,arr[i]);
    }
    
    return 0;
}
