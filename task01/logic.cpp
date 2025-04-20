#include "logic.h"

string even_ñolumns(int matrix[3][3]) {
    string result = "";
    for (int j = 0; j < 3;j++) {
        bool even = true;
        for (int i = 0; i < 3; i++) {
            if (matrix[i][j] % 2 != 0) {
                even = false;
                break;
            }
        }
result += even == true? to_string(j + 1) + " " : "";
    }
    return result;
}

void negative_diagonal_columns(int matrix[3][3]) {
    for (int j = 0; j < 3; j++) {
        if (matrix[j][j] < 0) {
            int sum = 0;
            for (int i = 0; i < 3; i++) {
                sum += matrix[i][j];
            }
            cout << "column: " << j << ", sum: " << sum << endl;
        }
    }
}

void max_odd_sum_row(int matrix[3][3]) {
    int maxsum = -1, maxrowindex = -1;

    for (int i = 0; i < 3; i++) {
        bool odd = true;
        int sum = 0;
        for (int j = 0; j < 3; j++) {
            if (matrix[i][j] % 2 == 0) {
                odd = false;
                break;
            }
            sum += (matrix[i][j] < 0) ? -matrix[i][j] : matrix[i][j];
        }
        if (odd > maxsum && sum > maxsum) {
            maxsum = sum;
            maxrowindex = i;
        }
    }

    if (maxrowindex != -1) {
        for (int j = 0; j < 3; j++) {
            cout << matrix[maxrowindex][j] << " ";
        }
    }
}

void min_column(int matrix[3][3], int n) {
    int minp = 1e9, minc = -1;

    for (int j = 0; j < 3; j++) {
        bool valid = true;
        int product = 1;

        for (int i = 0; i < 3; i++) {
            if (matrix[i][j] < -n || matrix[i][j] > n) {
                valid = false;
                break;
            }
            product *= matrix[i][j];
        }

        if (valid < minp && product < minp) {
            minp = product;
            minc = j;
        }
    }

    if (minc != -1) {
        for (int i = 0; i < 3; i++) {
            cout << matrix[i][minc] << " ";
        }
    }
}