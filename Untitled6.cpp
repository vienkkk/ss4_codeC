#include <stdio.h>

int main(){
	int a,b,sodien,tiendien; 
	printf("Nhap so cong to dien dau thang  \n");
	scanf("%d",&a);
	printf("Nhap so cong to dien cuoi thang  \n");
	scanf("%d",&b);
	sodien=b-a;
	if(0<=sodien<50){
		tiendien=sodien*10000;
	}
	if(50<=sodien<100){
		tiendien=sodien*15000; 
	} 
	if(100<=sodien<150){
		tiendien=sodien*20000; 
	} 
	if(150<=sodien<200){
		tiendien=sodien*25000; 
	} 
	if(200<=sodien){
		tiendien=sodien*30000; 
	} 
	printf("Tien dien thang này %d\n",tiendien); 
	return 0; 
}
