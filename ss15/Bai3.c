#include<stdio.h>
int dao_nguoc(int n){
     int dao_nguoc=0;
     while(n !=0){
     	int m = n%10;
     	dao_nguoc=dao_nguoc*10+m;
     	n=n/10;
     	}
     	return dao_nguoc;
    }

int main(){
	int n, ket_qua;
	printf(" Nhap so :");
	scanf("%d", &n);
	ket_qua= dao_nguoc(n);
	printf(" so dao nguoc la :%d", ket_qua);
	return 0;
}
	
