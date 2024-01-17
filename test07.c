// Nhap so va nhap phep tinh mong muon

#include <stdio.h>
int main(){
	double a,b;
	char pheptinh;
	scanf("%lf%c%lf",&a,&pheptinh,&b);
	switch(pheptinh){
		case '+':
			printf("%.2lf",a+b);
			break;
		case'-':
			printf("%.2lf",a-b);
			break;
		case'*':
			printf("%.2lf",a*b);
			break;
		case':':
			printf("%.2lf",a/b);
			break;
		default:
			printf("Error");
	}
	getchar();
	return 0;
}
