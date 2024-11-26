#include<stdio.h>
int main(){
	int yyyy;
	printf("nhap 1 nam");
	scanf("%4d",&yyyy);
	
	if(year%4==0&&yyyy%100!=0||year%400==0){
		printf("day la nam nhuan");
	}else{
		printf("day khong phai nam nhuan");
	}
	return 0;
	
}
