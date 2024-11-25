#include<stdio.h>
int main(){
	int dd;
	int mm;
	int yyyy;
	printf("nhap vao ngay");
	scanf("%2d", &dd);
	
	printf("nhap vao thang");
	scanf("%2d", &mm);
	
	printf("nhap vao nam");
    scanf("%4d", &yyyy);
    
    if(dd>=1 && dd<= 31 && mm==1 || mm==3 || mm==5 || mm==7 || mm==8 || mm==11 || mm==12){
    	printf("ngay thang nam ho le");
	}else if(dd>=1 && dd<=30 && mm==4 || mm==6 || mm==9 || mm==11){
		printf("ngay thang nam ho le");
	}else if(mm==2){
		if(yyyy%4==0&&yyyy%100!=0||yyyy%400==0){
		    if(dd>0&&dd<30);{
    	              printf("ngay thang nam hop le");	
	        }else if(dd>0&&dd<29){
    	            printf("ngay thang nam hop le");
	}else{
		printf("ngay thang nam khong hop le");
	}
	
	return 0;
}
