#include <iostream>
using namespace std;
int main()
{
    int i = 1;

    // Цикличен алгоритъм с постусловие
    do
    {
        cout << i << " ";
        i++; // i = i + 1;
    } while (i < 100);

    return 0;
}