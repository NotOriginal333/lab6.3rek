#include <iostream>
#include <iomanip>
#include <time.h> 

using namespace std;
template <typename T>
T swapElements(T* r, T start, T end) {
    if (start < end) {
        T temp = r[start];
        r[start] = r[start + 1];
        r[start + 1] = temp;
        swapElements(r, start + 2, end);
    }
    return 0;
}
void Create(int* r, const int size, int i)
{
    r[i] = rand() / 100;
    if (i < size - 1)
        Create(r, size, i + 1);
}
void Print(int* r, const int size, int i)
{
    cout << setw(4) << r[i] << " ";
    if (i < size - 1)
        Print(r, size, i + 1);
    else
        cout << endl;
}
int main()
{
    srand((unsigned)time(NULL));
    const int n = 10;
    int r[n];
    Create(r, n, 0);
    Print(r, n, 0);
    swapElements(r, 1, n - 1);
    Print(r, n, 0);
    return 0;
}
