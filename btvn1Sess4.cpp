#include<stdio.h>
int main(){
	int number;
	printf("nhap vao mot so nguyen : ");
	scanf("%d", number);
	
	if(number>0){
		printf("%d la so duong \n",number);
	}else{
		printf("%d la so am \n", number);
	}
	return 0;
	
}