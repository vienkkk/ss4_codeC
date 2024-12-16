#include <stdio.h>

int main() {
    int a, b, c, i, j, k; 
    printf("So a: ");
    scanf("%d", &a);
    printf("So b: ");
    scanf("%d", &b);
    printf("So c: ");
    scanf("%d", &c);
    if(a>b){
    	k=a;
		j=b;
		i=c; 
	} 
	if(b>a){
		k=b;
		j=a;
		i=c; 
	} 
	if(c>a){
		k=c;
		j=b;
		i=a; 
	} 
 
    printf("Thu tu tu nho den lon: %d %d %d\n", i, j, k);

    return 0;
}

