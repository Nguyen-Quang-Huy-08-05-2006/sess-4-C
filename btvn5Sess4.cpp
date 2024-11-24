#include<stdio.h>
int main(){
	int a;
	int b;
	int c;
	printf("moi ban nhap vao 3 so nguyen : \n");
	scanf("%d %d %d", a, b, c);
	
	if(b<c && b>a){
		printf("so %d nam giua %d va %d \n", b, a, c);
	}else{
		printf("so %d khong nam giua %d va %d \n", b, a, c);
	}
	
	return 0;
}
