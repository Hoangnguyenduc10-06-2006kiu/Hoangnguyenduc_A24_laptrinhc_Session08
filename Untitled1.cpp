#include<stdio.h>
int main(){
	int listnumber[3][4]={{1,2,3,4},
	                      {5,6,7,8}, 
						  {9,10,11,12}};
	
	printf("%d\n",listnumber[2][3]) ;	
	printf("%d\n",listnumber[2][2]) ;	
	printf("%d\n",listnumber[2][1]) ;	
	printf("%d\n",listnumber[2][0]) ;	
	printf("%d\n",listnumber[1][3]) ;	
	printf("%d\n",listnumber[1][2]) ;	
	printf("%d\n",listnumber[1][1]) ;	
	printf("%d\n",listnumber[1][0]) ;	
	printf("%d\n",listnumber[0][3]) ;	
	printf("%d\n",listnumber[0][2]) ;	
	printf("%d\n",listnumber[0][1]) ;	
	printf("%d\n",listnumber[0][0]) ;	
	return 0;				   
} 
