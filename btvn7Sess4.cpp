#include<stdio.h>
int main(){
	int yyyy;
	printf("nhap 1 nam");
	scanf("%4d",&yyyy);
	
	if(yyyy%4==0&&yyyy!=100||yyyy%400==0){
		printf("day la nam nhuan");
	}else{
		printf("day khong phai nam nhuan");
	}
	return 0;
	
}
