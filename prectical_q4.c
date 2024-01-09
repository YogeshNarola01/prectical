#include<stdio.h>

main(){
	int n;
	
	printf("Enter any number : ");
	scanf("%d",&n);
	
	if(n%3==0 && n%5==0){
		printf("this number is divisible 3 or 5..");
	}else{
		printf("this number is not divisible 3 or 5..");
	}
}
