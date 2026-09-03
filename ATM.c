#include <stdio.h>
#include <stdlib.h>

#define RED     "\033[0;31m" 
#define GREEN   "\033[0;32m" 
#define YELLOW  "\033[0;33m" 
#define MAGENTA  "\033[0;35m" 
#define CYAN      "\033[0;36m" 
#define RESET   "\033[0m"  
#define BLUE    "\x1b[34m"  

int main  () { 

        printf(MAGENTA "================= ATM SIMULATOR ================= \n" RESET); 
        printf(" \n");
        printf(CYAN "Welcome! Please select an option. \n"RESET); 
        printf(" \n");

        printf("1. Check Balance \n"); 
        printf("2. Deposit Money OR Withdraw Money \n");  
        printf("3. Exit \n"); 
        printf("---> ");    

    int n, pin, count_pinEntry = 4,  balance = 5000; 
    int m, deposit, withdraw;

        scanf("%d", &n); 

// ATM Check Balance  
 
do {

    if (n==1) { 

        printf(BLUE "==================Check Balance=================== \n" RESET); 
        printf(" \n");
        printf("Enter your ATM pin: ");

        scanf("%d", &pin);  
        count_pinEntry--; 

    do {
            
            if (pin == 595456) {
                printf(MAGENTA"Your current balance is: $%d \n"RESET, balance);
                continue;
            }

            else if (pin = !595456) {
                printf(RED "WRONG PIN--->    " RESET); 
                printf(YELLOW "Chances left: %d \n" RESET, count_pinEntry); 
            }  

            if (count_pinEntry == 0) { 
                printf(MAGENTA "Thank for using our ATM simulator! \n" RESET); 
            break;
            }
        } while (count_pinEntry >= 1);

        } 
            

// ATM Money Deposit / Money Withdraw 

    if (n==2) {  
        printf(CYAN "Select-->\n"RESET);
        printf("1. Deposit Money \n");
        printf("2. Withdraw Money \n");
        printf("---> ");
        scanf("%d", &m);

        if (m==1) {
        printf("Enter the amount to be deposited(In Dollars): "); 
        scanf("%d", &deposit); 
        balance = balance + deposit;
        }

        else if (m==2) {
        printf("Enter the amount to be withdrawn(In Dollars): "); 
        scanf("%d", &withdraw); 
        balance = balance - withdraw;
        }
        
            printf("Enter your ATM pin: "); 
            scanf("%d", &pin); 


            if (pin == 595456) {
                printf(CYAN "Your new current balance is: $%d \n" RESET, balance);
                }
            else {
                printf(RED "WRONG PIN \n" RESET);
                printf(MAGENTA "Thank for using our ATM simulator! \n" RESET);

            } 
        }
// EXIT 
        if (n==3) {
            printf(MAGENTA "Thank for using our ATM simulator! \n" RESET);
            break;
        }
        
    
} while (1); 


return 0;
}
