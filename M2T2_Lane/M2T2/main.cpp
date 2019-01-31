// CSC 134
// M2T2
// Jan 29, 2019
// Khristopher lane
#include <iostream>

using namespace std;

int main()
{
    // IfElse
    int i;
    cout << "Type any number: " << endl;
    cin >> i;
    if (i > 10)
    {
        cout << "It's greater than 10." << endl;
    }
    else
    {
        cout << "It's not greater than 10." << endl;
    }
    // IfElse2
    int j;
    cout << "Type any number: " << endl;
    cin >> j;
    if ( j > 10 )
    {
        cout << "It is greater than 10. " << endl;
    }
    else if (j == 10)
    {
        cout << "It's equal to 10. " << endl;
    }
    else
    {
        cout << "It's less than 10. " << endl;
    }
    // IfElse3
    int k;
    cout << "Type any number: " << endl;
    cin >> k;
    if (k > 100)
    {
        cout << "It's a greater than 100. " << endl;
    }
    else if (k > 10)
    {
        cout << "It's a greater than 10. " << endl;
    }
    else
    {
        cout << " It's neither greater than 100 nor greater than 10. " << endl;
    }
    //ForLoop
    int x = 0;
    int l;
    for (l = 1; l <= 100; l++)
    {
        x += l;
    }
    cout << x << endl;
    // ForCountdown
    int m;
    for (m = 10; m >= 5; m--)
    {
        cout << m << endl;
    }
    // ForLoop2
    double y = 0.0;
    double n;
    for (n = 0.0; n <= 100; n+= 0.1)
    {
        y += n;
    }
    cout << y << endl;
    // WhileLoop
    int a = 0;
    while (a < 10)
    {
        cout << a << endl;
        a++;
    }
    cout << "All Finished!" << endl;
    // DoWhileLoop
    int b = 0;
    do
    {
        cout << b << endl;
        b++;
    }
    while (b <= 10);
    cout << "All Finished!" << endl;
    return 0;
}
