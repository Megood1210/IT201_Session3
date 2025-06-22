#include <stdio.h>
#include <stdlib.h>

int findMax(int** a, int rows, int cols) {
    int max = a[0][0];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (a[i][j] > max) {
                max = a[i][j];
            }
        }
    }
    return max;
}

int findMin(int** a, int rows, int cols) {
    int min = a[0][0];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (a[i][j] < min) {
                min = a[i][j];
            }
        }
    }
    return min;
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
    for (int i = 0; i < rows; i++) {
        a[i] = (int*)malloc(cols * sizeof(int));
    }

    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Nhap phan tu o hang thu %d va cot thu %d: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }

    int max = findMax(a, rows, cols);
    int min = findMin(a, rows, cols);

    printf("Gia tri lon nhat: %d\n", max);
    printf("Gia tri nho nhat: %d\n", min);

    for (int i = 0; i < rows; i++) {
        free(a[i]);
    }
    free(a);

    return 0;
}
