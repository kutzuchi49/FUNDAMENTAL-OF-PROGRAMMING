#include <stdio.h>

int main() {
    float vegetable = 54.5;
    float fruit_min = 120, fruit_max = 150;
    float milk = 90;
    float soap = 29.45;
    float shampoo = 140;
    float quantity, fruit_price;
    float total, payment, change;
    char again;

    do {
        total = 0;

        printf("\nWhat do you want to purchase?\n");

    
        printf("Vegetable (₱54.5/kg) = ");
        scanf("%f", &quantity);
        total += quantity * vegetable;

        
        printf("Fruits (₱120-150/kg) = ");
        scanf("%f", &quantity);
        printf("Enter price per kg for fruits (₱120 - ₱150): ");
        scanf("%f", &fruit_price);
        if (fruit_price >= fruit_min && fruit_price <= fruit_max) {
            total += quantity * fruit_price;
        } else {
            printf("Invalid fruit price. Skipping fruits.\n");
        }

        
        printf("Milk (₱90/pack) = ");
        scanf("%f", &quantity);
        total += quantity * milk;

        
        printf("Soap (₱29.45/bar) = ");
        scanf("%f", &quantity);
        total += quantity * soap;

        
        printf("Shampoo and Conditioner (₱140/bottle) = ");
        scanf("%f", &quantity);
        total += quantity * shampoo;

        
        printf("\nTotal purchase: ₱%.2f\n", total);

        
        do {
            printf("Enter your payment: ₱");
            scanf("%f", &payment);

            if (payment < total) {
                printf("Insufficient payment. Please try again.\n");
            }

        } while (payment < total);

        change = payment - total;
        printf("Your change: ₱%.2f\n", change);

        
        printf("Do you want to purchase again (Y/N)? ");
        scanf(" %c", &again);  

    } while (again == 'Y' || again == 'y');

    printf("Thank you for shopping!\n");

    return 0;
}
