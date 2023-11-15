#include <iostream>
using namespace std;


int main() 
    
    {
        int choice;
        string GoToAboutUsPage,GoToServicePage,GotoFullProfilepage,Logout;
        while(true){
            cout<<"1.GoToAboutUsPage\n";
            cout<<"2.GoToServicePage\n";
            cout<<"3.GotoFullProfilepage\n";
            cout<<"4.Logout\n";
            cout<<"Enter your choice(1-4):";
            cin>>choice;
switch (choice) {
            case 1: {
                string GoToAboutUsPage ;
                cout<<"My name is Abdi.I enjoy the thrill of programming and creating new codes"<<endl;
                cout<<"Enter your choice(1-4):";
            cin>>choice;

                break;
            }
            case 2: {
                string GoToServicePage;
                cout << "By learning codding you can earn money from diffrent sources"<<endl;
                cout<<"Enter your choice(1-4):";
            cin>>choice;
                break;
                }
                case 3:  {
                string GotoFullProfilepage;
                string firstName;
    string lastName;
    string fullName;
    string favoriteMeal;
    string favoriteMovie;
    // Input user information
                // Input user information using getline
               cout << "Enter your firstName: ";
    getline( cin, firstName);
    cout << "Enter your lastName: ";
    getline( cin, lastName);
    cout << "Enter your full name: ";
    getline( cin, fullName);
    cout << "Enter your favoriteMeal: ";
    getline( cin, favoriteMeal);
    cout << "Enter your favoriteMovie: ";
    getline( cin, fullName);
           // Display the user profile
    cout << "\nUser Profile:\n";
    cout << "firstName: " << firstName <<  endl;
    cout << "lastName: " << lastName <<  endl;
    cout << "Full Name: " << fullName <<  endl;
    cout << "favoriteMeal: " << favoriteMeal <<  endl;
    cout << "favoriteMovie: " << favoriteMovie <<  endl;


                break;
                }
                case 4: {
                    string Logout;
                    cout<<"Logout successful "<<endl;
                   
                    break;
                }
            default:
                cout << "Invalid choice. Please enter a valid option (1-4).\n";
                break;
        }
string username;
    int password;
//find username
    cout << "Enterusername:\n ";
    cin>> username;
//find password
    cout << "Enter the password: ";
    cin >> password;

    if (username == username) {
        cout<<"username correct";
    } else if (username != username) {
        cout<<"username invalid";
    } else if (password==password) {
        cout<<"password correct";
        
    } else if (password!=password) {
        cout<<"password invalid";
   
    } else {
        cout << "Invalid login." << endl;
        return 1; // Exit the program with an error code
    }

    cout << "username : " << username << endl;
    cout << "password: " << password << endl;

    return 0;

    }}