#include <stdio.h>

int main() {
    int totalCustomers;
    float totalRevenue = 0;

    printf("Enter total number of customers: ");
    scanf("%d", &totalCustomers);

    printf("\n================ Smart Canteen Billing System ================\n");

    for (int i = 1; i <= totalCustomers; i++) {
        int numItems, code, qty;
        float total = 0, discount = 0, finalBill = 0;

        printf("\n--- Customer %d ---\n", i);
        printf("Enter number of items: ");
        scanf("%d", &numItems);

        for (int j = 1; j <= numItems; j++) {
            printf("\nEnter item code: ");
            scanf("%d", &code);
            printf("Enter quantity: ");
            scanf("%d", &qty);

            float price = 0;

            if (code == 1) price = 80;        // Sandwich
            else if (code == 2) price = 120;  // Burger
            else if (code == 3) price = 150;  // Pizza Slice
            else if (code == 4) price = 60;   // Coffee
            else if (code == 5) price = 50;   // Juice
            else {
                printf("Invalid item code! Skipping...\n");
                continue;
            }

            total += price * qty;
        }

        if (total > 500) {
            discount = 0.10 * total;
        } else {
            discount = 0;
        }

        finalBill = total - discount;
        totalRevenue += finalBill;

        printf("\nCustomer %d Bill:\n", i);
        printf("Total Bill: ₹%.2f\n", total);
        printf("Discount: ₹%.2f\n", discount);
        printf("Final Bill: ₹%.2f\n", finalBill);
        printf("==============================================================\n");
    }

    printf("\n================ Canteen Summary ================\n");
    printf("Total Customers Served: %d\n", totalCustomers);
    printf("Total Revenue: ₹%.2f\n", totalRevenue);
    printf("================================================\n");

    return 0;
}
