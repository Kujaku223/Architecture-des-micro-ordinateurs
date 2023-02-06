#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

// void terme1(int &a, int &i, int &weight, int &sum1, int &j, int &sum2)
// {
//     while (true)
//     {
//         if (i == 0)
//         {
//             j = a;
//             sum2 = a * a;
//             return;
//         }

//         else
//         {
//             i -= weight;
//             sum1 += i;
//         }
//     }
// }

int main()
{
    int weight = 1;

    int a = 7;
    int i = a;
    int sum1 = a;

    int sum2 = 0;
    int j = 0;
    int result = 0;

    while (i != 0)
    {
        j = a;
        sum2 = a * a;
        i -= weight;
        sum1 += i;
    }
    j = a;
    sum2 = a * a;

    while (j != 0)
    {
        j -= weight;
        sum2 += j * j;
    }

    result = sum1 * sum1 - sum2;
    printf("%d", result);
    return 0;
}