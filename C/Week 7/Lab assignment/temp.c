#include<stdio.h>

int main() {
    int n, i, sum = 0;
    scanf("%d", &n);
    int array[n];
    
    for (i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }
    
    for (i = 0; i < n; i++) {
        if (i % 2 == 1 && array[i] % 2 == 1) {
            sum += i + array[i];
        } else if (i % 2 == 0 && array[i] % 2 == 0) {
            sum += i + array[i];
        }
    }
    
    printf("%d", sum);

    return 0;
}