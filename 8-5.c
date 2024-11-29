#include <stdio.h>

int main() {
    int i=0,j,total=0;
    int num[3][4]={{1,2,3,4},
	              {5,6,7,8},
	              {9,10,11,12}};
    while(i<3){
    	j=0;
        while(j<4){
        	if(i==0||i==2||j==0||j==3){
        		total+=num[i][j];
			}
			j++;
        }
        i++;
    }
    printf("tong duong bien la %d",total);
	return 0;
}
