#include <stdio.h>
int main()
{
    char product_1, product_2;
    int qty_1, qty_2;
    int price_1, price_2;

    scanf("%c %c", &product_1, &product_2);
    scanf("%d %d", &qty_1, &qty_2);
    scanf("%d %d", &price_1, &price_2);

    // printf("%c %c\n", product_1, product_2);
    // printf("%d %d\n", qty_1, qty_2);
    // printf("%d %d\n", price_1, price_2);

    int total_cost_product_1 = qty_1 * price_1;
    // printf("Cost of Product %c: %d\n", product_1, total_cost_product_1);

    int total_cost_product_2 = qty_2 * price_2;
    // printf("Cost of Product %c: %d\n", product_2, total_cost_product_2);

    int total_cost = total_cost_product_1 + total_cost_product_2;
    printf("Total Cost = %d\n", total_cost);

    return 0;
}

/*

            product_1       product_2
title:          X               Y
qty (kg):       2               3
price (tk):    300             400


*/