#include<stdio.h>
int main(){
	int year;
	printf("nhap 1 nam");
	scanf("%4d",&year);
	
	if(year%4==0){
		printf("day la nam nhuan");
	}else{
		printf("day khong phai nam nhuan");
	}
	return 0;
	
}
