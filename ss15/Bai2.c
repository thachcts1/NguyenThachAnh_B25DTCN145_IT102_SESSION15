#include<stdio.h>
int tong(int n){
	int tong = 0;
	while(n > 0){
		int m = n%10;
		tong = tong + m;
		n = n/10;
	}
	return tong;
}
int main(){
	int n, ket_qua;
	printf(" Nhap so nguyen: ");
	scanf("%d", &n);
	ket_qua= tong(n);
	printf("Ket qua la:%d",ket_qua);
	
	return 0;
}
	
