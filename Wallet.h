#include <iostream>
#include "Currency.h"
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
    int getNumOfCurTypes();

    bool checkCurExists(Currency &cur);

    bool checkWallet();

    void addMoney(Currency &cur, int input);

    void subtractMoney(Currency &cur, int output);

    void removeAllCur();

    void removeCurType(Currency &cur);

};
