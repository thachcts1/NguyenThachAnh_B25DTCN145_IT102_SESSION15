#include <stdio.h>

int appearTheLeast(int arr[], int length) {
    int minCount = length; 
    int value = arr[0];    

    for (int i = 0; i < length; i++) {
        int count = 0;
        for (int j = 0; j < length; j++) {
            if (arr[i] == arr[j])
                count++;
        }

       
        if (count < minCount) {
            minCount = count;
            value = arr[i];
        }
    }

    printf("Phan tu xuat hien it nhat la: %d, so lan xuat hien: %d\n", value, minCount);
    return value;
}

int main() {
    int arr[] = {1, 3, 3, 2, 4, 2, 5};
    int length = sizeof(arr) / sizeof(arr[0]);

    appearTheLeast(arr, length);

    return 0;
}

