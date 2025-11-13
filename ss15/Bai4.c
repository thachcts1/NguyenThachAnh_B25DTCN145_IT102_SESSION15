#include<stdio.h>
int tinhTong(int arr[], int n){
	int tong = 0;
	for(int i = 0; i <n; i++){
		tong = tong + arr[i];
	}
	return tong;
}
int main(){
	int arr[]={1,-2,4,6,-7,8,9};
	int size = sizeof(arr) / sizeof(int);
	int tong = tinhTong(arr, size);
	printf("Tong phan tu trong mang la:%d", tong);
	return 0;
}
	
	
		
