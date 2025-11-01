#include <stdio.h>

int main() {
    int numCustomers;
    printf("Enter number of customers: ");
    scanf("%d", &numCustomers);

    float totalRevenue = 0.0, highestBill = 0.0;
    int totalFeedback = 0;

    for (int i = 1; i <= numCustomers; i++) {
        int numItems;
        printf("\nCustomer %d:\n", i);
        printf("Enter number of items: ");
        scanf("%d", &numItems);

        float subtotal = 0.0;

        for (int j = 1; j <= numItems; j++) {
            float price;
            int qty;
            printf("Enter price of item %d: ", j);
            scanf("%f", &price);
            printf("Enter quantity of item %d: ", j);
            scanf("%d", &qty);

            subtotal += price * qty;
        }

        float gst = 0.05 * subtotal;
        float finalBill = subtotal + gst;
        printf("Subtotal: ₹%.2f\n", subtotal);
        printf("GST (5%%): ₹%.2f\n", gst);
        printf("Final Bill: ₹%.2f\n", finalBill);

        int feedback;
        do {
            printf("Enter feedback rating (1-5): ");
            scanf("%d", &feedback);
            if (feedback < 1 || feedback > 5)
                printf("Invalid rating! Please enter a value between 1 and 5.\n");
        } while (feedback < 1 || feedback > 5);

        totalRevenue += finalBill;
        totalFeedback += feedback;

        if (finalBill > highestBill)
            highestBill = finalBill;
    }

    float avgFeedback = (float)totalFeedback / numCustomers;

    printf("\n--- Restaurant Bill Summary ---\n");
    printf("Total Revenue Today: ₹%.2f\n", totalRevenue);
    printf("Average Feedback Rating: %.2f\n", avgFeedback);
    printf("Highest Single-Customer Bill Amount: ₹%.2f\n", highestBill);

 return 0;

}
