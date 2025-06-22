#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, m;

    printf("Nhap so phan tu trong mang: ");
    scanf("%d", &n);
    if(n <= 0 || n > 1000){
        printf("So luong phan tu khong hop le\n");
        return 1;
    }

    int* arr = (int*)malloc(n * sizeof(int));
    if(arr == NULL){
        printf("Khong the tao mang");
        return 1;
    }

    for(int i = 0; i < n; i++){
        printf("Nhap phan tu thu %d: ", i+1);
        scanf("%d", &arr[i]);
    }

    printf("Nhap so phan tu muon them: ");
    scanf("%d", &m);

    int *newArr = (int*)realloc(arr,(n+m) * sizeof(int));
    if(newArr == NULL){
        printf("Khong the tao mang");
        free(arr);
        return 1;
    }

    for(int i = n; i < n + m; i++){
        printf("Nhap phan tu moi thu %d: ", i+1);
        scanf("%d", &newArr[i]);
    }

    printf("Mang sau khi them: \n");
    for(int i = 0; i < n + m; i++){
        printf("%d ", newArr[i]);
    }
    printf("\n");
    free(newArr);
    return 0;
}
