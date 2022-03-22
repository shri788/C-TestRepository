// CalculatorConsoleApp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Calculator.h"
#include <vector>
using namespace std;
int main()
{
    /*
    double x = 0.0;
    double y = 0.0;
    double sum = 0.0;
    char opr = '+';

    cout << "Please Use Interface To Do Mathematical Operations Related +, -, * and /" << endl;
    
    Calculator C;

    while (true)
    {
        cin >> x >> opr >> y;
        sum = C.Calculate(x, opr, y);
        cout << "Your Result Is : " << sum << endl;
    } 
    vector <string> arry;
    string x;
    cout << "Provide array data from first Int Valut To 10" << endl;

    while(true) {
       
        cin >> x;
        arry.push_back(x);
        cout << endl;
        if (arry.size() == 10) {
            cout << arry.size() << endl;
            for (int i = 0; i < arry.size(); i++) {
                cout << arry[i] << ',';
            }
           // cout << arry[9];
            arry.clear();
        }
        
    int arr[100], tot, larg, i;
    cout << "Enter the Size (max. 100): ";
    cin >> tot;
    cout << "Enter " << tot << " Array Elements: ";
    for (i = 0; i < tot; i++)
        cin >> arr[i];
    larg = arr[0];
   
     for (i = 1; i < tot; i++)
    {
        if (larg < arr[i])
            larg = arr[i];
    }
    cout << "\nLargest Number = " << larg;
    cout << endl;
    return 0;
    
    
    int n, sum = 0;

    cout << "Enter A Positive Integer : " << endl;
    cin >> n;
    cout << endl;

    for (int i = 0; i < n; i++)
    {
        sum += i;
    }
    cout << "Total is " << sum;
    */

    int n; 
    bool isPrime = true;
    cout << "Enter Any Interger Number : " << endl;
    cin >> n;
    
    if (n != 0 && n != 1) {
        for (int i = 2; i < n / 2; ++i) 
        {
            if (n % i == 0) {
                isPrime = false;
                break;
            }
        }
    }
    if (isPrime) {
        cout << n << " is A Prime Number." << endl;
    }
    else {
        cout << n << " is Not A Prime Number." << endl;
    }


}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
