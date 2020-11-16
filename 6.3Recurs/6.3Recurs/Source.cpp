#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

void Input(int* B, const int size, int n) 
{
    cout << "B[" << n << "] = "
        ;
    cin >> B[n];

    if (n < size
        - 1)
        Input(B, size, n + 1);
    else
        cout << endl;
}
void Print(int* B, const int size, int n)
{
    cout << setw(4) << B[n];
    if (n < size - 1)
        Print(B, size, n + 1);
    else
        cout << endl;
}

int Suma(int* B, const int n, int i)
{
    if (i < n)
    {
        if ((i % 2) == 0) {
            return B[i] + Suma(B, n, i + 1);
        }
        else {
            return Suma(B, n, i + 1);
        }

    }
    else
        return 0;
}

int main()
{
    const int n = 5;
    int B[n];

    Input(B, n, 0);
 
    cout << "Original masive" << endl;
    Print(B, n, 0);
    cout << endl;

    cout << "Suma = " << Suma(B, n, 0) << endl;
    
    return 0;
}