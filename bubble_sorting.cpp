#include <iostream>

using namespace std;

int main()
{
    int i, j, temp;

    int a[5] = {10, 20, 43, 12, 5};

    cout << "Input list ...\n";

    for (i = 0; i < 5; i++)
    {
        cout << a[i] << "\t";
    }

    cout << endl;

    // Bubble Sort
    for (i = 0; i < 5; i++)
    {
        for (j = i + 1; j < 5; j++)
        {
            if (a[j] < a[i])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    cout << "Sorted Element List ...\n";

    for (i = 0; i < 5; i++)
    {
        cout << a[i] << "\t";
    }

    return 0;
}
