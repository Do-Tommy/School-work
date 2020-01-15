
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

    void setWholeNum(int a) { wholeNum = a; };
    void setFractNum(int a) { fractNum = a; }
    int getWholeNum();
    int getFractNum();

    Currency() {
        
    }
    Currency operator+(const Currency& obj) const;
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

