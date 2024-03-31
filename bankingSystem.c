#include<stdio.h>
#include<string.h>


typedef struct{
    char firstName[50];
    char lastName[50];
    long long accountNumber;
    int dateOfBirth;
    long long phoneNumber;
    double accountbalance;
}Customer;
void credit(Customer *customer, double amount){
    customer->accountbalance += amount;
    printf("Transaction is successfull!");
    printf("\nNew account balance: %.2f ",customer->accountbalance);
}
void debit(Customer *customer, double amount){
    if (customer->accountbalance>=amount)
    {
        customer->accountbalance-=amount;
        printf("Transaction is successfull!");
        printf("\nNew account balance: %.2f ",customer->accountbalance);
    }
    else{
        
        printf("Transaction failed!");
        printf("Insufficient balance.");
    }
}
void displayCustomerInfo(Customer *customer){
    printf("\n____________________________________________\n");
    printf("\nFirst name: %s",customer->firstName);
    printf("\nLast name: %s",customer->lastName);
    printf("\nAccount number:  %lld",customer->accountNumber);
    printf("\nDate of Birth(DDMMYYYY): %d ",customer->dateOfBirth);
    printf("\nPhone Number:  %lld",customer->phoneNumber);
    printf("\nAccount BaLance: %.2f",customer->accountbalance);
    printf("\n____________________________________________\n");
}
int main(){
    Customer customer;
    int choice;
    double amount;
    long long accountNumber;

    printf("Enter your first name: ");
    scanf("%s",&customer.firstName);

    printf("Enter your last name: ");
    scanf("%s",&customer.lastName);

    printf("Enter your 6-digit account number:  ");
    scanf("%lld",&customer.accountNumber);

    printf("Enter your date of birth(DDMMYYYY): ");
    scanf("%d",&customer.dateOfBirth);

    printf("Enter your 10-digit mobile number: ");
    scanf("%lld", &customer.phoneNumber);

    customer.accountbalance= 0.00;

    while(1){
        printf("\n___Banking menu___\n");
        printf("1.Credit\n");
        printf("2.Debit\n");
        printf("3.Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            printf("Enter account number for verification: ");
            scanf("%lld",&accountNumber);
            printf("Enter amount for deposit: ");
            scanf("%lf",&amount);
            if(customer.accountNumber==accountNumber){
                credit(&customer,amount);
            }
            else{
                printf("Invalid account number!");
            }
            break;
        case 2:
            printf("Enter account number for verification: ");
            scanf("%lld",&accountNumber);
            printf("Enter amount for withdrawl: ");
            scanf("%lf",&amount);
            if (customer.accountNumber==accountNumber)
            {
                debit(&customer,amount);
            }
            else{
                printf("Invalid account number!");
            }
            break;
        case 3 :
            printf("Thank you for using our banking service...");
            return 0;
        default:
            printf("Ivalid choice! Please try again...\n");
            break;
        }
        displayCustomerInfo(&customer);
    }
    return 0;
}