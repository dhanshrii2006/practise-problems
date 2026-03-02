// Given a number, rotate its digits to the right by K positions and print the new number.
//example: if the number is 12345 and K is 2, the output should be 45123. 

#include <stdio.h>

int main()
{
    int number, position;
    printf("Enter a number: ");
    scanf("%d", &number);
    printf("Enter postion with index 0 as start: ");
    scanf("%d", &position);

int divisor = 1;
for (int i = 1; i <= position; i++)
{
    divisor *= 10; //divisor to understand how many digits we need to rotate. for example, if position is 2, divisor will be 100, which means we need to rotate the last 2 digits of the number.
}
int LD = number % divisor; // gives last K digits of the number. remainder operator 
int RD = number / divisor; // gives remaining digits of the number. division operator
int rotatedNumber = LD * (divisor * 10) + RD; // this calculates the rotated number by multiplying the last digits by the divisor times 10 and adding the remaining digits. DIVISOR is multiplied to make a space for remaining digits to be added at the end. 
printf("The rotated number is: %d\n", rotatedNumber);
return 0;
}
// dry run: 12345,2
// divisor = 1*10*10 = 100
//  lD = 12345 % 100 = 45
// RD = 12345 / 100 = 123
// rotatedNumber = 45 * (100*10) + 123 = 45000 + 123 = 45123

// with index 0 we see 0 in output 
//     int divisor = 1;
//     for (int i = 1; i < position; i++)
//     {
//         divisor *= 10; .
//     }

//     int lastDigits = number % divisor; 

//     int remainingDigits = number / divisor;

//     int rotatedNumber = lastDigits * (divisor * 10) + remainingDigits; 

//     printf("The rotated number is: %d\n", rotatedNumber);
//     return 0;
// }
// dry run: 12345,3
// divisor = 1*10*10*10 = 1000
// lastDigits = 12345 % 1000 = 345
// remainingDigits = 12345 / 1000 = 12
// rotatedNumber = 345 * (1000*10) + 12 = 345000 + 12 = 345012

