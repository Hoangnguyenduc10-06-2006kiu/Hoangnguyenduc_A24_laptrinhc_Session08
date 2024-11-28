#include<stdio.h>
int main(){
	int num; 
	int listnumber[4]={0,1,2,3};
	printf("moi ban nhap vao phan tu co trong mang");
	scanf("%d",&num); 
	switch (num){
		case 0:
			printf("phan tu nam o vi tri 1");		
			break ;
		case 1:
			printf("phan tu nam o vi tri 2");
			break;
		case 2:
		printf("phan tu nam o vi tri 3");		
			break;
		case 3:
		 	printf("phan tu nam o vi tri 3");			
			break;
	default:
	 	printf("Phan tu tkhông ton tai trong mang.") ;
			
	} 
	return 0; 
} 
