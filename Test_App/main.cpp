/* 
 * File:   main.cpp
 * Author: C. Phillip Lierz
 * Purpose: Testing Applications
 * Created on July 18, 2014, 11:08 AM
 * 4) An ISP has 3 different subscription packages
 *	a)  $19.95 per month, 5 hours access.  Additional hours
 *	    are $0.75 up to 20 hours then $1 for all additional
 *	    hours.
 *	b)  $24.95 per month, 15 hours access.  Additional hours
 *          are $0.75 up to 25 hours then $0.50 for each
 *	    hour above this limit.
 *	c)  $29.75 per month unlimited access
 * Write a program that calculates a customers monthly bill.  Ask which
 * package, and how many hours then display the monthly charge.  Also, output
 * when customers should transition to another package to save money.
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
    char package;//type of package
    unsigned short hrsserv,moncharge;//hours of service, monthly charge

    //Inputs
    cout<<"What ISP package do you have: A, B, or C?"<<endl;
    cin>>package;
    cout<<"\n How many hours of service did you use?"<<endl;
    cin>>hrsserv;

    //Calculate monthly charge and evaluate
    if (package=65||package==97)
    {
        if (hrsserv<=5)
        {
            moncharge=1995;
        }
        else if (hrsserv>5&&hrsserv<20)
        {
            moncharge=1995+((hrsserv-5)*75);
        }
        else (hrsserv>20);
        {
            moncharge=1995+((hrsserv-5)*75)+((hrsserv-20)*25);
        }
            if (moncharge<2495)
            {
                cout<<"You are using the optimal ISP package."<<endl;
            }
            else if (moncharge>=2495&&moncharge<2995)
            {
                cout<<"To save money, switch to ISP package B."<<endl;
            }
            else
            {
                cout<<"To save money, switch to ISP package C."<<endl;
            }
    }
    else if (package==66||package==98)
    {
        if (hrsserv<=15)
        {
            moncharge=2495;
        }
        else if (hrsserv>15&&hrsserv<25)
        {
            moncharge=2495+((hrsserv-5)*75);
        }
        else (hrsserv>25);
        {
            moncharge=2495+((hrsserv-5)*75)-((hrsserv-20)*25);
        }
            if (moncharge<2495)
            {
                cout<<"To save money, switch to ISP package A."<<endl;
            }
            else if (moncharge>=2495&&moncharge<2995)
            {
                cout<<"You are using the optimal ISP package."<<endl;
            }
            else
            {
                cout<<"To save money, switch to ISP package C."<<endl;
            }
    }
    else (package==67||package==99);
    {
        moncharge=2995;
        if (moncharge<2495)
        {
            cout<<"To save money, switch to ISP package A."<<endl;
        }
        else if (moncharge>=2495&&moncharge<2995)
        {
            cout<<"To save money, switch to ISP package B."<<endl;
        }
        else;
        {
            cout<<"You are using the optimal ISP package."<<endl;
        }
    }
    
    //Evaluate

    //Outputs
    return 0;
}

