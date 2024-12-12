#include <stdio.h>

int main() {
	int a,b,c;
	printf("Nhap so a \n");
	scanf("%d",&a);
	printf("Nhap so b \n");
	scanf("%d",&b);
	printf("Nhap so c \n");
	scanf("%d",&c);
	if(a+b>c & a+c>b & b+c>a){
		printf("ba canh hop le"); 
	} 
	else{
	printf("ba canh khong hop le");
}
return 0;
}
