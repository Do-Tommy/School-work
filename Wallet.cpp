#include "Wallet.h"
#include "Currency.h"
#include "Currency.cpp"
#include <iostream>
#include <string>


using namespace std;

Wallet::Wallet() {
    cur[0] = new Dollar(0, 0);
    cur[1] = new Euro(0, 0);
    cur[2] = new Yen(0, 0);
    cur[3] = new Rupee(0, 0);
    cur[4] = new Yuan(0, 0);
};
int Wallet::getNumOfCurTypes() {

	int count = 0;

	for (int i = 0; i < 5; i++) {
		if (checkCurExists(*cur[i]) == true) {
			count++;
		}
	}
	numOfCurTypes = count;
	return count;
}

bool Wallet::checkCurExists(Currency &cur) {
	if (cur.getWholeNum() > 0 && cur.getFractNum() > 0) {
		return true;
	}
	else {
		return false; 
	}
	
}

bool Wallet::checkWallet() {
	if (numOfCurTypes > 0) {
		return true;
	}
	else {
		return false; 
	}
}

Currency& Wallet::operator[] (const int nIndex) {
    
  return *cur[nIndex];
}

void Wallet::addMoney() {
    int answer1;

    cout << "Select the type of currency: " << endl << endl;
    cout << " 1. Dollar" << endl;
    cout << " 2. Euro" << endl;
    cout << " 3. Yen" << endl;
    cout << " 4. Rupee" << endl;
    cout << " 5. Yuan" << endl << endl;
    cout << "Your input: ";
    cin >> answer1;
    

    if (answer1 >= 1 && answer1 <= 5) {
        if (answer1 == 1) {
            cout << "Please enter amount of Dollars & Cents: " << endl;
            Dollar temp;
            cin >> temp;
            *cur[0] = *cur[0] + temp;
           // cout << temp;
        }
        else if (answer1 == 2) {
            cout << "Please enter amount of Euros & Cents: " << endl;
            cin >> euro;
            cout << euro;
        }
        else if (answer1 == 3) {
            cout << "Please enter amount of Yens & Sens: " << endl;
            cin >> yen;
            cout << yen;
        }
        else if (answer1 == 4) {
            cout << "Please enter amount of Rupees & Paises: " << endl;
            cin >> rupee;
            cout << rupee;
        }
        else if (answer1 == 5) {
            cout << "Please enter amount of Yuans & Fens: " << endl;
            cin >> yuan;
            cout << yuan;
        }
    }

}