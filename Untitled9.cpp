#include <stdio.h> 

int main() {
	int a,b,c;
	printf("Nhap so ngay \n");
	scanf("%d",&a);
	printf("Nhap so thang \n");
	scanf("%d",&b);
	printf("Nhap so nam \n");
	scanf("%d",&c);
	if(a<31 && b<12){
		printf("ngay thang nam hop le"); 
	} 
	else{
	printf("ngay thang nam khong hop le");
}
return 0;
}
