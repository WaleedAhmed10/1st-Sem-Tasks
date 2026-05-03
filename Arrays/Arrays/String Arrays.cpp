#include <iostream>
#include <string>
using namespace std;

#define MAX_SIZE 100

// ========== TASK 1: Delete Character from String ==========
void deleteCharacter(string& inputString, char charToDelete)
{
    string result = "";
    for (char c : inputString)
    {
        if (c != charToDelete)
        {
            result = result + c;
        }
    }
    inputString = result;
}

// ========== TASK 2: Find String Length ==========
int findStringLength(const string& str)
{
    int length = 0;
    for (char c : str)
    {
        length++;
    }
    return length;
}

// ========== TASK 3: Count Characters ==========
int countCharacters(const string& str)
{
    return str.length();
}

// ========== TASK 4: Check Palindrome ==========
bool isStringPalindrome(const string& str)
{
    int length = str.length();
    for (int i = 0; i < length / 2; i++)
    {
        if (str[i] != str[length - 1 - i])
        {
            return false;
        }
    }
    return true;
}

// ========== TASK 5: Count Even Numbers in Array ==========
int countEvenNumbers(int arr[], int size)
{
    int evenCount = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 == 0)
        {
            evenCount++;
        }
    }
    return evenCount;
}

// ========== MAIN MENU ==========
int main()
{
    int choice;

    do
    {
        cout << "\n========================================" << endl;
        cout << "       LAB 12 - ARRAYS & STRINGS       " << endl;
        cout << "========================================" << endl;
        cout << "1. Delete Character from String" << endl;
        cout << "2. Find String Length" << endl;
        cout << "3. Count Characters in String" << endl;
        cout << "4. Check Palindrome" << endl;
        cout << "5. Count Even Numbers in Array" << endl;
        cout << "0. Exit" << endl;
        cout << "========================================" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:  // Delete Character
        {
            cout << "\n--- TASK 1: Delete Character from String ---" << endl;
            string input;
            char ch;
            cin.ignore();
            cout << "Enter a string: ";
            getline(cin, input);
            cout << "Enter character to delete: ";
            cin >> ch;

            cout << "Original string: " << input << endl;
            deleteCharacter(input, ch);
            cout << "After deleting '" << ch << "': " << input << endl;
            break;
        }

        case 2:  // String Length
        {
            cout << "\n--- TASK 2: Find String Length ---" << endl;
            string input;
            cin.ignore();
            cout << "Enter a string: ";
            getline(cin, input);
            cout << "Length of string: " << findStringLength(input) << endl;
            break;
        }

        case 3:  // Count Characters
        {
            cout << "\n--- TASK 3: Count Characters in String ---" << endl;
            string input;
            cin.ignore();
            cout << "Enter a string: ";
            getline(cin, input);
            cout << "Number of characters: " << countCharacters(input) << endl;
            break;
        }

        case 4:  // Palindrome Check
        {
            cout << "\n--- TASK 4: Check Palindrome ---" << endl;
            string input;
            cout << "Enter a string: ";
            cin >> input;

            if (isStringPalindrome(input))
                cout << "\"" << input << "\" is a palindrome!" << endl;
            else
                cout << "\"" << input << "\" is NOT a palindrome!" << endl;
            break;
        }

        case 5:  // Count Even Numbers
        {
            cout << "\n--- TASK 5: Count Even Numbers in Array ---" << endl;
            int n;
            int arr[MAX_SIZE];

            cout << "Enter size of array (max " << MAX_SIZE << "): ";
            cin >> n;

            if (n > MAX_SIZE)
            {
                cout << "Size too large! Maximum is " << MAX_SIZE << endl;
                break;
            }

            cout << "Enter " << n << " numbers: ";
            for (int i = 0; i < n; i++)
            {
                cin >> arr[i];
            }

            cout << "Number of even numbers: " << countEvenNumbers(arr, n) << endl;
            break;
        }

        case 0:
        {
            cout << "\nExiting program. Goodbye!" << endl;
            break;
        }

        default:
        {
            cout << "\nInvalid choice! Please enter 0-5." << endl;
            break;
        }
        }

    } while (choice != 0);
    return 0;
}