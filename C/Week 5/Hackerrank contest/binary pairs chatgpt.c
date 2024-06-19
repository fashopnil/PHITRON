#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        int n;
        scanf("%d", &n);
        char s[n+1];
        scanf("%s", s);
        int counter = 0;
        char prev = s[0];
        for (int j = 1; j < n; j++) {
            if (s[j] != prev) {
                counter++;
                prev = s[j];
            }
        }
        printf("%d\n", counter);
    }
    return 0;
}