#include <stdio.h>

void funcion1(int arr1[], int arr2[]) {
    int j = 0;
    for (int i = 0; i < 10; i++) {
        if (arr1[i] % 2 == 0) {
            arr2[j] = arr1[i];
            j++;
        }
    }
}

int main() {
    int x[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int y[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    funcion1(x, y);
    printf("Los números pares son: ");  
    for (int i = 0; i < 10; i++) {
        printf(" %d ", y[i]);
    }
    printf("\n");
    return 0;
}