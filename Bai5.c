#include<stdio.h>
	int phan_tu_max( int mang[], int n){
		int xuat_hien_max=0;
		int phan_tu_xuat_hien_max=mang[0];
		
		for(int i =0; i<n; i++){
			int xuat_hien=0;
			for(int j=0 ; j<n; j++){
				if(mang [j]== mang[i]){
					xuat_hien++;
				}
			}
			if (xuat_hien > xuat_hien_max){
				xuat_hien_max = xuat_hien;
				phan_tu_xuat_hien_max=mang[i];	
			}
		}
			printf("\nPhan tu xuat hien nhieu nhat la: %d", phan_tu_xuat_hien_max);
    		printf("\nSo lan xuat hien: %d\n", xuat_hien_max);
		}
	int main(){
		int n ;
		printf("nhap so luong phan tu trong mang ");
		scanf("%d",&n);
		
		int mang [100];
		for (int i=0; i<n; i++){
			printf("nhap phan tu trong mang[%d] ",i);
			scanf("%d",& mang[i]);
		}
		 phan_tu_max(mang, n); 
		 
		 
    return 0;
    
    
		
		
		
	}
