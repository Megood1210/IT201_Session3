#include <stdio.h>
#include <stdlib.h>
int main(){
    int n;
    printf("Nhap so phan tu trong mang: ");
    scanf("%d", &n);
    if(n < 0){
        printf("So luong phan tu khong duoc am\n");
        return 1;
    }
    if(n == 0){
        printf("So luong phan tu phai lon hon 0 \n");
    }
    int *arr = (int *)malloc(n*sizeof(int));
    if(arr == NULL){
        printf("Khong the tao mang");
        return 1;
    }

    printf("Nhap %d phan tu cua mang: \n", n);
    for(int i = 0; i < n; i++){
        printf("Phan tu thu %d: ", i+1);
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < n; i++){
        printf("So thu %d = %d \n", i+1 ,arr[i]);
    }
    printf("\n");
    free(arr);
    return 0;
}