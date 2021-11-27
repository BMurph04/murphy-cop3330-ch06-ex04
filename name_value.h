/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Brendon Murphy
 */

#include <iostream>
#include <string>
#include <vector>

class Name_value{
    std::string name;
    int value;

public:
    Name_value(std::string name, int value);
    void setName_value(std::string name, int value);

    std::string getName(){return name;}
    int getValue(){return value;}
};

void printData(std::vector<Name_value> data);
void validInput(std::vector<Name_value> scoreData, std::string nameInput);