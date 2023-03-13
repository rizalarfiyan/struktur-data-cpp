#include <iostream>
using namespace std;

struct Subject {
    string name;
    int value;
};

struct Student {
    string name;
    Subject *subjects;
    int size;
    float average;
};

void clearScreen();
void greeting();
void getUserLength(int *userLength);
void inputUser(int userLength, Student *students);
void printUser(int userLength, Student students[]);
void closing();

int main() {
    int userLength;

    greeting();
    getUserLength(&userLength);

    Student *students = new Student[userLength];

    inputUser(userLength, students);
    printUser(userLength, students);

    closing();

    return 0;
}

void greeting() {
    cout << "=========================================================" << endl;
    cout << "================= Student Subject Value =================" << endl;
    cout << "==================== by @rizalarfiyan ===================" << endl;
    cout << "=========================================================" << endl;
    cout << endl;
}

void closing() {
    cout << "=========================================================" << endl;
    cout << "======================= Thank You =======================" << endl;
    cout << "=========================================================" << endl;
    cout << endl;
}

void clearScreen()
{
    #ifdef __linux__
        system("clear");
    #else
        system("CLS");
    #endif
}

void getUserLength(int *userLength) {
    cout << "Input user length: ";
    cin >> *userLength;
    cout << endl;
}

void inputUser(int userLength, Student *students) {
    clearScreen();
    greeting();

    for (int i = 0; i < userLength; i++) {
        int subjectLength;
        cout << "[" << (i+1) << "]" << endl;
        cout << " |- Name\t\t: ";
        cin >> students[i].name;
    
        cout << " |- Total Subject\t: ";
        cin >> subjectLength;
        students[i].size = subjectLength;

        int totalSubjectValue = 0;
        Subject* subjects = new Subject[subjectLength];

        for (int j = 0; j < subjectLength; j++) {
            string name;
            cout << "    [" << (j+1) << "]" << endl;
            cout << "     |- Name\t\t: ";
            cin >> subjects[j].name;

            cout << "     |- Value\t\t: ";
            cin >> subjects[j].value;

            totalSubjectValue += subjects[j].value;
        }

        students[i].average = totalSubjectValue / subjectLength;
        students[i].subjects = subjects;
    }
}

void printUser(int userLength, Student students[]) {
    clearScreen();
    greeting();

    for (int i = 0; i < userLength; i++) {
        cout << "[" << (i+1) << "]" << endl;
        cout << " |- Name\t\t: " << students[i].name << endl;
        cout << " |- Average\t\t: " << students[i].average << endl;
        cout << " |- Total Subject\t: " << students[i].size << endl;
        cout << " |- Subject" << endl;
        for (int j = 0; j < students[i].size; j++) {
            cout << "    [" << (j+1) << "]" << endl;
            cout << "     |- Name\t\t: " << students[i].subjects[j].name << endl;
            cout << "     |- Value\t\t: " << students[i].subjects[j].value << endl;
        }
    }

    cout << endl;
}