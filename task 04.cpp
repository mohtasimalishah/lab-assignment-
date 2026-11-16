
#include <iostream>
using namespace std;

int main()
{
    int num, originalNum, remainder;
    int result = 0;
    int digits = 0;

    cout << "Enter a number: ";
    cin >> num;

    originalNum = num;

    int temp = num;

    while (temp > 0)
    {
        digits++;
        temp = temp / 10;
    }

    temp = num;

    while (temp > 0)
    {
        remainder = temp % 10;

        int power = 1;

        for (int i = 1; i <= digits; i++)
        {
            power = power * remainder;
        }

        result = result + power;
        temp = temp / 10;
    }

    if (result == originalNum && originalNum >= 0)
    {
        cout << originalNum << " is an Armstrong number.";
    }
    else
    {
        cout << originalNum << " is not an Armstrong number.";
    }

    return 0;
}

