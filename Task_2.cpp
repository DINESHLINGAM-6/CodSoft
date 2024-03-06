#include <iostream>

using namespace std;

int main()
{
    char choice;
    do {
        cout << "1. Addition\n";
        cout << "2. Subtraction\n";
        cout << "3. Multiplication\n";
        cout << "4. Division\n";
        int operation;
        cout << "Enter the number to perform operation: ";
        cin >> operation;

        float num1, num2;
        cout << "Enter the first number: ";
        cin >> num1;
        cout << "Enter the second number: ";
        cin >> num2;

        switch(operation) {
            case 1:
                cout << "Answer: " << num1 + num2 << endl;
                break;
            case 2:
                cout << "Answer: " << num1 - num2 << endl;
                break;
            case 3:
                cout << "Answer: " << num1 * num2 << endl;
                break;
            case 4:
                if (num2 != 0)
                    cout << "Answer: " << num1 / num2 << endl;
                else
                    cout << "Error: Division by zero!" << endl;
                break;
            default:
                cout << "Invalid operation!" << endl;
        }

        cout << "Do you want to continue? (y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');


    return 0;
}
