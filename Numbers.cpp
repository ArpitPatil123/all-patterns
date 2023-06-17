#include <iostream>
using namespace std;

int main()
{
    int i, j;
    int n;
    // int count = 1;
    cout << "Enter number: ";
    cin >> n;

    // for (i = 1; i <= n; i++)
    // {
    //     for (j = 1; j <= i; j++)
    //     {
    //         cout << i;
    //     }
    //     cout << endl;
    // }
    // // Output:-
    // // Enter number: 5
    // // 1
    // // 22
    // // 333
    // // 4444
    // // 55555

    // for (i = 1; i <= n; i++)
    // {
    //     for (j = 1; j <= i; j++)
    //     {
    //         cout << count++ << " ";
    //     }
    //     cout << endl;
    // }
    // // Enter number: 5
    // // 1
    // // 2 3
    // // 4 5 6
    // // 7 8 9 10
    // // 11 12 13 14 15

    // for (i = 1; i <= n; i++)
    // {
    //     for (j = 1; j <= i; j++)
    //     {
    //         cout << (i - j + 1) << " ";
    //     }
    //     cout << endl;
    // }
    // // Enter number: 6
    // // 1
    // // 2 1
    // // 3 2 1
    // // 4 3 2 1
    // // 5 4 3 2 1
    // // 6 5 4 3 2 1

    // int count;
    // for (i = 1; i <= n; i++)
    // {
    //     count = 1;
    //     for (j = 1; j <= (n * 2) - 1; j++)
    //     {
    //         if (j >= ((n + 1) - i) && j <= ((n - 1) + i))
    //         {
    //             cout << count;
    //             if (j <= (n * 2 - 1) / 2)
    //             {
    //                 count++;
    //             }
    //             else
    //             {
    //                 count--;
    //             }
    //         }
    //         else
    //         {
    //             cout << " ";
    //         }
    //     }
    //     cout << endl;
    // }

    // // Output:-
    // // Enter number: 5
    // //     1
    // //    121
    // //   12321
    // //  1234321
    // // 123454321

    // for (i = 1; i <= n; i++)
    // {
    //     int count = 1;
    //     for (j = 1; j <= n; j++)
    //     {
    //         if (i != 1 && j > (n + 1) - i)
    //         {
    //             cout << "*";
    //         }
    //         else
    //         {
    //             cout << count++;
    //         }
    //     }
    //     // count = 5;
    //     for (j = 1; j <= n; j++)
    //     {
    //         if (i != 1 && j <= (i - 1))
    //         {
    //             cout << "*";
    //         }
    //         else
    //         {
    //             cout << --count;
    //         }
    //     }
    //     cout << endl;
    // }

    // // Output:-
    // // Enter number: 6
    // // 123456654321
    // // 12345**54321
    // // 1234****4321
    // // 123******321
    // // 12********21
    // // 1**********1
}