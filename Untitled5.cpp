#include <stdio.h>

int main() {
	int a,b,c;
	printf("Nhap so a \n");
	scanf("%d",&a);
	printf("Nhap so b \n");
	scanf("%d",&b);
	printf("Nhap so c \n");
	scanf("%d",&c);
	if(a<c<b||b<c<a)
		printf("So c nam trong khoang do");
	else
		printf("Khong nam trong khoang do");
	return 0;
}
