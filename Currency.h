#ifndef CURRENCY_H
#define CURRENCY_H

#include <iostream>
#include <string>

const int SIZE = 5;

class Currency {
protected:
    std::string currency_name, fractional_name;
    int wholeNum, fractNum;
    int arr[SIZE];

public:
    std::string getCurrencyName();
    std::string getFractionalName();
    int getWholeNum();
    int getFractNum();

    Currency() {
        for (int i = 0; i <= SIZE; i++) {
            arr[i] = i;
        }
    }

    int& operator[](int i) {
        if (i > SIZE) {
            std::cout << "Index out of bounds" << endl;
            return arr[0];
        }
        return arr[i];
    }
    friend std::ostream& operator<<(std::ostream& output, const Currency& ());
    friend std::istream& operator>>(std::istream& input, Currency& ());
};

#endif // !CURRENCY_H