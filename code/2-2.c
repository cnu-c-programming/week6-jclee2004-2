#include <stdio.h>

int sum_2d_arr(int (*rows)[3], int size) {
    int sum=0;
    for(int i=0;i<size;i++) {
        for(int j=0;j<sizeof(*rows)/sizeof(int);j++) {
            sum += rows[i][j];
        }
    }
    return sum;
}

int main() {
    int arr[2][3] = {1,2,3,4,5,6};

    printf("%d\n",sum_2d_arr(arr,2));
}