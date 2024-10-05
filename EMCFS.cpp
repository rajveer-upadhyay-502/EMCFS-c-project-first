#include<iostream>
using namespace std;

class Student {
private:
    string name;
    int marks[5];
    int totalMarks;

public:
    void input() {
        cout << "Enter student name: ";
        cin >> name;
        cout << "Enter marks for 5 subjects: ";
        for (int i = 0; i < 5; i++) {
            cin >> marks[i];
        }
    }

    void calculateTotal() {
        totalMarks = 0;
        for (int i = 0; i < 5; i++) {
            totalMarks += marks[i];
        }
    }

    void displayResult() {
        cout << "Student: " << name << endl;
        cout << "Total Marks: " << totalMarks << "/500" << endl;
        if (totalMarks >= 200) {
            cout << "Status: Pass" << endl;
        } else {
            cout << "Status: Fail" << endl;
        }
        cout << "----------------------" << endl;
    }
};

int main() {
    Student students[3];

    for (int i = 0; i < 3; i++) {
        cout << "Enter details for Student " << i + 1 << endl;
        students[i].input();
        students[i].calculateTotal();
    }

    cout << "\nResults of Students:" << endl;
    for (int i = 0; i < 3; i++) {
        students[i].displayResult();
    }

    return 0;
}
