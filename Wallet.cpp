#include "Wallet.h"
#include <iostream>
#include <string>


Wallet::Wallet() {
    cur[0] = new Dollar(0,0);
    cur[1] = new Pound(0,0);
    cur[2] = new Yen(0,0);
    cur[3] = new Rupee(0,0);
    cur[4] = new Yuan(0,0);
}

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

void Wallet::removeAllCur() {
    for(int i = 0; i < 5; i++) {
        cur[i]->setWholeNum(0);
        cur[i]->setFractNum(0);
    }
    
}

