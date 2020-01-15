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
            if(input2 == 1) 
                *cur[0] = *cur[0] + temp;
            else if(input2 == 2)
                *cur[1] = *cur[1] + temp;
            else if(input2 == 3)    
                *cur[2] = *cur[2] + temp;
            else if(input2 == 4) 
                *cur[3] = *cur[3] + temp;
            else if(input2 == 5) 
                *cur[4] = *cur[4] + temp;
}

void Wallet::subtractMoney() {
    if (input2 == 1)
        *cur[0] = *cur[0] - temp;
    else if (input2 == 2)
        *cur[1] = *cur[1] - temp;
    else if (input2 == 3)
        *cur[2] = *cur[2] - temp;
    else if (input2 == 4)
        *cur[3] = *cur[3] - temp;
    else if (input2 == 5)
        *cur[4] = *cur[4] - temp;
}

    void Wallet::emptyWallet() {
        cur[0] = cur[0] - cur[0];
        cur[1] = cur[1] - cur[1];
        cur[2] = cur[2] - cur[2];
        cur[3] = cur[3] - cur[3];
        cur[4] = cur[4] - cur[4];
    }

    void Wallet::removeCurType() {
        if (input2 == 1) 
            cur[0] = cur[0] - cur[0];
        else if (input2 == 2) 
            cur[1] = cur[1] - cur[1];
        else if (input2 == 3) 
            cur[2] = cur[2] - cur[2];
        else if (input2 == 4) 
            cur[3] = cur[3] - cur[3];
        else if (input2 == 5) 
            cur[4] = cur[4] - cur[4];
        else 
            cout << "Invalid input" << endl;
    }
