#include <iostream>
#include <string>
using namespace std;

// ========== TASK 1: Count Even & Odd ==========
void countEvenOdd(int arr[], int size, int& evenCount, int& oddCount)
{
    evenCount = 0;
    oddCount = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 == 0)
            evenCount++;
        else
            oddCount++;
    }
}

// ========== TASK 2: Bubble Sort ==========
void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// ========== TASK 3: Find Largest Element Index ==========
int findMaxIndex(int arr[], int size)
{
    int maxIndex = 0;
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > arr[maxIndex])
        {
            maxIndex = i;
        }
    }
    return maxIndex;
}

// ========== TASK 4: Reverse String using Recursion ==========
void reverseString(string& str, int start, int end)
{
    if (start >= end)
        return;

    char temp = str[start];
    str[start] = str[end];
    str[end] = temp;
    reverseString(str, start + 1, end - 1);
}

// ========== TASK 5: Palindrome Check ==========
bool isPalindrome(string str)
{
    int start = 0;
    int end = str.length() - 1;

    while (start < end)
    {
        if (str[start] != str[end])
            return false;
        start++;
        end--;
    }
    return true;
}

// ========== TASK 6: String Permutations ==========
void permuteString(string str, int start, int end)
{
    if (start == end)
    {
        cout << str << endl;
        return;
    }

    for (int i = start; i <= end; i++)
    {
        swap(str[start], str[i]);
        permuteString(str, start + 1, end);
        swap(str[start], str[i]);
    }
}

// ========== TASK 7: 2D Array Input/Output ==========
void input2DArray(int arr[][3], int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Enter value for row " << i + 1 << ", col " << j + 1 << ": ";
            cin >> arr[i][j];
        }
    }
}

void print2DArray(int arr[][3], int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int choice;

    do
    {
        cout << "\n========================================" << endl;
        cout << "       LAB 11 - RECURSION & ARRAYS      " << endl;
        cout << "========================================" << endl;
        cout << "1. Count Even & Odd Numbers" << endl;
        cout << "2. Bubble Sort" << endl;
        cout << "3. Find Largest Element Index" << endl;
        cout << "4. Reverse String (Recursion)" << endl;
        cout << "5. Check Palindrome" << endl;
        cout << "6. Generate String Permutations" << endl;
        cout << "7. 2D Array Input/Output" << endl;
        cout << "0. Exit" << endl;
        cout << "========================================" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:  // Count Even & Odd
        {
            cout << "\n--- TASK 1: Count Even & Odd Numbers ---" << endl;
            int n;
            cout << "Enter size of array: ";
            cin >> n;

            int* arr = new int[n];
            cout << "Enter " << n << " numbers: ";
            for (int i = 0; i < n; i++)
                cin >> arr[i];

            int evenCount, oddCount;
            countEvenOdd(arr, n, evenCount, oddCount);
            cout << "Even numbers: " << evenCount << endl;
            cout << "Odd numbers: " << oddCount << endl;

            delete[] arr;
            break;
        }

        case 2:  // Bubble Sort
        {
            cout << "\n--- TASK 2: Bubble Sort ---" << endl;
            int n;
            cout << "Enter size of array: ";
            cin >> n;

            int* arr = new int[n];
            cout << "Enter " << n << " numbers: ";
            for (int i = 0; i < n; i++)
                cin >> arr[i];

            cout << "Original array: ";
            for (int i = 0; i < n; i++)
                cout << arr[i] << " ";
            cout << endl;

            bubbleSort(arr, n);

            cout << "Sorted array: ";
            for (int i = 0; i < n; i++)
                cout << arr[i] << " ";
            cout << endl;

            delete[] arr;
            break;
        }

        case 3:  // Find Largest Index
        {
            cout << "\n--- TASK 3: Find Largest Element Index ---" << endl;
            int n;
            cout << "Enter size of array: ";
            cin >> n;

            int* arr = new int[n];
            cout << "Enter " << n << " numbers: ";
            for (int i = 0; i < n; i++)
                cin >> arr[i];

            int maxIndex = findMaxIndex(arr, n);
            cout << "Largest element: " << arr[maxIndex] << endl;
            cout << "Index of largest element: " << maxIndex << endl;

            delete[] arr;
            break;
        }

        case 4:  // Reverse String Recursion
        {
            cout << "\n--- TASK 4: Reverse String (Recursion) ---" << endl;
            string input;
            cin.ignore();
            cout << "Enter a string: ";
            getline(cin, input);
            cout << "Original string: " << input << endl;
            reverseString(input, 0, input.length() - 1);
            cout << "Reversed string: " << input << endl;
            break;
        }

        case 5:  // Palindrome Check
        {
            cout << "\n--- TASK 5: Check Palindrome ---" << endl;
            string input;
            cout << "Enter a string: ";
            cin >> input;

            if (isPalindrome(input))
                cout << "\"" << input << "\" is a palindrome!" << endl;
            else
                cout << "\"" << input << "\" is NOT a palindrome!" << endl;
            break;
        }

        case 6:  // String Permutations
        {
            cout << "\n--- TASK 6: Generate String Permutations ---" << endl;
            string input;
            cout << "Enter a string (3-4 characters recommended): ";
            cin >> input;
            cout << "All permutations of \"" << input << "\":" << endl;
            permuteString(input, 0, input.length() - 1);
            break;
        }

        case 7:  // 2D Array
        {
            cout << "\n--- TASK 7: 2D Array Input/Output ---" << endl;
            const int rows = 4;
            const int cols = 3;
            int arr[4][3];
            cout << "Enter values for 4x3 array:" << endl;
            input2DArray(arr, rows);

            cout << "\nYour 2D array:" << endl;
            print2DArray(arr, rows);
            break;
        }

        case 0:
        {
            cout << "\nExiting program. Goodbye!" << endl;
            break;
        }

        default:
        {
            cout << "\nInvalid choice! Please enter 0-7." << endl;
            break;
        }
        }
    } while (choice != 0);
    return 0;
}