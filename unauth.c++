#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;
struct user {
    string username;
    string password;
    bool is_authenticated;
};

bool authenticate(user& usr, const string& input_username, const string& input_password) {
    if (usr.username == input_username && usr.password == input_password) {
        usr.is_authenticated = true;
        return true;
    }
    usr.is_authenticated = false;
    return false;


}
int main() {
    string hasaccount;
    cout << "Welcome to the College Managment System" << endl;
    user usr;
    cout << "Do you have an account here? (yes/no): ";
    cin >> hasaccount;
    if (hasaccount == "yes") {
        string input_username, input_password;
        cout << "Enter your username: ";
        cin >> input_username;
        cout << "Enter your password: ";
        cin >> input_password;
        authenticate(usr, input_username, input_password);
        if (usr.is_authenticated) {
            cout << "Authentication successful. Access granted." << endl;
        } else {
            cout << "Authentication failed. Access denied." << endl;
        }
    } else if (hasaccount == "no") {
        cout << "It mean that you need to meet with the admin to crate account" << endl;
    }
    cout << "Select the option that you want to do:" << endl;
    cout << "1. View Courses" << endl;
    cout << "2. View Grades" << endl;
    cout << "3. View Schedule" << endl;
    int choice;
    cin >> choice;
    switch (choice) {
        case 1:
            cout << "Displaying Courses..." << endl;
            wait(1);
            cout << "Course 1: Introduction to Programming" << endl;
            cout << "Course 2: Data Structures" << endl;
            cout << "Course 3: Algorithms" << endl;

            break;
        case 2:
            cout << "Displaying Grades..." << endl;
            cout << "Course 1: A" << endl;
            cout << "Course 2: B+" << endl;
            cout << "Course 3: A-" << endl;
            break;
        case 3:
            cout << "Displaying Schedule..." << endl;
            cout << "Monday: 9 AM - 11 AM" << endl;
            cout << "Wednesday: 1 PM - 3 PM" << endl;
            cout << "Friday: 10 AM - 12 PM" << endl;
            break;
        default:
            cout << "Invalid choice." << endl;
            break;
    }
    return 0;
}