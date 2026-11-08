#include <stdio.h>

int main(void) {
    int price, discount = 0, total;

    printf("Shopping Amount (TL): ");
    scanf("%d", &price);

    if (price < 500) {
        discount = 0;
    }
    else if (price <= 999) {
        discount = price * 10 / 100;
    }
    else if (price <= 1999) {
        discount = price * 15 / 100;
    }
    else {
        discount = price * 20 / 100;
    }

    total = price - discount;

    printf("Discount: %d TL\n", discount);
    printf("Final shopping amount: %d TL\n", total);

    return 0;
}
