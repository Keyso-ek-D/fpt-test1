// Tim x trong phuong trinh ax=b

#include <stdio.h>
int main(){
	int a,b;
	printf("a= ");
	scanf("%d",&a);
	printf("b= ");
	scanf("%d",&b);
	if ((a==0 && b==0)){
		printf("x= infinity");
	} else if (a==0 && b!=0){
		printf("x=none");
	}else {
		printf("x= %.2lf", (double)-b/a);
	}
	getchar();
	return 0;
}
