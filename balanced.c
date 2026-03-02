//  A number is called balanced if the sum of digits at even positions equals the
// sum of digits at odd positions.
#include <stdio.h>
#include <string.h>

int balance(char num[])
{
    int odd = 0;
    int even = 0;

    int len = strlen(num);

    for (int i = 0; i < len; i++)
    {
        int digit = num[i];

        if ((i + 1) % 2 == 0)
        {
            even = even + digit;
        }
        else
        {
            odd = odd + digit;
        }
            return odd = even;
    }


int main()
{
    char n[100];

    scanf("%s", n); // Read the number as a string to handle large numbers
    // diffrence between &n and n is that &n gives the address of the array n, while n gives the address of the first element of the array.

    if(balance(num))
    {
        printf("balanced");
    
    }
else 
{
    printf("not balanced");
}
    return 0;
}