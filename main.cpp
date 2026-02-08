#include <iostream>
using namespace std;

struct Student {
    int roll;
    char name[50];
    float marks;
};

int main() {
    Student s[100];
    int count = 0;
    int choice;

    while (true) {
        cout << "\n--- Student Management System ---\n";
        cout << "1. Add Student\n";
        cout << "2. Display Students\n";
        cout << "3. Search Student\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter Roll Number: ";
            cin >> s[count].roll;

            cout << "Enter Name: ";
            cin >> s[count].name;

            cout << "Enter Marks: ";
            cin >> s[count].marks;

            count++;
            cout << "Student record added successfully.\n";
            break;

        case 2:
            if (count == 0) {
                cout << "No student records found.\n";
            } else {
                for (int i = 0; i < count; i++) {
                    cout << "\nRoll Number: " << s[i].roll;
                    cout << "\nName: " << s[i].name;
                    cout << "\nMarks: " << s[i].marks << "\n";
                }
            }
            break;

        case 3: {
            int searchRoll;
            bool found = false;

            cout << "Enter roll number to search: ";
            cin >> searchRoll;

            for (int i = 0; i < count; i++) {
                if (s[i].roll == searchRoll) {
                    cout << "\nStudent Found!";
                    cout << "\nName: " << s[i].name;
                    cout << "\nMarks: " << s[i].marks << "\n";
                    found = true;
                    break;
                }
            }

            if (!found) {
                cout << "Student record not found.\n";
            }
            break;
        }

        case 4:
            cout << "Exiting program...\n";
            return 0;

        default:
            cout << "Invalid choice. Please try again.\n";
        }
    }
}
