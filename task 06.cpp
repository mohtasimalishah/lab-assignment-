#include <iostream>
using namespace std;

int main()
{
    int arr[10];
    int searchValue;
    int found = 0;

    cout << "Enter 10 numbers:" << endl;

    for (int i = 0; i < 10; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter value to search: ";
    cin >> searchValue;

    for (int i = 0; i < 10; i++)
    {
        if (arr[i] == searchValue)
        {
            cout << "Value found at position " << i + 1 << endl;
            found = 1;
            break;
        }
    }

    if (found == 0)
    {
        cout << "Value not found in the array.";
    }

    return 0;
}

