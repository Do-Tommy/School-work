//
//  Currency.hpp
//  Homework.1
//
//  Created by Tommy on 1/15/20.
//  Copyright © 2020 Tommy. All rights reserved.
//

#ifndef Currency_hpp
#define Currency_hpp

#include <stdio.h>
#include <iostream>
#include <string>
#pragma once

const int SIZE = 5;

class Currency{
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
    
    Currency();
    Currency(int f, int w, std::string fN, std::string wN);
    Currency operator+(const Currency& obj) const;
    Currency operator-(const Currency& obj) const;
    
    int& operator[](int i) {
        if (i > SIZE) {
            std::cout << "Index out of bounds" << std::endl;
            return arr[0];
        }
        return arr[i];
    }
    friend std::ostream& operator<<(std::ostream& output, Currency& );
    friend std::istream& operator>>(std::istream& input, Currency&) ;
    
};


class Dollar : public Currency {
public:
    Dollar();
    Dollar(int whole, int frac);
    ~Dollar();
    Dollar operator+(const Dollar& dollar);
    Dollar operator-(const Dollar& dollar);
    friend std::istream& operator>>(std::istream& input, Dollar& D);
    friend std::ostream& operator<<(std::ostream& input, Dollar& D);
    
};

class Pound : public Currency {
public:
    Pound();
    Pound(int whole, int frac);
    ~Pound();
    Pound operator+(const Pound& pound);
    Pound operator-(const Pound& pound);
    friend std::istream& operator>>(std::istream& input, Pound& P);
    friend std::ostream& operator<<(std::ostream& input, Pound& P);
    
};

class Yen : public Currency {
public:
    Yen();
    Yen(int whole, int frac);
    ~Yen();
    Yen operator+(const Yen& yen);
    Yen operator-(const Yen& yen);
    friend std::istream& operator>>(std::istream& input, Yen& Y);
    friend std::ostream& operator<<(std::ostream& input, Yen& Y);
    
};

class Rupee : public Currency {
public:
    Rupee();
    Rupee(int whole, int fract);
    ~Rupee(); // destructor to empty dollars in wallet
    Rupee operator+(const Rupee& rupee);
    Rupee operator-(const Rupee& rupee1);
    friend std::istream& operator>>(std::istream& input, Rupee& R);
    friend std::ostream& operator<<(std::ostream& output, Rupee& R);
};

class Yuan : public Currency {
public:
    Yuan();
    Yuan(int whole, int fract);
    ~Yuan(); // destructor to empty dollars in wallet
    Yuan operator+(const Yuan& yuan);
    Yuan operator-(const Yuan& yuan);
    friend std::istream& operator>>(std::istream& input, Yuan& Y);
    friend std::ostream& operator<<(std::ostream& output,Yuan& Y);
};


#endif /* Currency_hpp */
