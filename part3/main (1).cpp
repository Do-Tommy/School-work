#include <iostream> 
#include "Wallet.h"
#include "Currency.h"
#include "Currency.cpp"
#include "Wallet.cpp"

using namespace std;

int main() {
	int input1, input2;
    Dollar dollar;
    Pound pound;
    Yen yen;
    Rupee rupee;
    Yuan yuan;
    do {
        cout << " 1. Add money to wallet" << endl;
        cout << " 2. Subtract money from wallet" << endl;
        cout << " 3. Remove one type of currency from wallet(i.e. Dollars, Yen, ect)" << endl;
        cout << " 4. Display the contents of the wallet" << endl;
        cout << " 5. Empty the wallet" << endl;
        cout << " 6. Quit" << endl << endl;
        cout << "Please select a option: ";
        cin >> input1;

        if (input1 >= 1 && input1 <= 3) {
            cout << "Select the type of currency: " << endl << endl;
            cout << " 1. Dollar" << endl;
            cout << " 2. Pound" << endl;
            cout << " 3. Yen" << endl;
            cout << " 4. Rupee" << endl;
            cout << " 5. Yuan" << endl << endl;
            cout << "Your input: ";
            cin >> input2;
        }

        //, moves onto this to determine what type of currency it is
        if (input1 == 1 && input2 >= 1 && input2 <= 5) {
            if (input2 == 1) {
                cout << "Please enter amount of Dollars & Cents: " << endl;
                cin >> dollar;
                Wallet.addMoney(dollar, input2);
            }
            else if (input2 == 2) {
                cout << "Please enter amount of Pounds & Pences: " << endl;
                cin >> pound;
                Wallet.addMoney(pound, input2);
            }
            else if (input2 == 3) {
                cout << "Please enter amount of Yens & Sens: " << endl;
                cin >> yen;
                Wallet.addMoney(yen, input2);
            }
            else if (input2 == 4) {
                cout << "Please enter amount of Rupees & Paises: " << endl;
                cin >> rupee;
                Wallet.addMoney(rupee, input2);
            }
            else if (input2 == 5) {
                cout << "Please enter amount of Yuans & Fens: " << endl;
                cin >> yuan;
                Wallet.addMoney(yuan, input2);
            }
        }

        if (input1 == 2 && input2 >= 1 && input2 <= 5) {
            if (input2 == 1) {
                cout << "Please enter amount of Dollars & Cents: " << endl;
                cin >> dollar;
                Wallet.subtractMoney(dollar, input2);
            }
            else if (input2 == 2) {
                cout << "Please enter amount of Pounds & Pences: " << endl;
                cin >> pound;
                Wallet.subtractMoney(pound, input2);
            }
            else if (input2 == 3) {
                cout << "Please enter amount of Yens & Sens: " << endl;
                cin >> yen;
                Wallet.subtractMoney(yen, input2);
            }
            else if (input2 == 4) {
                cout << "Please enter amount of Rupees & Paises: " << endl;
                cin >> rupee;
                Wallet.subtractMoney(rupee, input2);
            }
            else if (input2 == 5) {
                cout << "Please enter amount of Yuans & Fens: " << endl;
                cin >> yuan;
                Wallet.subtractMoney(yuan, input2);
            }
        }

        //Use subtraction operator
        if (input1 == 3 && input2 >= 1 && input2 <= 5) {
            if (input2 = 1) {
                Wallet.removeCurType(1);
            }
            else if (input2 = 2) {
                //Removes all pounds & pences from wallet
                Wallet.removeCurType(2);
            }
            else if (input2 = 3) {
                //Removes all yens & sens from wallet
                Wallet.removeCurType(3);
            }
            else if (input2 = 4) {
                //Removes all rupee & paises from wallet
                Wallet.removeCurType(4);
            }
            else if (input2 = 5) {
                //Removes all yuan & fens from wallet
                Wallet.removeCurType(5);
            }
        }

        if (input1 == 4) {
            cout << dollar << endl;
            cout << pound << endl;
            cout << yen << endl;
            cout << rupee << endl;
            cout << yuan << endl;
        }

        else if (input1 == 5) {
            cout << "Emptying the wallet..." << endl;
            Wallet.emptyWallet();
        }

        //If user enters anything that isn't in 5 >= input1 >= 1
        else {
            cout << "Please enter a valid input" << endl;
        }
        //exits the program if user enters 6    
    } while (input1 != 6);
}
}