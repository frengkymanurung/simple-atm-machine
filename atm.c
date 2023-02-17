#include <stdio.h>

int main() {
  int pin = 1234;
  int userPin, option;
  double balance = 1000.0, withdrawAmount, depositAmount;
  
  printf("Welcome to MyBank ATM\n");
  
  printf("Enter your PIN: ");
  scanf("%d", &userPin);
  
  if (userPin != pin) {
    printf("Invalid PIN. Please try again.\n");
    return 0;
  }
  
  printf("\nPlease choose an option:\n");
  printf("1. Check Balance\n");
  printf("2. Withdraw\n");
  printf("3. Deposit\n");
  scanf("%d", &option);
  
  switch(option) {
    case 1:
      printf("Your current balance is $%.2lf\n", balance);
      break;
    case 2:
      printf("Enter amount to withdraw: ");
      scanf("%lf", &withdrawAmount);
      
      if (withdrawAmount > balance) {
        printf("Insufficient balance.\n");
      } else {
        balance -= withdrawAmount;
        printf("Please take your cash. Your remaining balance is $%.2lf\n", balance);
      }
      
      break;
    case 3:
      printf("Enter amount to deposit: ");
      scanf("%lf", &depositAmount);
      
      balance += depositAmount;
      printf("Your new balance is $%.2lf\n", balance);
      
      break;
    default:
      printf("Invalid option selected.\n");
      break;
  }
  
  return 0;
}
