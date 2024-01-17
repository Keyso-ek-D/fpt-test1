// Xet x theo thuoc tinh

#include <stdio.h>
int main(){
	int x;
	printf("x= ");
	scanf("%d",&x);
	if (x>0){
		printf("Positive\n");
	}
	if (x%10==0){
		printf("0\n");
	}
	if (x%100==0){
		printf("00\n");
	}
	printf("End");
	getchar();
	return 0;
}
