#include <iostream>
#include <string>
using namespace std;

// ========== TASK 1: Swap using Pointers ==========
void swapNumbers(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

// ========== TASK 2: Function Overloading - Area ==========
int area(int side)
{
    return side * side;
}

int area(int length, int width)
{
    return length * width;
}

float area(float radius)
{
    return 3.14 * radius * radius;
}

// ========== TASK 3: Function Overloading - Sum ==========
int sum(int a, int b)
{
    return a + b;
}

float sum(float a, float b)
{
    return a + b;
}

// ========== EXTRA TASK: Call & Message Simulation ==========
void sendMessage(string message, string recipient, string type)
{
    cout << "Sending your " << type << " message to " << recipient << ": " << message << endl;
}

void receiveMessage(string message, string sender, string type)
{
    cout << "Received a " << type << " message from " << sender << ": " << message << endl;
}

void makeCall(string recipient, string type)
{
    int ans;
    cout << "\nMaking a " << type << " call to " << recipient << endl;
    cout << "Ringing..." << endl;
    cout << "Enter 1 to answer the call: ";
    cin >> ans;
    if (ans == 1)
    {
        cout << "Call answered! You are now on call with " << recipient << endl;
    }
    else
    {
        cout << "Call declined!" << endl;
    }
}

// ========== MAIN MENU ==========
int main()
{
    int choice;

    do
    {
        cout << "\n========================================" << endl;
        cout << "       LAB 10 - POINTERS & OVERLOADING     " << endl;
        cout << "========================================" << endl;
        cout << "1. Swap Two Numbers (Pointers)" << endl;
        cout << "2. Calculate Area (Overloading)" << endl;
        cout << "3. Calculate Sum (Overloading)" << endl;
        cout << "4. Message & Call Simulation" << endl;
        cout << "0. Exit" << endl;
        cout << "========================================" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:  // Swap Numbers
        {
            cout << "\n--- TASK 1: Swap Two Numbers ---" << endl;
            int num1, num2;
            cout << "Enter first number: ";
            cin >> num1;
            cout << "Enter second number: ";
            cin >> num2;
            cout << "\nBefore swap: num1 = " << num1 << ", num2 = " << num2 << endl;
            swapNumbers(&num1, &num2);
            cout << "After swap:  num1 = " << num1 << ", num2 = " << num2 << endl;
            break;
        }

        case 2:  // Area Calculation
        {
            cout << "\n--- TASK 2: Calculate Area ---" << endl;
            int shape;
            cout << "Select shape:" << endl;
            cout << "1. Square" << endl;
            cout << "2. Rectangle" << endl;
            cout << "3. Circle" << endl;
            cout << "Enter choice: ";
            cin >> shape;

            if (shape == 1)
            {
                int side;
                cout << "Enter side length: ";
                cin >> side;
                cout << "Area of square: " << area(side) << endl;
            }
            else if (shape == 2)
            {
                int length, width;
                cout << "Enter length: ";
                cin >> length;
                cout << "Enter width: ";
                cin >> width;
                cout << "Area of rectangle: " << area(length, width) << endl;
            }
            else if (shape == 3)
            {
                float radius;
                cout << "Enter radius: ";
                cin >> radius;
                cout << "Area of circle: " << area(radius) << endl;
            }
            else
            {
                cout << "Invalid choice!" << endl;
            }
            break;
        }

        case 3:  // Sum Calculation
        {
            cout << "\n--- TASK 3: Calculate Sum ---" << endl;
            int type;
            cout << "Select type:" << endl;
            cout << "1. Integer numbers" << endl;
            cout << "2. Float numbers" << endl;
            cout << "Enter choice: ";
            cin >> type;

            if (type == 1)
            {
                int a, b;
                cout << "Enter first integer: ";
                cin >> a;
                cout << "Enter second integer: ";
                cin >> b;
                cout << "Sum: " << sum(a, b) << endl;
            }
            else if (type == 2)
            {
                float a, b;
                cout << "Enter first float: ";
                cin >> a;
                cout << "Enter second float: ";
                cin >> b;
                cout << "Sum: " << sum(a, b) << endl;
            }
            else
            {
                cout << "Invalid choice!" << endl;
            }
            break;
        }

        case 4:  // Message & Call Simulation
        {
            cout << "\n--- EXTRA TASK: Message & Call Simulation ---" << endl;
            cin.ignore();

            string message, recipient, type;

            cout << "Enter recipient name: ";
            getline(cin, recipient);
            cout << "Enter your message: ";
            getline(cin, message);
            cout << "Enter message type (Plain Text/Audio/Multimedia): ";
            getline(cin, type);
            sendMessage(message, recipient, type);

            cout << "\nEnter sender name: ";
            getline(cin, recipient);
            cout << "Enter received message: ";
            getline(cin, message);
            cout << "Enter message type: ";
            getline(cin, type);
            receiveMessage(message, recipient, type);

            cout << "\nEnter recipient for call: ";
            getline(cin, recipient);
            cout << "Enter call type (Audio/Video): ";
            getline(cin, type);
            makeCall(recipient, type);
            break;
        }

        case 0:
        {
            cout << "\nExiting program. Goodbye!" << endl;
            break;
        }

        default:
        {
            cout << "\nInvalid choice! Please enter 0-4." << endl;
            break;
        }
        }

    } while (choice != 0);

    return 0;
}