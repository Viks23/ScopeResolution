#include <iostream>
using namespace std;
int m = 10;

int main()
{
    int m = 20;
    {
        int k = m;
        int m = 30;

        cout << "We are in the inner block \n";
        cout << "k = " << k << "\n";
        cout << "m = " << m <<"\n";
        cout << "::m = " << ::m << "\n";
    }

    cout << "\nWe are in the outer block \n";
    cout << "m = "  << m << "\n";
    cout << "::m = " << ::m << "\n";

return 0;

}