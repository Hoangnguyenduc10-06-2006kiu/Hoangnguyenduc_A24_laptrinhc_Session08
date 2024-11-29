#include <stdio.h>

int main() {
	int num[2][3]={{1,2,3,4,5},
			      {9,8,7,6,10}};
    int i=0,j;
    int max=num[0][0],min=num[0][0];
    while(i<2){
    	j=0;
        while(j<3){
            if(max<num[i][j]){
            	max=num[i][j];
			}
			if(min>num[i][j]){
            	min=num[i][j];
			}
            j++;
        }
        i++;
    }
    printf("so lon nhat %d,so nho nhat %d",max,min);
	return 0;
}

