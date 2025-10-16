#include<stdio.h>
int main(){
	int x[10];
	int pass[10];
	int fail[10];
	int pass_index=0;
	int fail_index=0;
	
	for(int i=0;i<10;i++){
		printf("Enter the %d number of the student: ",i+1);
		
		scanf("%d",&x[i]);
		if(x[i] == -1){
			printf("Program eleminate\n");
			break;
		}
		else if(x[i]<5){
			fail[fail_index++]=x[i];
		}else{
			pass[pass_index++]=x[i];
		}
	}
	
	
	int pass_sum=0;
	for(int i=0;i<pass_index;i++){
		pass_sum+=pass[i];
	}
	int fail_sum=0;
		for(int i=0;i<fail_index;i++){
		fail_sum+=fail[i];
	}
	
	
	float average_pass=0;
	float average_fail=0;
	
	if(pass_index){
	 average_pass= 1.0 * (pass_sum)/(pass_index);
}

	if(fail_index){
	average_fail= 1.0 * (fail_sum)/(fail_index);
	
}

	printf("The average of passing student is: %.2f\n",average_pass);
	printf("The average of failing student is: %.2f",average_fail);
	
	
}
