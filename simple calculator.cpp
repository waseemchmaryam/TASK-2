#include <iostream>
using namespace std;

int main()
{
    int add, sub, mult, div, n1, n2;
    int choice;

    do
    {
        // Ask the user for input
        cout << "Enter the first number: ";
        cin >> n1;

        cout << "Enter the second number: ";
        cin >> n2;

        // Ask the user to choose an operation
        cout << "Choose an operation:\n";
        cout << "1. Addition\n";
        cout << "2. Subtraction\n";
        cout << "3. Multiplication\n";
        cout << "4. Division\n";
        cout << "0. Exit\n";
        cout << "Enter your choice (0-4): ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            add = n1 + n2;
            cout << "ADDITION" << endl;
            cout << n1 << "+" << n2 << "=" << add << endl;
            break;

        case 2:
            sub = n1 - n2;
            cout << "SUBTRACTION" << endl;
            cout << n1 << "-" << n2 << "=" << sub << endl;
            break;

        case 3:
            mult = n1 * n2;
            cout << "MULTIPLICATION" << endl;
            cout << n1 << "*" << n2 << "=" << mult << endl;
            break;

        case 4:
            if (n2 != 0)
            {
                div = n1 / n2;
                cout << "DIVISION" << endl;
                cout << n1 << "/" << n2 << "=" << div << endl;
            }
            else
            {
                cout << "Error: Division by zero is not allowed." << endl;
            }
            break;

        case 0:
            cout << "Exiting the program. Goodbye!" << endl;
            break;

        default:
            cout << "Invalid choice. Please enter a number between 0 and 4." << endl;
        }

    } while (choice != 0);

    return 0;
}

