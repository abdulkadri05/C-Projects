#include <iostream>
#include <string>
using namespace std;

namespace UserManagement {
    class User {
    public:

        string username;
        string password;
        string first_name;
        string last_name;
        int phoneNumber;
        string email;

        User() : phoneNumber(0) {}

        void login() {
            cout << "Username: ";
            cin >> username;

            cout << "Password: ";
            cin >> password;

            cout << "-------------------------------------------------------------------" << endl;
            cout << "Welcome " << username << endl;
            cout << "----------------------------    MENU    ----------------------------" << endl;
        }

        void registerUser() {
            cout << "Enter your first name: ";
            cin >> first_name;

            cout << "Enter your last name: ";
            cin >> last_name;

            cout << "Enter your username: ";
            cin >> username;

            cout << "Enter your phone number: ";
            cin >> phoneNumber;

            cout << "Enter your password: ";
            cin >> password;
        }

        void recoverPassword() {
            cout << "Enter your username: ";
            cin >> username;

            cout << "Enter your email: ";
            cin >> email;

            cout << "An email has been sent to you" << endl;
        }
    };
}

namespace menuManagement {
    class menu{
        public: 
        
    };
}

int main() {
    using namespace UserManagement;
    int choice;
    User user;

    cout << "-------------------------------------------------------------------" << endl;
    cout << "Welcome to the Login page" << endl;
    cout << "----------------------------    MENU    ----------------------------" << endl;
    cout << "| Press 1 to LOGIN" << "                             |" << endl;
    cout << "| Press 2 to REGISTER" << "                          |" << endl;
    cout << "| Press 3 if you forget your password" << "          |" << endl;
    cout << "| Press 4 to EXIT" << "                              |" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1:
            user.login();
            break;
        case 2:
            user.registerUser();
            break;
        case 3:
            user.recoverPassword();
            break;
        case 4:
            cout << "-------------------------------------------------------------------" << endl;
            cout << "You exited the app" << endl;
            cout << "----------------------------    MENU    ----------------------------" << endl;
            break;
        default:
            cout << "Invalid choice. Please select a valid option." << endl;
    }

    return 0;
}
