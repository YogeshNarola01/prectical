#include<stdio.h>

main(){
 int i,n;
 char coname[100];
 char color[50];
 char model[50];
 int price[10];
 
 printf("Enter the number of data detail : ");
 scanf("%d",&n);
 
 for(i=0; i<n; i++){
 	printf("enter the compony name : ");
 	scanf("%s",&coname);
 	printf("enter the color name : ");
 	scanf("%s",&color);
 	printf("enter the model name : ");
 	scanf("%s",&model);
 	printf("enter the price name : ");
 	scanf("%d",&price);
 }
 printf("\n");	
 
 for(i=0; i<n; i++){
 	printf("enter the compony name : %s\n",coname);
 	printf("enter the color name : %s\n",color);
 	printf("enter the model name : %s\n",model);
 	printf("enter the price name : %d\n",price);
 }
 printf("\n");
}
