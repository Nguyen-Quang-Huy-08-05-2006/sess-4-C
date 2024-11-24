#include<stdio.h>
int main(){
	int a;
	int b;
	int c;
	printf("moi ban nhap vao 3 so nguyen : \n");
	scanf("%d %d %d", &a, &b, &c);
	
	if(c<b && c>a){
		printf("so %d nam giua %d va %d \n", c, a, b);
	}else if(c>b && c<a){
		printf("so %d nam giua %d va %d \n", c, a, b);
	}else
		printf("so %d khong nam giua %d va %d \n", c, a, b);
	}
	
	return 0;
}
