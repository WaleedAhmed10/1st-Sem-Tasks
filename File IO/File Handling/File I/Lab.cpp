#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// ========== TASK 1: Write to File ==========
void writeToFile()
{
    string inputString;
    cout << "Enter a string to write to the file: ";
    cin.ignore();
    getline(cin, inputString);

    ofstream outputFile("example.txt");
    if (!outputFile.is_open())
    {
        cout << "Error opening the file for writing." << endl;
        return;
    }

    outputFile << inputString;
    outputFile.close();
    cout << "String successfully written to the file." << endl;
}

// ========== TASK 2: Read and Display File ==========
void readFromFile()
{
    ifstream inputFile("example.txt");
    if (!inputFile.is_open())
    {
        cout << "Unable to open the file." << endl;
        return;
    }

    char character;
    cout << "File content: ";
    while (inputFile.get(character))
    {
        cout << character;
    }
    cout << endl;
    inputFile.close();
}

// ========== TASK 3: Count Characters in File ==========
void countCharacters()
{
    ifstream inputFile("example.txt");
    if (!inputFile.is_open())
    {
        cout << "Error opening the file." << endl;
        return;
    }

    char character;
    int charCount = 0;
    while (inputFile.get(character))
    {
        charCount++;
    }

    inputFile.close();
    cout << "Total number of characters in the file: " << charCount << endl;
}

// ========== TASK 4: Write Student Data to File ==========
struct Student
{
    string name;
    int age;
    float cgpa;
    string dob;
    string placeOfBirth;
};

void writeStudentData()
{
    ofstream outputFile("Data.txt");
    if (!outputFile.is_open())
    {
        cout << "Error opening the file for writing." << endl;
        return;
    }

    Student students[5];

    for (int i = 0; i < 5; i++)
    {
        cout << "\nEnter information for student " << i + 1 << ":\n";
        cout << "Name: ";
        cin.ignore();
        getline(cin, students[i].name);
        cout << "Age: ";
        cin >> students[i].age;
        cout << "CGPA: ";
        cin >> students[i].cgpa;
        cin.ignore();
        cout << "Date of Birth (DOB): ";
        getline(cin, students[i].dob);
        cout << "Place of Birth: ";
        getline(cin, students[i].placeOfBirth);

        outputFile << students[i].name << " " << students[i].age << " "
            << students[i].cgpa << " " << students[i].dob << " "
            << students[i].placeOfBirth << endl;

        cout << "Information saved for student " << i + 1 << endl;
    }

    outputFile.close();
    cout << "\nData saved to the file 'Data.txt'." << endl;
}

// ========== TASK 5: Read Student Data from File ==========
void readStudentData()
{
    ifstream inputFile("Data.txt");
    if (!inputFile.is_open())
    {
        cout << "Error opening the file." << endl;
        return;
    }

    string line;
    cout << "\nStudent Records from file:" << endl;
    cout << "========================================" << endl;

    while (getline(inputFile, line))
    {
        cout << line << endl;
    }

    inputFile.close();
}

int main()
{
    int choice;

    do
    {
        cout << "\n========================================" << endl;
        cout << "       FILE I/O          " << endl;
        cout << "========================================" << endl;
        cout << "1. Write String to File" << endl;
        cout << "2. Read and Display File" << endl;
        cout << "3. Count Characters in File" << endl;
        cout << "4. Write Student Data to File" << endl;
        cout << "5. Read Student Data from File" << endl;
        cout << "0. Exit" << endl;
        cout << "========================================" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            writeToFile();
            break;
        case 2:
            readFromFile();
            break;
        case 3:
            countCharacters();
            break;
        case 4:
            writeStudentData();
            break;
        case 5:
            readStudentData();
            break;
        case 0:
            cout << "\nExiting program. Goodbye!" << endl;
            break;
        default:
            cout << "\nInvalid choice!" << endl;
        }

    } while (choice != 0);

    return 0;
}