
#include "Currency.h"
#include <iostream>
#include <string>

using namespace std;


string Currency::getCurrencyName() {
    return currency_name;
}

string Currency::getFractionalName() {
    return fractional_name;
}

int Currency::getWholeNum() {
    return wholeNum;
}

int Currency::getFractNum() {
    return fractNum;
}

Currency Currency::operator+(const Currency& obj) const {
    
    Currency temp = obj;
    temp.wholeNum = wholeNum + obj.wholeNum;
    temp.fractNum = fractNum + obj.fractNum;
    if (temp.fractNum > 99) {
        temp.wholeNum += temp.fractNum / 100;
        temp.fractNum = temp.fractNum % 100;
    }
    return temp;
}

Dollar::Dollar() {};

Dollar::Dollar(int whole, int fract) : Currency() {
        currency_name = "Dollar";
        fractional_name = "Cent";
        wholeNum = whole;
        fractNum = fract;
    }

Dollar::~Dollar() {};

Dollar Dollar::operator+(const Dollar& dollar) {
        Dollar tempDol = dollar;
        tempDol.wholeNum = wholeNum + dollar.wholeNum;
        wholeNum++;
        tempDol.fractNum = fractNum + dollar.fractNum;
        fractNum++;
        return tempDol;
    }

Dollar Dollar::operator-(const Dollar& dollar1) {
        Dollar tempDol1;
        tempDol1.wholeNum = wholeNum = dollar1.wholeNum;
        tempDol1.fractNum = fractNum = dollar1.fractNum;
        return tempDol1;
    }

istream& operator>>(istream& input, Dollar& D) {
        input >> D.wholeNum >> D.fractNum;
        return input;
    }

ostream& operator<<(ostream& output, Dollar& D) {
        output << "You now have " << D.wholeNum << " Dollars and " << D.fractNum << " Cents in your wallet" << endl;
        return output;
    }

Pound::Pound() {};

Pound::Pound(int whole, int fract) {
        currency_name = "Pound";
        fractional_name = "Pence";
        wholeNum = whole;
        fractNum = fract;
    }
Pound::~Pound() {};
Pound Pound::operator+(const Pound& pound) {
        Pound tempPou;
        tempPou.wholeNum = wholeNum + pound.wholeNum;
        tempPou.fractNum = fractNum + pound.fractNum;
        return tempPou;
    }

Pound Pound::operator-(const Pound& pound1) {
        Pound tempPou1;
        tempPou1.wholeNum = wholeNum - pound1.wholeNum;
        tempPou1.fractNum = fractNum - pound1.fractNum;
        return tempPou1;
    }

    istream& operator>>(istream& input, Pound& P) {
        input >> P.wholeNum >> P.fractNum;
        return input;
    }

    ostream& operator<<(ostream& output,Pound& P) {
        output << "You now have " << P.wholeNum << " Euros and " << P.fractNum << " Cents in your wallet" << endl;
        return output;
    }



Yen::Yen() {};

Yen::Yen(int whole, int fract) {
        currency_name = "Yen";
        fractional_name = "Sen";
        wholeNum = whole;
        fractNum = fract;
    }

Yen::~Yen() {};

    Yen Yen::operator+(const Yen& yen) {
        Yen tempYen;
        tempYen.wholeNum = wholeNum + yen.wholeNum;
        tempYen.fractNum = fractNum + yen.fractNum;
        return tempYen;
    }

    Yen Yen::operator-(const Yen& yen1) {
        Yen tempYen1;
        tempYen1.wholeNum = wholeNum - yen1.wholeNum;
        tempYen1.fractNum = fractNum - yen1.fractNum;
        return tempYen1;
    }

    istream& operator>>(istream& input, Yen& Y) {
        input >> Y.wholeNum >> Y.fractNum;
        return input;
    }

    ostream& operator<<(ostream& output, Yen& Y) {
        output << "You now have " << Y.wholeNum << " Yens and " << Y.fractNum << " Sens in your wallet" << endl;
        return output;
    }



Rupee::Rupee() {};

Rupee::Rupee(int whole, int fract) {
        currency_name = "Rupee";
        fractional_name = "Paise";
        wholeNum = whole;
        fractNum = fract;
    }
Rupee::~Rupee() {}; // destructor to empty dollars in wallet

    Rupee Rupee::operator+(const Rupee& rupee) {
        Rupee tempRupee;
        tempRupee.wholeNum = wholeNum + rupee.wholeNum;
        tempRupee.fractNum = fractNum + rupee.fractNum;
        return tempRupee;
    }
    Rupee Rupee::operator-(const Rupee& rupee1) {
        Rupee tempRupee1;
        tempRupee1.wholeNum = wholeNum - rupee1.wholeNum;
        tempRupee1.fractNum = fractNum - rupee1.fractNum;
        return tempRupee1;
    }

    istream& operator>>(istream& input, Rupee& R) {
        input >> R.wholeNum >> R.fractNum;
        return input;
    }

    ostream& operator<<(ostream& output, Rupee& R) {
        output << "You now have " << R.getWholeNum() << " Rupees and " << R.getFractNum() << " Paises in your wallet" << endl;
        return output;
    }



Yuan::Yuan() {};
Yuan::Yuan(int whole, int fract) {
        currency_name = "Yuan";
        fractional_name = "Fen";
        wholeNum = whole;
        fractNum = fract;
    }
Yuan::~Yuan() {};

    Yuan Yuan::operator+(const Yuan& yuan) {
        Yuan tempYuan;
        tempYuan.wholeNum = wholeNum + yuan.wholeNum;
        tempYuan.fractNum = fractNum + yuan.fractNum;
        return tempYuan;
    }

    Yuan Yuan::operator-(const Yuan& yuan1) {
        Yuan tempYuan1;
        tempYuan1.wholeNum = wholeNum - yuan1.wholeNum;
        tempYuan1.fractNum = fractNum - yuan1.fractNum;
        return tempYuan1;
    }

    istream& operator>>(istream& input, Yuan& Y) {
        input >> Y.wholeNum >> Y.fractNum;
        return input;
    }

    ostream& operator<<(ostream& output,Yuan& Y) {
        output << "You now have " << Y.wholeNum << " Yuans and " << Y.fractNum << " Fens in your wallet" << endl;
        return output;
    }

