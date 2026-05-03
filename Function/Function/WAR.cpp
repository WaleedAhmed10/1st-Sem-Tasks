#include <iostream>
#include <string>
#include <cmath>
using namespace std;

// ========== TASK 1: Reverse a Number ==========
int reverseNumber(int val)
{
    int reversed = 0, digit;
    while (val > 0)
    {
        digit = val % 10;
        reversed = reversed * 10 + digit;
        val = val / 10;
    }
    return reversed;
}

// ========== TASK 2: Calculate Power ==========
int calculatePower(int base, int exponent)
{
    int result = 1;
    for (int i = 0; i < exponent; i++)
    {
        result = result * base;
    }
    return result;
}

// ========== TASK 3: Convert to Lowercase ==========
char toLowercase(char ch)
{
    if (ch >= 'A' && ch <= 'Z')
    {
        return ch + 32;
    }
    return ch;
}

void convertStringToLowercase(char str[], int size)
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        str[i] = toLowercase(str[i]);
    }
}

// ========== TASK 4: Parking Charges ==========
float calculateParkingCharge(int hoursParked)
{
    float charge = 2.00;  // Minimum charge for up to 3 hours

    if (hoursParked > 3)
    {
        int extraHours = hoursParked - 3;
        charge = charge + (extraHours * 0.50);

        if (charge > 10.00)
        {
            charge = 10.00;  // Maximum charge
        }
    }
    return charge;
}

// ========== TASK 5: Compare Two Numbers ==========
int findLarger(int num1, int num2)
{
    if (num1 > num2)
    {
        return num1;
    }
    else
    {
        return num2;
    }
}

void printComparison(int num1, int num2)
{
    if (num1 > num2)
    {
        cout << "First number (" << num1 << ") is greater than second number (" << num2 << ")" << endl;
    }
    else if (num2 > num1)
    {
        cout << "Second number (" << num2 << ") is greater than first number (" << num1 << ")" << endl;
    }
    else
    {
        cout << "Both numbers are equal" << endl;
    }
}

int main()
{
    int choice;

    do
    {
        // Display Menu
        cout << "\n========================================" << endl;
        cout << "       LAB 09 - FUNCTIONS MENU         " << endl;
        cout << "========================================" << endl;
        cout << "1. Reverse a Number" << endl;
        cout << "2. Calculate Power" << endl;
        cout << "3. Convert String to Lowercase" << endl;
        cout << "4. Calculate Parking Charge" << endl;
        cout << "5. Compare Two Numbers" << endl;
        cout << "0. Exit" << endl;
        cout << "========================================" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:  // TASK 1: Reverse Number
        {
            cout << "\n--- TASK 1: Reverse a Number ---" << endl;
            int num;
            cout << "Enter any number: ";
            cin >> num;
            cout << "Original number: " << num << endl;
            cout << "Reversed number: " << reverseNumber(num) << endl;
            break;
        }

        case 2:  // TASK 2: Calculate Power
        {
            cout << "\n--- TASK 2: Calculate Power ---" << endl;
            int base, exponent;
            cout << "Enter base number: ";
            cin >> base;
            cout << "Enter exponent: ";
            cin >> exponent;
            cout << base << " ^ " << exponent << " = " << calculatePower(base, exponent) << endl;
            break;
        }

        case 3:  // TASK 3: Convert to Lowercase
        {
            cout << "\n--- TASK 3: Convert String to Lowercase ---" << endl;
            char name[100];
            cin.ignore();  // Clear input buffer
            cout << "Enter a string (in UPPERCASE): ";
            cin.getline(name, 100);
            cout << "Original string: " << name << endl;
            convertStringToLowercase(name, 100);
            cout << "Lowercase string: " << name << endl;
            break;
        }

        case 4:  // TASK 4: Parking Charges
        {
            cout << "\n--- TASK 4: Parking Charges ---" << endl;
            cout << "Parking Rate: $2.00 for first 3 hours" << endl;
            cout << "             $0.50 for each extra hour" << endl;
            cout << "             Maximum charge: $10.00" << endl;
            cout << "----------------------------------------" << endl;

            int hours[3];
            float totalCharge = 0;

            for (int i = 0; i < 3; i++)
            {
                cout << "Enter hours parked for Customer " << i + 1 << ": ";
                cin >> hours[i];
            }

            cout << "\nCustomer\tHours\t\tCharge" << endl;
            cout << "----------------------------------------" << endl;

            for (int i = 0; i < 3; i++)
            {
                float charge = calculateParkingCharge(hours[i]);
                totalCharge = totalCharge + charge;
                cout << i + 1 << "\t\t" << hours[i] << "\t\t$" << charge << endl;
            }

            cout << "----------------------------------------" << endl;
            cout << "TOTAL CHARGE: $\t\t\t" << totalCharge << endl;
            break;
        }

        case 5:  // TASK 5: Compare Numbers
        {
            cout << "\n--- TASK 5: Compare Two Numbers ---" << endl;
            int num1, num2;
            cout << "Enter first number: ";
            cin >> num1;
            cout << "Enter second number: ";
            cin >> num2;
            printComparison(num1, num2);
            cout << "Larger number is: " << findLarger(num1, num2) << endl;
            break;
        }

        case 0:
        {
            cout << "\nExiting program. Goodbye!" << endl;
            break;
        }

        default:
        {
            cout << "\nInvalid choice! Please enter a number between 0 and 5." << endl;
            break;
        }
        }

    } while (choice != 0);

    return 0;
}