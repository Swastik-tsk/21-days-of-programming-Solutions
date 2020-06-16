#include <iostream>
#include<conio.h>

void main()
{
    int i, j;
    char ch = 'A';
    int n, spc;
    int ctr = 1;
    cout << " Input the number of Letters (less than 26) in the Pyramid: ";
    cin >> n;
    for (i = 1; i <= n; i++) {
        for (spc = 1; spc <= n - i; spc++)
            cout << "  ";
        for (j = 0; j <= (ctr / 2); j++) 
        {
            cout << ch++ << " ";
        }
        ch = ch - 2;
        for (j = 0; j < (ctr / 2); j++) 
        {
            cout << ch-- << " ";
        }
        ctr = ctr + 2;
        ch = 'A';
        cout << endl;
    }
}
