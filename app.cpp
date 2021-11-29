/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Jazz Faye Olario
 */

#include "std_lib_facilities.h"

int main(){
    
    //Declaration of variables
    string operation;   //for the operation such as (+, -, *, /) or (plus, minus, multiply, divide)
    double value1, value2, result;

    cout << "Please enter the OPERATION first followed by two values separated by spaces: ";
    cin >> operation >> value1 >> value2;   //user input
        if(operation == "+" || operation == "plus"){    //if user inputs "+ or plus"
            result = value1 + value2;     
        }else if(operation == "-" || operation == "minus"){ 
            result = value1 - value2;
        }else if(operation == "*" || operation == "mul"){
            result = value1 * value2;
        }else if (operation == "/" || operation == "div"){ 
            if (value2 == 0){       //if condition if user inputs "0" on the value 
                cout << "Error: Cannot be divided by zero.";    //gives an error that it cannot be divided by zero
            }else{
                result = value1 / value2;   //Otherwise it gives you the answer
            } 
        }else{
            cout << "Input not valid. Please try again.";   //if user inputs anything else other than the basic operation above
        }
            //prints the numbers typed by the user as well as the result
            cout << value1 << " " << operation << " " << value2 << " = " << result;

    return 0;
}

