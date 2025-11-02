#include <stdio.h>

int main() {
    int n, i;
    float price, qty, total = 0, gst, final;

    printf("Enter number of items: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        printf("\nEnter price and quantity of item %d: ", i);
        scanf("%f %f", &price, &qty);
        total += price * qty;
    }

    gst = total * 0.05;
    final = total + gst;

    printf("\nTotal = %.2f", total);
    printf("\nGST (5%%) = %.2f", gst);
    printf("\nFinal Bill = %.2f\n", final);
    return 0;
}