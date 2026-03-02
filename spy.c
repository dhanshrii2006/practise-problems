//Given a number, determine whether it is a spy number (sum of digits equals
// product of digits)

#include <stdio.h>
int main()
{
    int num;
    int  temp;
    int arr[10];

    int  sum = 0, product = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    int i;

    while (temp > 0)
{
   arr[i] = temp % 10; // % gives remainder (last digit)
    temp /= 10; // / gives quotient (removes last digit)
    i++;

}

for (int j = 0; j < i; j++) 
{
    sum = sum + arr[j];
    product = product * arr[j];
}

if (sum == product)
{
   printf("is spy");
}
else
{
    printf("not spy");
}
return 0;
}

