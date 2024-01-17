// Bai toan tinh thue

#include <stdio.h>
int main(){
	double luong;
	scanf("%lf",&luong);
	double thunhap=luong*12;
	if (thunhap<0 ){
		printf("Error");
	}else if (thunhap>0 && thunhap<100000000){
		printf("%.2lf",(float)(thunhap/100)*5);
	}else if (thunhap>=100000000 && thunhap<200000000){
		printf("%.2lf",((float)thunhap/100)*10);
	}else if (thunhap>=200000000 && thunhap<400000000){
		printf("%.2lf",((float)thunhap/100)*15);
	}else if (thunhap>=400000000 && thunhap<600000000){
		printf("%.2lf",((float)thunhap/100)*20);
	} else {	
		printf("%.2lf",((float)thunhap/100)*35);
	}
	getchar();
	return 0;
}

