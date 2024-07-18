#include <iostream>
#include <string>
using namespace std;
//class for oop
class myClass {
public:
//creating variables and functions
    void myGraphics(string fname) {
        cout << fname;
    }
    void myTitle(string lname) {
        cout << lname;
    }
    void myGraphics_1(string jname) {
        cout << jname;
    }
    string username;
    bool loop = true;
    bool loop_2 = true;
    bool loop_3 = true;
    int choice;
    string password;
    double wallet_2 = 0;
    string unit = "RM";
};

int main() {
    myClass myObj; //create an object for the class
    //calling the functions
    myObj.myGraphics("             ==========\n");
    myObj.myTitle("Welcome to Healing Whispers Pharmacy!\n");
    myObj.myGraphics_1("             ==========\n");
    //simple sign up registration
    cout << "To continue, please sign up.";
    cout << "\nUsername: ";
    cin >> myObj.username; //take user inputted username

    //while loop to ensure user inputs correctly
    while (myObj.loop) {
        cout << "Password: ";
        cin >> myObj.password; //take user inputted password
        //if...else if...if statement for user password character length
        if (myObj.password.length() < 8) {
            cout << "Password must be 8 characters long. Retype Password.\n";
        } else if (myObj.password.length() > 8) {
            cout << "Password must be 8 characters long. Retype Password.\n";
        } else {
            myObj.loop = false; // Exit loop after successful password entry
        }

        //display menu page
        while (myObj.loop_3) {
            cout << "1. Account Details\n2. Catalog page\n3. E-Wallet\n";
            cin >> myObj.choice; //get user choice
            switch (myObj.choice) {
            //to allow user to reveal set password
            case 1:
                cout << myObj.username;
                cout << "\n********\n"; //hashed out password
                char user_Choice; //a character variable to store Y or N
                cout << "Reveal Password? Ensure no one is beside you. Y/N\n"; //display warning message
                cin >> user_Choice; //get user input
                //if statement to reveal set password
                if (user_Choice == 'Y') {
                    cout << myObj.password << endl; // Print the password
                }
                break; // Added break to prevent fall-through
            //catalog page
            case 2:
                char medicine_Name; //create a character to store A, B...
                cout << "What medication do you want to buy today?\n\n";
                cout << "A. Paracetamol\nB. Antibiotics\nOr\nType the medicine you need\n";
                cin >> medicine_Name; //get user input
                //if...else if...else statement for different types of medicines
                if (medicine_Name == 'A') {
                    double currency = 3.55; //price of medicine
                    myObj.wallet_2; //user's e-wallet
                    cout << "That will be " << myObj.unit << currency; //display medicine price
                    double sub = myObj.wallet_2 -= currency; //equation for subtracting price of medicine from e-wallet
                    cout << "\nLeftover E-Wallet balance: " << myObj.unit << sub; //leftover E-Wallet balance
                    myObj.loop_3 = false; //end loop
                } else if (medicine_Name == 'B') {
                    double currency_1 = 25.67; //price of medicine
                    myObj.wallet_2; //user's e-wallet
                    double sub_2 = myObj.wallet_2 -= currency_1; //display medicine price
                    cout << "That will be " << myObj.unit << currency_1; //equation for subtracting price of medicine from e-wallet
                    cout << "\nLeftover E-Wallet balance: " << myObj.unit << sub_2; //leftover E-Wallet balance
                    myObj.loop_3 = false; //end loop
                } else {
                    double currency_2 = 10.50; //price of medicine
                    myObj.wallet_2; //user's e-wallet
                    double sub_3 = myObj.wallet_2 -= currency_2; //display medicine price
                    cout << "That will be " << myObj.unit << currency_2; //equation for subtracting price of medicine from e-wallet
                    cout << "\nLeftover E-Wallet balance: " << myObj.unit << sub_3; //leftover E-Wallet balance
                    myObj.loop_3 = false; //end loop
                }
                break; // Added break to prevent fall-through
            case 3:
                int wallet = 0; //create a variable to display 0
                myObj.wallet_2; //create a variable to add to wallet variable
                cout << "Your e-wallet balance: RM" << wallet << endl; //display 0
                cout << "do you want to reload your e-wallet? Y/N\n"; //Prompt user input
                char Y_N_2; //character to store user input
                cin >> Y_N_2; //get user input
                //if...else statement for user input
                if (Y_N_2 == 'Y') {
                    cout << "Enter the amount you want to reload: ";
                    cin >> myObj.wallet_2; //store user input into wallet_2 variable
                    cout << "\nYour new e-wallet balance: RM" << wallet + myObj.wallet_2 <<endl; //add user input with the first wallet variable
                    myObj.loop_3 = false; //end loop
                } else {
                    cout << "Have a great day!" << endl; //display a message
                    myObj.loop_3 = false; //end loop
                }
            }
            char myLetter; //character to store Y or N
            cout << "\nDo you wish to continue? Y/N "; //Prompt uset input
            cin >> myLetter; //get user input
            //if.. else statement to continue while loop_3 or end program all together
            if (myLetter == 'Y') {
                myObj.loop_3 = true; //continue the loop
            } else {
                cout << "Have a nice day!";
                myObj.loop_3 = false; //end loop; program
            }
        }
    }
    return 0;
}