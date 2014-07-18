/* 
 * File:   main.cpp
 * Author: C. Phillip Lierz
 * Purpose: Testing Applications
 * Created on July 18, 2014, 11:08 AM
 * 5)  Develop an application that will determine the gross pay for 
 * employees. The company pays "straight-time" for the 
 * first 40 hours worked, double time for all hours worked in 
 * excess of 40 hours but less than 50 hours, and triple time for any 
 * hours worked over 50 hours. Inputs to the program would be hours
 * worked and rate of pay.  Output would be gross pay.
 * Sample Input
 * 55
 * 10
 * Output
 * $750
 */

#include <cstdlib>
#include <iostream>
#include <ctime>
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;

int main(int argc, char** argv) {
    //Define Variables
    unsigned short hrswork, ratepay;//hours worked and rate of pay
    unsigned short paycheck=0;//total pay for the week
    //Inputs
    cout<<"What is your rate of pay?"<<endl;
    cin>>ratepay;
    cout<<"What are the total number of hours you worked this week?"<<endl;
    cin>>hrswork;

    //Calculations
    if (hrswork<=40){
        paycheck=ratepay*hrswork;
    }
    else if (hrswork>40&&hrswork<=50){
        paycheck=(ratepay*40)+((hrswork-40)*ratepay*2);
    }
    else if (hrswork>50){
        paycheck=(ratepay*60)+((hrswork-50)*ratepay*3);
    }
    else{
        cout<<"Invalid hours. Try again."<<endl<<endl;
    }
    //Outputs
    cout<<"Your paycheck for this week is $"<<paycheck<<".00"<<endl<<endl;
    return 0;
}

