#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    printf("Welcome to the programing\n");

    float A[3][3];
    float B[3][3];
    float C[3][3];

    printf("행렬 A 의 각 원소를 차례대로 입력하세요\n");
    typein_matrix(A);
    printf("행렬 A 를 출력한 결과는 다음과 같습니다. \n");
    print_matrix(A);

    printf("행렬 B 의 각 원소를 차례대로 입력하세요\n");
    typein_matrix(B);
    printf("행렬 A 를 출력한 결과는 다음과 같습니다. \n");
    print_matrix(B);
    printf("%d\n", calculate_determinant(A));

    inverse_matrix(A, C);

    print_matrix(C);

    return 0;
}

void typein_matrix(float A[3][3])
{
    printf("type in matrix\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++){
            scanf("%f", &A[i][j]);
        }
    }
}
void print_matrix(float A[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%f ", A[i][j]);
        }
        printf("\n");
    }
}

void add_matrix(float A[3][3], float B[3][3], float C[3][3]) {
    int i, j;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
}

void substract_matrix(float A[3][3], float B[3][3], float C[3][3]) {

    int i, j;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            C[i][j] = A[i][j] - B[i][j];
        }
    }
}

void multiply_matrix(float A[3][3], float B[3][3], float C[3][3]) {
    int r, c, i;
    float result = 0;

    for (r = 0; r < 3; r++) {
        for (i = 0; i < 3; i++) {
            for (c = 0; c < 3; c++) {
                result += (A[r][c] * B[c][i]);
            }
            C[r][i] = result;
            result = 0;
        }
    }
}

float calculate_determinant(float A[3][3]) {
    float result;

    result = A[0][0] * (A[1][1] * A[2][2] - A[2][1] * A[1][2])
        - A[0][1] * (A[1][0] * A[2][2] - A[2][0] * A[1][2])
        + A[0][2] * (A[1][0] * A[2][1] - A[2][0] * A[1][1]);

    return result;
}

void inverse_matrix(float A[3][3], float C[3][3]) {

    int i, j;

    if (calculate_determinant(A) == 0) {
        printf("행렬식이 존재하지 않습니다.\n");
        for (i = 0; i < 3; i++) {
            for (j = 0; j < 3; j++) {
                C[i][j] = 0;
            }
        }
    }

    else {

        C[0][0] = (A[1][1] * A[2][2] - A[2][1] * A[1][2]) / calculate_determinant(A);
        C[0][1] = -(A[1][0] * A[2][2] - A[2][0] * A[1][2]) / calculate_determinant(A);
        C[0][2] = (A[1][0] * A[2][1] - A[2][0] * A[1][1]) / calculate_determinant(A);

        C[1][0] = -(A[0][1] * A[2][2] - A[2][1] * A[0][2]) / calculate_determinant(A);
        C[1][1] = (A[0][0] * A[2][2] - A[2][0] * A[0][2]) / calculate_determinant(A);
        C[1][2] = -(A[0][0] * A[2][1] - A[2][0] * A[0][1]) / calculate_determinant(A);

        C[2][0] = (A[0][1] * A[1][2] - A[1][1] * A[0][2]) / calculate_determinant(A);
        C[2][1] = -(A[0][0] * A[1][2] - A[1][0] * A[0][2]) / calculate_determinant(A);
        C[2][2] = (A[0][0] * A[1][1] - A[1][0] * A[0][1]) / calculate_determinant(A);

    }


}

