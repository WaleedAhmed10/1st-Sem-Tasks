#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// ========== FUNCTION TO WRITE TO FILE ==========
void writeToFile(string filename, string content)
{
    ofstream outputFile(filename);

    if (outputFile.is_open())
    {
        outputFile << content;
        outputFile.close();
        cout << "Successfully written to " << filename << endl;
    }
    else
    {
        cout << "Error: Could not open file for writing!" << endl;
    }
}

// ========== FUNCTION TO READ FROM FILE ==========
void readFromFile(string filename)
{
    ifstream inputFile(filename);

    if (inputFile.is_open())
    {
        string line;
        cout << "\n--- File Content ---" << endl;
        while (getline(inputFile, line))
        {
            cout << line << endl;
        }
        inputFile.close();
    }
    else
    {
        cout << "Error: Could not open file for reading!" << endl;
    }
}

int main()
{
    int choice;
    string filename = "myfile.txt";

    do
    {
        cout << "\n========================================" << endl;
        cout << "       LAB 14 - FILE HANDLING          " << endl;
        cout << "========================================" << endl;
        cout << "1. Write to File" << endl;
        cout << "2. Read from File" << endl;
        cout << "0. Exit" << endl;
        cout << "========================================" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            cout << "\n--- Write to File ---" << endl;
            string content;
            cin.ignore();
            cout << "Enter text to write to file: ";
            getline(cin, content);
            writeToFile(filename, content);
            break;
        }

        case 2:
        {
            cout << "\n--- Read from File ---" << endl;
            readFromFile(filename);
            break;
        }

        case 0:
        {
            cout << "\nExiting program. Goodbye!" << endl;
            break;
        }

        default:
        {
            cout << "\nInvalid choice! Please enter 0, 1, or 2." << endl;
            break;
        }
        }

    } while (choice != 0);
    return 0;
}