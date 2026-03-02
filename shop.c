// A shop offers a discount based on total purchase amount:
// o < ₹1000 → No discount
// o ₹1000–₹4999 → 5%
// o ₹5000–₹9999 → 10%
// o ≥ ₹10000 → 15%
// Compute the final bill and discount applied.

#include <stdio.h>
int main ()
{
    int purchase;
    int temp;
    int discount = 0;
    int finalBill;

    printf("Enter the total purchase amount: ");
    scanf("%d", &purchase);

    if (purchase < 1000)
    {
        temp = 0;
    }
    else if (purchase >= 1000 && purchase <= 4999)
    {
        temp = 1;
    }
    else if (purchase >= 5000 && purchase <= 9999)
    {
        temp = 2;
    }
    else
    {
        temp = 3;
    }

switch(temp)
{
    case 0:
        discount = 0;
        break;
    case 1:
        discount = purchase * 0.05;
        break;
    case 2:
        discount = purchase * 0.10;
        break;
    case 3:
        discount = purchase * 0.15;
        break;
}

finalBill = purchase - discount;

printf("Final bill: %d\n", finalBill);
printf("Discount applied: %d", discount);
    return 0;
}