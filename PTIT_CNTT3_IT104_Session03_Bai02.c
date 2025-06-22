#include <stdio.h>
#include <stdlib.h>
int main(){
    int n;

    printf("Nhap so phan tu trong mang: ");
    scanf("%d", &n);
    int *array = (int *)malloc(n*sizeof(int));
    if(n < 0){
        printf("So luong phan tu khong duoc am\n");
        return 1;
    }
    if(n == 0){
        printf("So luong phan tu phai lon hon 0 \n");
        return 1;
    }
    if(array == NULL){
        printf("Khong the tao mang");
        exit(1);
    }
    for(int i = 0; i < n; i++){
        printf("Nhap phan tu thu %d: ", i+1);
        scanf("%d", &array[i]);
    }
    int max = array[0];
    for(int i = 1; i < n; i++){
        if(array[i] > max){
            max = array[i];
        }
    }
    printf("max = %d", max);
    free(array);

    return 0;
}