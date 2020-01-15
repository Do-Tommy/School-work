#include <iostream>
#include "Currency.h"
#include "Currency.cpp"
class Wallet {
private:
    Currency * cur[5];

    int numOfCurTypes;
    int inputWholeNum;
    int inputFractNum;
    bool isCurExists;
    bool isWalletEmpty;

public:
    Wallet() {};
    int getNumOfCurTypes();

    bool checkCurExists(Currency &cur);

    bool checkWallet();

    void addMoney();

    void subtractMoney();

    void removeAllCur();

    void addCurType();

    void removeCurType();

    Currency& operator[] (int nIndex);
};
