//Xep hang diem trung binh


#include <stdio.h>
int main(){
	double a,b,c,d;
	scanf("%lf%lf%lf%lf",&a,&b,&c,&d);
	double tb= ((a+b+c+d)/4);
	if (tb<4){
		printf("F");
	}else if (tb>=4 && tb<6){
		printf("E");
	}else if (tb>=6 && tb<7){
		printf("D");
	}else if (tb>=7 && tb<8){
		printf("C");
	}else if (tb>=8 && tb<9){
		printf("B");
	}else {
		printf("A");
	}
	getchar();
	return 0;
}

