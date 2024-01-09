#include<stdio.h>

main(){
	int i,n;
	int a[100],b[100],c[100];
	int *ptr;
	
	printf("Enter array size 1 : ");
	scanf("%d",&n);
	
	for(i=0; i<n; i++){
		printf("Enter array value : ");
		scanf("%d",&a[i]);
	}
	printf("\n");
	for(i=0; i<n; i++){
		printf("Enter array value : ");
		scanf("%d",&b[i]);
	}
	printf("\n");
	for(i=0; i<n; i++){
		c[i]=(a[i]+b[i]);
		ptr=c[i];
		
		printf("sum is : %d \n",ptr);
	}
	
	
}
