#include <iostream>
#include <fstream>
using namespace std;

class Employee {
public:
    string name;
    int roll_no;

    void setInformation() {
        cout << "enter the name: ";
        cin.ignore();
        getline(cin, name);
        cout << "enter the roll: ";
        cin >> roll_no;
    }

    void getInformation() {
        cout << "name: " << name << endl;
        cout << "roll_no: " << roll_no << endl;
    }
};

int main() {
    Employee emp[2];
    ofstream out("sample.txt");
    if (!out) {
        cerr << "Error opening file." << endl;
        return 1; // Exit with an error code
    }
    for (int i = 0; i < 2; i++) {
        emp[i].setInformation();
        out << emp[i].name << endl << emp[i].roll_no << endl;
    }
    out.close();

    ifstream in("sample.txt");
    if (!in) {
        cerr << "Error opening file" << endl;
        return 1; // Exit with an error code
    }

    string searchName;
    cout << "enter the name you want to search: ";
    cin.ignore(); // Clear the newline left by previous input
    getline(cin, searchName);

    bool found = false;
    for (int i = 0; i < 2; i++) {
        getline(in, emp[i].name);
        in >> emp[i].roll_no;
        in.ignore();
        if (searchName == emp[i].name) {
            cout << "employee found" << endl;
            cout << "Name: " << emp[i].name << endl;
            cout << "Roll No: " << emp[i].roll_no << endl;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "employee not found" << endl;
    }

    in.close();

    return 0;
}
