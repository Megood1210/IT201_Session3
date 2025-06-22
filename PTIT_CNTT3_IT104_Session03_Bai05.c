#include <stdio.h>
#include <stdlib.h>

int sumMainDiagonal(int** a, int rows, int cols) {
    int sum = 0;
    int size = rows < cols ? rows : cols;
    for (int i = 0; i < size; i++) {
        sum += a[i][i];
    }
    return sum;
}

int sumSubDiagonal(int** a, int rows, int cols){
    int sum = 0;
    int size = rows < cols ? rows : cols;
    for (int i = 0; i < size; i++) {
        sum += a[i][rows - i - 1];
    }
    return sum;
}

int main() {
    int rows, cols;

    printf("Nhap so hang trong mang: ");
    scanf("%d", &rows);
    printf("Nhap so cot trong mang: ");
    scanf("%d", &cols);

    if ((rows <= 0 || rows > 1000) && (cols <= 0 || cols > 1000)) {
        printf("So hang va so cot khong hop le\n");
        return 1;
    } else if (cols <= 0 || cols > 1000) {
        printf("So cot khong hop le\n");
        return 1;
    }

    int** a = (int**)malloc(rows * sizeof(int*));
    for (int i = 0; i < rows; i++){
        a[i] = (int*)malloc(cols * sizeof(int));
    }

    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Nhap phan tu o hang thu %d va cot thu %d: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }

    if (rows != cols){
        printf("Khong ton tai duong cheo chinh\n");
        printf("Khong ton tai duong cheo phu\n");
    }else{
        int sumMain = sumMainDiagonal(a, rows, cols);
        int sumSub = sumSubDiagonal(a, rows, cols);
        printf("Tong duong cheo chinh = %d\n", sumMain);
        printf("Tong duong cheo phu = %d\n", sumSub);
    }


    for (int i = 0; i < rows; i++) {
        free(a[i]);
    }
    free(a);

    return 0;
}
