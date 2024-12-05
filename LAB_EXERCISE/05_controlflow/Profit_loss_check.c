#include <stdio.h>

int main() {
    float cost_price, selling_price, profit, loss;


    printf("Enter the cost price of the item: ");
    scanf("%f", &cost_price);
    printf("Enter the selling price of the item: ");
    scanf("%f", &selling_price);

    // Check if it's a profit or a loss
    if (selling_price > cost_price) {
        // Profit case
        profit = selling_price - cost_price;
        printf("You made a profit of: %.2f\n", profit);
    } else if (selling_price < cost_price) {
        // Loss case
        loss = cost_price - selling_price;
        printf("You incurred a loss of: %.2f\n", loss);
    } else {
        // No profit, no loss
        printf("No profit, no loss. The selling price is equal to the cost price.\n");
    }

  
}
