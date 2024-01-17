//Thu ngay trong tuan

#include <stdio.h>
int main(){
	int n;
	printf("n= ");
	scanf("%d",&n);
	int xet=n%7;
	switch(xet){
		case(0):
			printf("MONDAY");
			break;
		case(1):
			printf("TUESDAY");
			break;
		case(2):
			printf("WEDNESDAY");
			break;
		case(3):
			printf("THURDAY");
			break;
		case(4):
			printf("FRIDAY");
			break;
		case(5):
			printf("THURSDAY");
			break;
		case(6):
			printf("SUNDAY");
			break;
		default:
			printf("ERROR");
	}
	getchar();
	return 0;
}
