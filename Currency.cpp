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

class Dollar : public Currency {
public:
    Dollar() {};

    Dollar(int whole, int fract) : Currency() {
        currency_name = "Dollar";
        fractional_name = "Cent";
        wholeNum = whole;
        fractNum = fract;
    }

    ~Dollar() {};

    Dollar operator+(const Dollar& dollar) {
        Dollar tempDol = dollar;
        tempDol.wholeNum = wholeNum + dollar.wholeNum;
        wholeNum++;
        tempDol.fractNum = fractNum + dollar.fractNum;
        fractNum++;
        return tempDol;
    }

    Dollar operator-(const Dollar& dollar1) {
        Dollar tempDol1;
        tempDol1.wholeNum = wholeNum = dollar1.wholeNum;
        tempDol1.fractNum = fractNum = dollar1.fractNum;
        return tempDol1;
    }

    friend istream& operator>>(istream& input, Dollar& D) {
        input >> D.wholeNum >> D.fractNum;
        return input;
    }

    friend ostream& operator<<(ostream& output, const Dollar& D) {
        output << "You now have " << D.wholeNum << " Dollars and " << D.fractNum << " Cents in your wallet" << endl;
        return output;
    }
};

class Euro : public Currency {
public:
    Euro() {};

    Euro(int whole, int fract) {
        currency_name = "Euro";
        fractional_name = "Cent";
        wholeNum = whole;
        fractNum = fract;
    }
    ~Euro() {};
    Euro operator+(const Euro& euro) {
        Euro tempEur;
        tempEur.wholeNum = wholeNum + euro.wholeNum;
        tempEur.fractNum = fractNum + euro.fractNum;
        return tempEur;
    }

    Euro operator-(const Euro& euro1) {
        Euro tempEur1;
        tempEur1.wholeNum = wholeNum - euro1.wholeNum;
        tempEur1.fractNum = fractNum - euro1.fractNum;
        return tempEur1;
    }

    friend istream& operator>>(istream& input, Euro& E) {
        input >> E.wholeNum >> E.fractNum;
        return input;
    }

    friend ostream& operator<<(ostream& output, const Euro& E) {
        output << "You now have " << E.wholeNum << " Euros and " << E.fractNum << " Cents in your wallet" << endl;
        return output;
    }
};

class Yen : public Currency {
public:
    Yen() {};

    Yen(int whole, int fract) {
        currency_name = "Yen";
        fractional_name = "Sen";
        wholeNum = whole;
        fractNum = fract;
    }

    ~Yen() {};

    Yen operator+(const Yen& yen) {
        Yen tempYen;
        tempYen.wholeNum = wholeNum + yen.wholeNum;
        tempYen.fractNum = fractNum + yen.fractNum;
        return tempYen;
    }

    Yen operator-(const Yen& yen1) {
        Yen tempYen1;
        tempYen1.wholeNum = wholeNum - yen1.wholeNum;
        tempYen1.fractNum = fractNum - yen1.fractNum;
        return tempYen1;
    }

    friend istream& operator>>(istream& input, Yen& Y) {
        input >> Y.wholeNum >> Y.fractNum;
        return input;
    }

    friend ostream& operator<<(ostream& output, const Yen& Y) {
        output << "You now have " << Y.wholeNum << " Yens and " << Y.fractNum << " Sens in your wallet" << endl;
        return output;
    }
};

class Rupee : public Currency {
public:
    Rupee() {};

    Rupee(int whole, int fract) {
        currency_name = "Rupee";
        fractional_name = "Paise";
        wholeNum = whole;
        fractNum = fract;
    }
    ~Rupee() {}; // destructor to empty dollars in wallet

    Rupee operator+(const Rupee& rupee) {
        Rupee tempRupee;
        tempRupee.wholeNum = wholeNum + rupee.wholeNum;
        tempRupee.fractNum = fractNum + rupee.fractNum;
        return tempRupee;
    }
    Rupee operator-(const Rupee& rupee1) {
        Rupee tempRupee1;
        tempRupee1.wholeNum = wholeNum - rupee1.wholeNum;
        tempRupee1.fractNum = fractNum - rupee1.fractNum;
        return tempRupee1;
    }

    friend istream& operator>>(istream& input, Rupee& R) {
        input >> R.wholeNum >> R.fractNum;
        return input;
    }

    friend ostream& operator<<(ostream& output, const Rupee& R) {
        output << "You now have " << R.wholeNum << " Rupees and " << R.fractNum << " Paises in your wallet" << endl;
        return output;
    }
};

class Yuan : public Currency {
public:
    Yuan() {};
    Yuan(int whole, int fract) {
        currency_name = "Yuan";
        fractional_name = "Fen";
        wholeNum = whole;
        fractNum = fract;
    }
    ~Yuan() {};

    Yuan operator+(const Yuan& yuan) {
        Yuan tempYuan;
        tempYuan.wholeNum = wholeNum + yuan.wholeNum;
        tempYuan.fractNum = fractNum + yuan.fractNum;
        return tempYuan;
    }

    Yuan operator-(const Yuan& yuan1) {
        Yuan tempYuan1;
        tempYuan1.wholeNum = wholeNum - yuan1.wholeNum;
        tempYuan1.fractNum = fractNum - yuan1.fractNum;
        return tempYuan1;
    }

    friend istream& operator>>(istream& input, Yuan& Y) {
        input >> Y.wholeNum >> Y.fractNum;
        return input;
    }

    friend ostream& operator<<(ostream& output, const Yuan& Y) {
        output << "You now have " << Y.wholeNum << " Yuans and " << Y.fractNum << " Fens in your wallet" << endl;
        return output;
    }
};