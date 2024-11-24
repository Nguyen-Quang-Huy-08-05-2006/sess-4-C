#include<stdio.h>
int main(){
	float a;
	float b;
	float c;
	printf("nhap vao 3 canh cua 1 tam giac");
	scanf("%f %f %f", a, b, c);
	
	if(a+b>c && c+b>a && a+c>b){
		printf("la 3 canh cua tam giac");
	}else{
		printf("khong phai 3 canh cua 1 tam giac");
	}
	
	return 0;
}
