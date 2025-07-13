#include <iostream>
using namespace std;
int main()
{
    double num1, num2;
    char operation;
    cout << "Simple calculator" << endl;
    cout << "Enter the first number: " << endl;
    cin >> num1;
    cout << "Enter the operation(+,-,/,*): "<< endl;
    cin >> operation;
    cout << "Enter the second number: " << endl;
    cin >> num2;
    switch (operation)
    {
    case '+':
        cout << "Result " << num1 + num2 << endl;
        break;

    case '-':
        cout << "Result " << num1 - num2 << endl;
        break;

    case '*':
        cout << "Result " << num1 * num2 << endl;
        break;

    case '/':
        if (num2 !=0)
            cout << "Result " << num1 / num2 << endl;
        else 
            cout << "Error : Divison by Zero! " << endl;
        break;
    
    default:
        cout << "Invlid operator" << endl;
    }
    return 0;

}