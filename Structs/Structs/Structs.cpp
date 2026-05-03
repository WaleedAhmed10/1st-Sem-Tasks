#include <iostream>
#include <string>
using namespace std;

struct Record
{
    string Name, Subject1, Subject2, Subject3, Grade1, Grade2, Grade3;
    int CHours1, CHours2, CHours3, TMarks1, TMarks2, TMarks3, CGPA;
};

int main()
{
    Record Student;
    cout << "Enter name " << endl;
    getline(cin, Student.Name);
    cout << "Enter 3 Subjects " << endl;
    getline(cin, Student.Subject1);
    getline(cin, Student.Subject2);
    getline(cin, Student.Subject3);
    cout << "Enter credit HOURS " << endl;
    cin >> Student.CHours1;
    cin >> Student.CHours2;
    cin >> Student.CHours3;
    cout << "Enter Total Marks " << endl;
    cin >> Student.TMarks1;
    cin >> Student.TMarks2;
    cin >> Student.TMarks3;
    cout << "Enter GRADES " << endl;
    cin.ignore();
    getline(cin, Student.Grade1);
    getline(cin, Student.Grade2);
    getline(cin, Student.Grade3);
    cout << "Enter CGPA  " << endl;
    cin >> Student.CGPA;
    cout << "\tSubjects \tcredit Hours \tTotal Marks \tGRADES " << endl;
    cout << "\t" << Student.Subject1 << "\t" << Student.CHours1 << "\t" << Student.TMarks1 << "\t" << Student.Grade1 << endl;
    cout << "\t" << Student.Subject2 << "\t" << Student.CHours2 << "\t" << Student.TMarks2 << "\t" << Student.Grade2 << endl;
    cout << "\t" << Student.Subject3 << "\t" << Student.CHours3 << "\t" << Student.TMarks3 << "\t" << Student.Grade3 << endl;
    cout << "\nCGPA: " << Student.CGPA << endl;
    return 0;
}