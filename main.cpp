#include <iostream>
#include <array>
#include <conio.h>
using namespace std;
struct Employee {
    int id;
    string name;
    int age;
    double salary;
};
int employeeCount = 0;

void addEmployee(Employee employees[]) {
    system("cls");

    int i = employeeCount;

    cout << "\033[1;20H" << "Add new Employee :\n";
    cout << "\033[2;20H" << "--------------------------";
    cout << "\033[3;20H" << "ID     : ";
    cout << "\033[4;20H" << "Name   : ";
    cout << "\033[3;40H" << "Age    : ";
    cout << "\033[4;40H" << "Salary : ";

    cout << "\033[" << 3 << ";29H";
    cin >> employees[i].id;

    cout << "\033[" << 4 << ";29H";
    cin >> employees[i].name;
    //getline(cin, employees[i].name);

    cout << "\033[" << 3 << ";48H";
    cin >> employees[i].age;

    cout << "\033[" << 4 << ";48H";
    cin >> employees[i].salary;

    employeeCount++;

    cout << "\033[6;20H" << "Employee added successfully!";
}

void displayEmployee(Employee employees[]) {
    system("cls");
    int searchId;
    cout << "Enter Employee ID to display: ";
    cin >> searchId;

    bool found = false;
    for (int i = 0; i < employeeCount; i++) {
        if (employees[i].id == searchId) {
            cout << "\nEmployee found:\n";
            cout << "ID: " << employees[i].id << endl;
            cout << "Name: " << employees[i].name << endl;
            cout << "Age: " << employees[i].age << endl;
            cout << "Salary: " << employees[i].salary << endl;
            found = true;
            break;
        }
    }

    if (!found)
        cout << "\nEmployee not found!\n";
}

int showMenu() {
    array<string, 4> arr = {"New", "Display", "Display All", "Exit"};
    int highlight = 0;
    int key;

    while (true) {
        system("cls");
        cout << "Use up and down to move, and Enter to select:\n\n";

        for (int i = 0; i < arr.size(); i++) {
            if (i == highlight)
                cout << "\033[1;31m> " << arr[i] << "\033[0m" << endl;
            else
                cout << "  " << arr[i] << endl;
        }

        key = getch();
        if (key == 224) {
            key = getch();
            if (key == 72) { // ↑
                highlight--;
                if (highlight < 0) highlight = arr.size() - 1;
            }
            else if (key == 80) { // ↓
                highlight++;
                if (highlight >= arr.size()) highlight = 0;
            }
        }
        else if (key == 13) { // Enter
            system("cls");
            cout << "You selected: " << arr[highlight] << endl;
            if (arr[highlight] == "Exit") {
                cout << "Exiting menu...\n";
                return -1; // esc
            }
            return highlight;
        }
        else if (key == 27) { // ESC
            system("cls");
            cout << "Exiting menu...\n";
            return -1;
        }
    }
}

void displayAll(Employee employees[]) {
    system("cls");
    if (employeeCount == 0) {
        cout << "No employees to display.\n";
    } else {
        cout << "All Employees:\n";
        for (int i = 0; i < employeeCount; i++) {
            cout << "--------------------------\n";
            cout << "ID: " << employees[i].id << endl;
            cout << "Name: " << employees[i].name << endl;
            cout << "Age: " << employees[i].age << endl;
            cout << "Salary: " << employees[i].salary << endl;
        }
    }
}

void fibonacci(int n) {
    static int a = 0, b = 1;
    if (n == 0)
    {
        a=0;
        b=1;
        cout << endl;
        return;
    }
    cout << a << " ";
    int temp = a;
    a = b;
    b += temp;
    fibonacci(n-1 );
}

void printBinary(int n) {
    if (n == 0)
    {
        cout << endl;
        return;
    }
    printBinary(n / 2);
    cout << (n % 2); // 13%2 = 1 // 6%2=0 // 3%2=1 //1%2=1
}

void swapByReference(int &a, int &b) {
    int temp = a; 
    a = b;
    b = temp;
}

int main() {
    int choice;
    Employee employees[10];
     while (true) {
         choice = showMenu();
         if (choice == -1)
             break;
         switch (choice) {
             case 0: addEmployee(employees); break;
             case 1: displayEmployee(employees); break;
             case 2: displayAll(employees); break;
             case 3: system("cls"); cout << "Goodbye!\n"; return 0;
         }
         cout << "\nPress any key to return to menu...";
         getch();
     }

    cout << "\n----------------------------------------------------\n" ;
    fibonacci(10);

    printBinary(13);

    int x = 5, y = 10;
    cout << "Before Swap: x = " << x << ", y = " << y << endl;
    swapByReference(x, y);
    cout << "After Swap: x = " << x << ", y = " << y << endl;

    return 0;
}
