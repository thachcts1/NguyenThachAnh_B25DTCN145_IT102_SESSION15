#include<stdio.h>
int tinhHieu(int a, int b){
	return a - b;
	}
int tinhTich(int a, int b){
	return a * b;
	}
int main(){
	int a =4,b =5;
	
	int Hieu =tinhHieu( a, b);
	printf("Hieu la: %d", Hieu);
	int Tich = tinhTich( a, b); 
	printf("Tich la: %d", Tich);
	return 0;
}
