#include <iostream>
#include <string>
using namespace std;

// ========== TASK 1: Division by Zero Exception ==========
void divisionException()
{
    cout << "\n--- Division by Zero Exception ---" << endl;

    int a, b, c, d;
    cout << "Enter value of a, b, c: ";
    cin >> a >> b >> c;

    try
    {
        if (a - b == 0)
        {
            throw 0;
        }

        cout << "Value of a = " << a << endl;
        cout << "Value of b = " << b << endl;
        cout << "Value of c = " << c << endl;

        d = (a * c) / (a - b);
        cout << "Value of d = " << d << endl;
    }
    catch (int error)
    {
        cout << "Answer is infinite because a - b = 0" << endl;
    }
}

// ========== TASK 2: Multiple Catch Blocks ==========
void multipleCatchException()
{
    cout << "\n--- Multiple Catch Blocks ---" << endl;

    int x = 0;

    try
    {
        if (x > 0)
        {
            throw x;
        }
        else
        {
            throw 'w';
        }
    }
    catch (int num)
    {
        cout << "Caught an integer: " << num << endl;
    }
    catch (char ch)
    {
        cout << "Caught a character: " << ch << endl;
    }
}

// ========== TASK 3: Try-Catch with Different Data Types ==========
void tryCatchExample()
{
    cout << "\n--- Try-Catch with Different Types ---" << endl;

    int num;
    cout << "Enter a number (positive or negative): ";
    cin >> num;

    try
    {
        if (num > 0)
        {
            throw num;
        }
        else if (num < 0)
        {
            throw "Negative number!";
        }
        else
        {
            throw 0.0;
        }
    }
    catch (int n)
    {
        cout << "Caught integer: " << n << " is positive" << endl;
    }
    catch (const char* msg)
    {
        cout << "Caught message: " << msg << endl;
    }
    catch (double d)
    {
        cout << "Caught double: " << d << " is zero" << endl;
    }
}

// ========== TASK 4: Simple Exception with Function ==========
void checkNumber(int n)
{
    try
    {
        if (n < 0)
        {
            throw - 1;
        }
        else if (n == 0)
        {
            throw 0;
        }
        else
        {
            cout << n << " is a valid positive number" << endl;
        }
    }
    catch (int error)
    {
        if (error == -1)
            cout << "Error: Negative number not allowed!" << endl;
        else
            cout << "Error: Zero is not allowed!" << endl;
    }
}

void functionException()
{
    cout << "\n--- Function with Exception ---" << endl;

    int num;
    cout << "Enter a number: ";
    cin >> num;
    checkNumber(num);
}

// ========== TASK 5: Age Validation Exception ==========
void ageException()
{
    cout << "\n--- Age Validation Exception ---" << endl;

    int age;
    cout << "Enter age: ";
    cin >> age;

    try
    {
        if (age < 0)
        {
            throw "Age cannot be negative!";
        }
        else if (age > 100)
        {
            throw "Age cannot be more than 100!";
        }
        else
        {
            cout << "Valid age: " << age << endl;
        }
    }
    catch (const char* msg)
    {
        cout << "Exception: " << msg << endl;
    }
}

int main()
{
    int choice;

    do
    {
        cout << "\n================================================" << endl;
        cout << "     EXCEPTION HANDLING - SIMPLE LAB         " << endl;
        cout << "================================================" << endl;
        cout << "1. Division by Zero Exception" << endl;
        cout << "2. Multiple Catch Blocks" << endl;
        cout << "3. Try-Catch with Different Types" << endl;
        cout << "4. Function with Exception" << endl;
        cout << "5. Age Validation Exception" << endl;
        cout << "0. Exit" << endl;
        cout << "================================================" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            divisionException();
            break;
        case 2:
            multipleCatchException();
            break;
        case 3:
            tryCatchExample();
            break;
        case 4:
            functionException();
            break;
        case 5:
            ageException();
            break;
        case 0:
            cout << "\nExiting program. Goodbye!" << endl;
            break;
        default:
            cout << "\nInvalid choice! Please enter 0-5." << endl;
        }

    } while (choice != 0);

    return 0;
}