#include <stdio.h>
int main() {

    int choice;
    float balance = 1000.0;
    float deposit; 
    float withdrawn;

    printf("========================================\n");
    printf("        Welcome to Bus Bus Bank!\n");
    printf("========================================\n");

    while (1) { 
        printf("\nYour current balance is: %.2f\n", balance);
        printf("What do you want to do?\n");
        printf("Please enter either 1, 2, 3, or 4 as your selection:\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");
        printf("Please enter your selection here: ");
        scanf("%d", &choice);

        if (choice < 1 || choice > 4) {
            printf("You entered an invalid selection, please try again\n");
        }

        if (choice == 1) {
            printf("=================================\n");
            printf("Your current balance is: %.2f\n", balance);
            printf("=================================\n");

        } if (choice == 2) {
            printf("Please enter how much you want to deposit: ");
            scanf("%f", &deposit);
            if (deposit < 0) {
                printf("You cannot deposit a negative amount, please try again. \n");
            } else {
                balance += deposit;
                printf(" \nYour new account balance is: %.2f\n \n", balance);
            }

        } if (choice == 3) {
            printf("Please enter how much you want to withdraw: ");
            scanf("%f", &withdrawn);
            if (withdrawn < 0) {
                printf("You cannot withdraw a negative amount, please try again\n");
            }if (withdrawn > balance) {
                printf("Sorry, you do not have enough money to withraw $%.2f. Please withdraw a different amount. \n", withdrawn);
            } else {
                balance -= withdrawn;
                printf("Your new account balance is: %.2f\n", balance);
            }
 
        } if (choice == 4) {
            printf("Thank you for visiting Bus Bus Bank. Please come again!\n");
        }
    } 

    return 0;
}
