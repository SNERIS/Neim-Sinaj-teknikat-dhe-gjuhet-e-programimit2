#include<stdio.h>

int main() {
    int n;
    printf("Jep numrin: ");
    scanf("%d", &n);

    // Loop nga 1 deri në n për të printuar numrin e rreshtave
    for (int i = 1; i <= n; i++) {
        // Printimi i hapësirës së nevojshme për të ndarë yjet
        for (int j = 1; j <= n - i; j++) {
            printf("-");
        }
        // Printimi i yjeve në rreshtin aktual
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        // Shkimi në rreshtin e ardhshëm
        printf("\n");
    }

    return 0;
}
