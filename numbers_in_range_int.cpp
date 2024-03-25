 ﻿#include <iostream>

using namespace std;
 
 
void check(int p_number1, int p_number2, int p_number3) {
    if (p_number1 >= 20 && p_number1 <= 50 && p_number2 >= 20 && p_number2 <= 50 && p_number3 >= 20 && p_number3 <= 50)
    {
        cout << "\nthese numbers are in range"; 
    }
    else
    {
        cout << "\nnumbers are out of range";
    }
}

int main()
{
    //variables
    int number1 = 0;
    int number2 = 0;
    int number3 = 0;

    //ask
    cout << "Please enter 3 numbers :\n";
    //cin
    cin >> number1 >> number2 >> number3;

    check(number1, number2, number3);


    check(1, 99, 32);
}

