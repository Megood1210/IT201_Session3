#include <stdio.h>
#include <stdlib.h>
float calAvg(int* arr, int n){
    int sum=0; // Tổng số chẵn
    int count=0; //Số lần xuất hiện số chẵn
    for(int i = 0; i < n; i++){
        if(arr[i] % 2 == 0){
            sum += arr[i];
            count++;
        }
    }
    return (float)sum/count;
}
int main(){
    int n;

    printf("Nhap so phan tu trong mang: ");
    scanf("%d", &n);
    int *array = (int *)malloc(n*sizeof(int));
    if(n <= 0 || n > 1000){
        printf("So luong phan tu khong hop le\n");
        return 1;
    }

    for(int i = 0; i < n; i++){
        printf("Nhap phan tu thu %d: ", i+1);
        scanf("%d", &array[i]);
    }

    float avg = calAvg(array, n);
    printf("average = %2.f", avg);
    free(array);

    return 0;
}