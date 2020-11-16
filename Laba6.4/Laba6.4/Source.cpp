#include <iostream>
#include <string>
#include <iomanip>
using namespace std;


int* Create(const int num, const int Low, const int High)
{
    int* B = new int[num];
    for (int i = 0; i < num; i++)
        B[i] = Low + rand() % (High - Low + 1);
    return B;
}

void Print(int* B, int num)
{
    for (int i = 0; i < num; i++)
        cout << setw(5) << B[i];
    cout << endl;
}
int Product(int B[], int num)
    {
        int sum = 1;
        for (int i = 0; i < num; i++)
            if ((i % 2) == 0)
            sum *= B[i];
        return sum;
    }

int FindFirst(int B[], int num)
{
    for (int i = 0; i < num; i++)
        if (B[i] == 0)
            return i;
    return -1;
}
int FindSecond(int B[], int num)
{
    for (int i = num - 1; i >= 0; i--)
        if (B[i] == 0)
            return i;
    return -1;
}

int Suma0(int B[], int firstZeroIndex, int lastZeroIndex)
{
    int sum = 0;
    for (int i = firstZeroIndex + 1; i < lastZeroIndex; i++)
            sum += B[i];
    return sum;
}

int* Sort(int* B, const int num)
{
    int* A = new int[num];
    for (int i = 0; i < num; i++)
    {
        A[i] = B[i];
    }
    for (int i = 1; i < num; i++)
    {
        int k = 0; 
        for (int j = 0; j < num - i; j++) 
            if (A[j] < A[j + 1])
            { 
                int tmp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = tmp;
                k = 1;
            }
        if (k == 0)
            return A;
    }
    return A;
}

int main()
{
    srand((unsigned)time(NULL));
    
    int num; 
    cout << "Enter integer value: ";
    cin >> num;

   int Low = -10;
   int High = 10;
   int* StartedArr = Create(num, Low, High);
    
    Print(StartedArr, num);
    cout << "Product of elements with even position = " << Product(StartedArr, num) << endl;
   
    int firstZeroIndex = FindFirst(StartedArr, num);
    int lastZeroIndex = FindSecond(StartedArr, num);

    if (firstZeroIndex != -1)
    {
        cout << "Suma between the first zero and the second = " << Suma0(StartedArr, firstZeroIndex, lastZeroIndex) << endl;
    }
    else
    {
        cout << "There are no zero values in array to sum" << endl;
    }
    

    cout << "Modified massiv: " << endl;
    int* SortedArr = Sort(StartedArr, num);
    Print(SortedArr, num);

    
    delete[] StartedArr;
    delete[] SortedArr;
    return 0;
}

