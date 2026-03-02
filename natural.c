// .Given a number, check whether it can be expressed as the sum of
// consecutive natural numbers.

// ex: 15 can be expressed as 1 + 2 + 3 + 4 + 5, so the output should be "Yes".
// ex: 11 is 1+1 = 2 not 11 so the output should be "No".
// input n -> add conseecutive natural numbers starting from 1 -> if the sum equals n, then print "Yes" -> if the sum exceeds n, then print "No".

#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int found = 0;

    // try every starting point
    for (int start = 1; start < num; start++)
    {
        int sum = 0;

        for (int i = start; sum < num; i++)
        {
            sum += i;

            if (sum == num)
            {
                found = 1;
                break;
            }
        }

        if (found)
            break;
    }

    if (found)
        printf("Yes\n");
    else
        printf("No\n");

    return 0;
}