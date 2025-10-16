#include<stdio.h>
int main(){
	int x[10];
	   for(int i=0;i<10;i++){
        printf("Enter the value of %d index: ",i+1);
        scanf("%d",&x[i]);
    }
    
    int num;
    printf("Enter the number to be searched: ");
    scanf("%d",&num);
    
    int count =0;
    for(int i=0;i<10;i++){
    	if(x[i] == num)count++;
	}
	
	if(count == 0){
		printf("No occurrence found of the number you entered to be searched\n");
	}else{
		printf("The occurrences of the number is: %d",count);
	}
}
