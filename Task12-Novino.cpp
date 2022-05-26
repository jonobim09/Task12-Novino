/******************************************************************************
Program to demonstrate call-be-reference parameters.
Programmed by: Jolly Novino
Date Accomplished: May 26, 2022

*******************************************************************************/
#include <iostream>

using namespace std;

//Read two integers from the keyboard.
//pass arguments by reference
//allows function to perform any changes
//on the passed value and returns any changes from
//the arguments passed
void getNumbers(int& input1, int& input2);

//Interchanges the values of variable1 and variable2.
void swapValues(int& variable1, int& variable2);

//shows the values of variable1 and variable2, in that order. 
void showResults(int output1, int output2);


int main()
{
    int firstNum, secondNum;
    
    getNumbers(firstNum,secondNum);
    swapValues(firstNum, secondNum);
    showResults(firstNum, secondNum);

    return 0;
}

void getNumbers(int& input1, int& input2)
{
    cout << "Enter two integers: ";
    cin >> input1 >> input2;
}

void swapValues (int& variable1, int& variable2)
{
    int temp;
    
    temp = variable1;
    variable1 = variable2;
    variable2 = temp;
}

void showResults(int output1, int output2)
{
    cout << "In reverse order the numbers are: "
        << output1 <<" " << output2 <<endl;
}
