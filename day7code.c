#include <stdio.h>

int main() {
    int choice;
    float balance = 10000;  // Initial balance
    float amount, bonus;
    const float service_charge = 5;

    printf("=== Welcome to Smart Bank Account Manager ===\n");

    do {
        // Display menu
        printf("\n-------- MENU --------\n");
        printf("1. Deposit Money\n");
        printf("2. Withdraw Money\n");
        printf("3. Check Balance\n");
        printf("4. Exit\n");
        printf("----------------------\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: // Deposit
                printf("Enter amount to deposit: ");
                scanf("%f", &amount);
                if (amount <= 0) {
                    printf("Invalid deposit amount!\n");
                    break;
                }

                // Apply bonus if deposit > 25,000
                if (amount > 25000) {
                    bonus = amount * 0.01;
                    printf("Bonus of ₹%.2f added!\n", bonus);
                    amount += bonus;
                }

                balance += amount;
                balance -= service_charge; // Service charge
                printf("Service charge ₹%.2f applied.\n", service_charge);
                printf("Updated Balance: ₹%.2f\n", balance);
                break;

            case 2: // Withdraw
                printf("Enter amount to withdraw: ");
                scanf("%f", &amount);
                if (amount <= 0) {
                    printf("Invalid withdrawal amount!\n");
                } else if (amount > balance) {
                    printf("Withdrawal not allowed! Insufficient balance.\n");
                } else {
                    balance -= amount;
                    balance -= service_charge; // Service charge
                    printf("Service charge ₹%.2f applied.\n", service_charge);
                    printf("Updated Balance: ₹%.2f\n", balance);
                }
                break;

            case 3: // Check balance
                printf("Your current balance is: ₹%.2f\n", balance);
                break;

            case 4: // Exit
                printf("Thank you for banking with us!\n");
                break;

            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 4);

    return 0;
}
