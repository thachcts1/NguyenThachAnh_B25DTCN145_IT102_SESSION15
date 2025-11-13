#include <stdio.h>

int timKiemNhiPhan(int arr[], int size, int x) {
    int left = 0, right = size - 1;

    while (left <= right) {
        int mid = (left + right) / 2; 

        if (arr[mid] == x)
            return mid; 
        else if (arr[mid] < x)
            left = mid + 1; 
        else
            right = mid - 1; 
    }

    return -1; 
}

int main() {
    int arr[] = {1, 3, 5, 7, 9, 11, 36};
    int size = sizeof(arr) / sizeof(arr[0]);
    int x;

    printf("Nhap gia tri can tim: ");
    scanf("%d", &x);

    int kq = timKiemNhiPhan(arr, size, x);

    if (kq != -1)
        printf("Tim thay %d tai vi tri chi so %d\n", x, kq);
    else
        printf("Khong tim thay %d trong mang\n", x);

    return 0;
}

