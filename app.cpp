/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Jazz Faye Olario
 */

#include "std_lib_facilities.h"

int main(){

    string operation;
    double value1, value2, result;

    cout << "Please enter the OPERATION first followed by two values separated by spaces: ";
    cin >> operation >> value1 >> value2;
        if(operation == "+" || operation == "plus"){
            result = value1 + value2;     
        }else if(operation == "-" || operation == "minus"){
            result = value1 - value2;
        }else if(operation == "*" || operation == "mul"){
            result = value1 * value2;
        }else if (operation == "/" || operation == "div"){
            if (value2 == 0){
                cout << "ERROR! Cannot be divided by zero.";
            }else{
                result = value1 / value2;
            } 
        }else{
            cout << "Input not valid. Please try again.";
        }

            cout << value1 << " " << operation << " " << value2 << " = " << result;
}

