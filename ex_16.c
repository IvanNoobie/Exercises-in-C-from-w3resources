/// www.w3resourse.com
/// C Basic Declarations and Expressions
/// EXERCISE 16 of 72

#include <stdio.h>

int main()
{
    int amount;
    int balance;
    
    printf("Please, enter the amount:\n");
    scanf("%d", &amount);
    printf("There are:\n");
    balance = amount / 100;
    printf("%d $100 Note(s)\n",balance);
    amount = amount - balance * 100;
    balance = amount / 50;
    printf("%d $50 Note(s)\n",balance);
    amount = amount - balance * 50;
    balance = amount / 20;
    printf("%d $20 Note(s)\n",balance);
    amount = amount - balance * 20;
    balance = amount / 5;
    printf("%d $5 Note(s)\n",balance);
    amount = amount - balance * 5;
    balance = amount / 2;
    printf("%d $2 Note(s)\n",balance);
    amount = amount - balance * 2;
    balance = amount;
    printf("%d $1 Note(s)\n",balance);
    
    return 0;
}
