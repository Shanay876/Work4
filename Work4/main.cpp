//
//  main.cpp
//  ExtraCredit
//
//  Created by Shanay Saddler on 11/18/14.
//  Copyright (c) 2014 ___SHANAY SADDLER___. All rights reserved.
//
#include <fstream>//header files
#include <iostream>//This is for input and output of the file
#include <string>
#include <iomanip>
#include <cmath>
#include <sstream>
using namespace std;
int GetData(int& , int& ); // Function prototype
void PrintData(int,int);
int main()
{
    cout<<"*************************************************************************************************\n";//Heading
    cout << "Shanay Saddler" << endl;
    cout << "ID 02713672" << endl;
    cout << "SYCS-135 Computer Science I" << endl;
    cout << "Extra Credit" << endl;
    cout << "November 18, 2014" << endl;
    cout<<"*************************************************************************************************\n";
    int miles, hour, information;
    information = GetData(miles, hour);
    PrintData(miles, hour);
    return 0;
}
int GetData(int& MILES, int& HOUR)
{
    cout << "Enter the number of miles:";// The user has been prompted to input two values representing the miles and hours
    cin >> MILES;
    cout << "Enter the number of hours:";// These values have been read
    cin >> HOUR;
    return (MILES) && (HOUR);//  return miles and hour.
}
void PrintData(int miles, int hour)
{
    float MPH;
    MPH = (float)miles/hour;
    cout<< "The number of miles is "<<miles<<"\n";
    cout<< "The number of hours is "<<hour<<"\n";
    cout<< "The number of miles per hour is "<<setprecision(4)<<MPH<<"\n";
}
/*
 *************************************************************************************************
 Shanay Saddler
 ID 02713672
 SYCS-135 Computer Science I
 Extra Credit
 November 18, 2014
 *************************************************************************************************
 Enter the number of miles:12340
 Enter the number of hours:460
 The number of miles is 12340
 The number of hours is 460
 The number of miles per hour is 26.83
 Program ended with exit code: 0
 */
