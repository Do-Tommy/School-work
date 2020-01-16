//
//  Wallet.cpp
//  Homework.1
//
//  Created by Tommy on 1/15/20.
//  Copyright © 2020 Tommy. All rights reserved.
//

#include "Wallet.hpp"
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

void Wallet::emptyWallet() {
    for(int i = 0; i < 5; i++) {
        cur[i]->setWholeNum(0);
        cur[i]->setFractNum(0);
    }
    
}

Currency& Wallet::operator[] (const int nIndex) {
    
  return *cur[nIndex];
}

void Wallet::addMoney(int input2) {
    
    
    if(input2 == 1){
        Dollar temp;
        std::cin >> temp;
        *cur[0] = *cur[0] + temp;
    }
    else if(input2 == 2){
        Pound temp;
        std::cin >> temp;
        *cur[1] = *cur[1] + temp;
    }
    else if(input2 == 3) {
        Yen temp;
        std::cin >> temp;
                *cur[2] = *cur[2] + temp;
    }
    else if(input2 == 4){
        Rupee temp;
        std::cin >> temp;
                *cur[3] = *cur[3] + temp;
        
    }
    else if(input2 == 5) {
        Yuan temp;
        std::cin >> temp;
                *cur[4] = *cur[4] + temp;
}
}

void Wallet::subtractMoney(int input2) {

        if(input2 == 1){
            Dollar temp;
            std::cin >> temp;
            *cur[0] = *cur[0] - temp;
        }
        else if(input2 == 2){
            Pound temp;
            std::cin >> temp;
            *cur[1] = *cur[1] - temp;
        }
        else if(input2 == 3) {
            Yen temp;
            std::cin >> temp;
                    *cur[2] = *cur[2] - temp;
        }
        else if(input2 == 4){
            Rupee temp;
            std::cin >> temp;
                    *cur[3] = *cur[3] - temp;
            
        }
        else if(input2 == 5) {
            Yuan temp;
            std::cin >> temp;
                    *cur[4] = *cur[4] - temp;
    }
}

void Wallet::displayWallet() {
    for(int i = 0; i < 5; i++) {
        std::cout << *cur[i];
    }
}

/*void Wallet::emptyWallet() {
        *cur[0] = *cur[0] - *cur[0];
        *cur[1] = *cur[1] - *cur[1];
        *cur[2] = *cur[2] - *cur[2];
        *cur[3] = *cur[3] - *cur[3];
        *cur[4] = *cur[4] - *cur[4];
    }
 */

void Wallet::removeCurType(int input2) {
    
        if (input2 == 1)
        {
            *cur[0] = *cur[0] - *cur[0];
            
        }
        else if (input2 == 1)
        {
            *cur[1] = *cur[1] - *cur[1];
            
        }
        else if (input2 == 1)
        {
            *cur[2] = *cur[2] - *cur[2];
            
        }
        else if (input2 == 1)
        {
            *cur[3] = *cur[3] - *cur[3];
            
        }
        else if (input2 == 1)
        {
            *cur[4] = *cur[4] - *cur[4];
            
        }
        else
            std::cout << "Invalid input" << std::endl;
    }

