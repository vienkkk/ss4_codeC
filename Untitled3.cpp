#include <stdio.h>

int main(){
	int a; 
	printf("Nhap so a ");
	scanf("%d",&a);
	if(a%3==0 & a%5==0){
		printf("so chia het cho ca 3 va 5\n"); 
	} 
	if(a%3==0 || a%5==0  ){
		printf("chia het \n"); 
	} else{
		printf("khong chia het \n"); 
	} 
	return 0; 
} 
