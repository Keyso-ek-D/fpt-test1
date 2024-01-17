// Cac gia tri a+b, a-b, a*b, a/b, a*a+b*b, 1/(a+b)

#include <stdio.h>
int main(){
	int a,b;
	printf("a= ");
	scanf("%d",&a);
	printf("b= ");
	scanf("%d",&b);
	printf("%d\n",a+b);
	printf("%d\n",a-b);
	printf("%d\n",a*b);
	printf("%.2lf\n",(double)a/b);
	printf("%d\n",a*a+b*b);
	printf("%.4lf",(double) 1/(a+b));
	getchar();
	return 0;
}
