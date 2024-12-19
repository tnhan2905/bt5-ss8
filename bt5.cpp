#include <stdio.h>

int main() {
    int maTran[4][5] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15},
        {16, 17, 18, 19, 20}
    };
    int tong = 0;

    for (int i = 0; i < 5; i++) {
        tong += maTran[0][i] + maTran[3][i];
    }
    for (int i = 1; i < 3; i++) {
        tong += maTran[i][0] + maTran[i][4]; 
    }
    printf("Tong duong bien: %d\n", tong);
    return 0;
}
