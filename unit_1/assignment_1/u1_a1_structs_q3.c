#include <stdio.h>

typedef struct {
    char acc_no[64];
    char customer_name[128];
    int balance;
} bank_account;

void main() {
    int no_of_accounts = 5;
    bank_account accounts[no_of_accounts];
    int lt_threshold_idx[5] = { 0 };
    int has_lt_threshold_accs = 0;

    printf("Enter the account no, customer name, and balance of 5 accounts: \n");

    for (int i = 0; i < no_of_accounts; i++) {
        printf("Account No.: ");
        scanf(" %63[^\n]", accounts[i].acc_no);

        printf("Customer Name: ");
        scanf(" %127[^\n]", accounts[i].customer_name);

        printf("Balance: ");
        scanf("%d", &accounts[i].balance);
        printf("\n");

        if (accounts[i].balance < 5000) {
            lt_threshold_idx[i] = 1;
            has_lt_threshold_accs = 0;
        }
    }

    has_lt_threshold_accs > 0 ? printf("No accounts have balance less than 5000\n") : printf("No accounts have balance less than 5000\n"); 

    for (int i = 0; i < no_of_accounts; i++) {
        if (lt_threshold_idx[i] == 1) {
            printf("Account %d\n", i + 1);
            printf("Account No.: %s\n", accounts[i].acc_no);
            printf("Customer Name: %s\n", accounts[i].customer_name);
            printf("Balance: %d\n\n", accounts[i].balance);
        }
    }
}