#include<stdio.h>
int main(){
	int soCu;
	int soMoi;
	const int giaDien = 10000;
	
	printf("moi ban nhap so cu : ");
	scanf("%d", soCu);
	
	printf("moi ban nhap so moi : ");
	scanf("%d", soMoi);
	
	int soDien = soMoi - soCu;
	
	if(soDien>=0 && soDien<50){
		printf("tien dien thang nay la %d VND \n",giaDien*soDien);
	}else if(soDien>=50 && soDien<100){
		printf("tien dien thang nay la %d VND \n",(giaDien+15000)*soDien);
	}else if(soDien>=100 && soDien<150){
		printf("tien dien thang nay la %d VND \n",(giaDien+20000)*soDien);
	}else if(soDien>=150 && soDien<200){
		printf("tien dien thang nay la %d VND \n",(giaDien+25000)*soDien);
	}else if(soDien>=200){
		printf("tien dien thang nay la %d VND \n",(giaDien+30000)*soDien);
	}else{
		printf("so dien khong hop le");
	}
	
	return 0;
	
}
