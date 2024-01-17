// Tinh tien xe 

#include <stdio.h>
int main(){
	int km;
	printf("km=");
	scanf("%d",&km);
	if (km<=1){
		printf("15000");
	}else if (km<=10){
		printf("%d",km*15000);
	}else {
		printf("%d",km*15000+ (km-10)*5000);
	}
	getchar();
	return 0;
}
