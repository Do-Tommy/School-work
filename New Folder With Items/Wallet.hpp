//
//  Wallet.hpp
//  Homework.1
//
//  Created by Tommy on 1/15/20.
//  Copyright © 2020 Tommy. All rights reserved.
//

#ifndef Wallet_hpp
#define Wallet_hpp

#include <stdio.h>
#include <iostream>
#include "Currency.hpp"
#pragma once

class Wallet {
private:
    Currency * cur[5];

    int numOfCurTypes;
    int inputWholeNum;
    int inputFractNum;
    bool isCurExists;
    bool isWalletEmpty;

public:
    Wallet();
    void displayWallet();
    
    int getNumOfCurTypes();

    bool checkCurExists(Currency &cur);

    bool checkWallet();

    void addMoney(int input2);

    void subtractMoney(int output);

    void emptyWallet();

    void removeCurType(int input2);
    
    Currency &operator[](const int nIndex);

};

#endif /* Wallet_hpp */
