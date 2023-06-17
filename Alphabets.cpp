#include <iostream>
using namespace std;

int main()
{
    int i, j;
    int n;
    cout << "Enter Number: ";
    cin >> n;
    // for (i = 1; i <= n; i++)
    // {
    //     for (j = 1; j <= n; j++)
    //     {
    //         cout << char('A' + i - 1);
    //     }
    //     cout << endl;
    // }

    // // Output:-
    // // Enter Number: 6
    // // AAAAAA
    // // BBBBBB
    // // CCCCCC
    // // DDDDDD
    // // EEEEEE
    // // FFFFFF

    // for (i = 1; i <= n; i++)
    // {
    //     for (j = 1; j <= n; j++)
    //     {
    //         cout << char('A' + j - 1);
    //     }
    //     cout << endl;
    // }

    // // Output:-
    // // Enter Number: 5
    // // ABCDE
    // // ABCDE
    // // ABCDE
    // // ABCDE
    // // ABCDE

    // char ch = 65;
    // for (i = 1; i <= n; i++)
    // {
    //     for (j = 1; j <= n; j++)
    //     {
    //         cout << ch++;
    //     }
    //     cout << endl;
    // }

    // // Output:-
    // // Enter Number: 4
    // // ABCD
    // // EFGH
    // // IJKL
    // // MNOP

    // for (i = 1; i <= n; i++)
    // {
    //     for (j = 1; j <= i; j++)
    //     {
    //         cout << char('A' + i - 1);
    //     }
    //     cout << endl;
    // }

    // // Output:-
    // // Enter Number: 5
    // // A
    // // BB
    // // CCC
    // // DDDD
    // // EEEEE

    // for (i = 1; i <= n; i++)
    // {
    //     for (j = 1; j <= i; j++)
    //     {
    //         cout << char('A' + (i + j) - 2);
    //     }
    //     cout << endl;
    // }

    // // Output:-
    // // Enter Number: 5
    // // A
    // // BC
    // // CDE
    // // DEFG
    // // EFGHI

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << char('A' + n - j);
        }
        cout << endl;
    }

    // Output:-
    // Enter Number: 5
    // E
    // ED
    // EDC
    // EDCB
    // EDCBA
}