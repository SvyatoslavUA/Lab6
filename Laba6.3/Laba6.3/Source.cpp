#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

template < typename T >
void Print(T* B, const int size)
{
    for (int i = 0; i < size; i++)
        cout << setw(5) << B[i];
    cout << endl;
}

int Suma(int B[])
{
    {
        int sum = 0;
        for (int i = 0; i < 5; i++)
            if ((i % 2) == 0)
                sum += B[i];
        return sum;
    }
}

int main()
{
    const int i = 5;
    int B[i];
    for (int i = 0; i < 5; i++)

    {
        cout << "B [" << i << "]= ";
        cin >> B[i];
    }
    {
        cout << "Original masive" << endl;
        Print<int>(B, i);
        cout << endl;
    }
    {
      cout << "B = " << Suma(B) << endl;
    }
    return 0;
}



