/* 
 * File:   main.cpp
 * Author: C. Phillip Lierz
 * Purpose: CSC5 Midterm
 * Created on July 17, 2014, 10:06 AM
 */
//System Libraries
#include <cstdlib>
#include <iostream>
#include <ctime>
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;

//Global Constants

//Function Prototypes
void Menu();
int getN();
void def(int);
void problem1();
void problem2();
void problem3();
void problem4();
void problem5();
void problem6();

//Execution begins here
int main(int argv,char *argc[]){
    int inN;
    do{
        Menu();
        inN=getN();
        switch(inN){
        case 1: problem1();break;
        case 2: problem2();break;
        case 3: problem3();break;
        case 4: problem4();break;
        case 5: problem5();break;
        case 6: problem6();break;
            default:;
        };
    }while(inN<7);
    return 0;
}

//Menu Function
void Menu(){
    cout<<"Type 1 for problem 1"<<endl;
    cout<<"Type 2 for problem 2"<<endl;
    cout<<"Type 3 for problem 3"<<endl;
    cout<<"Type 4 for problem 4"<<endl;
    cout<<"Type 5 for problem 5"<<endl;
    cout<<"Type 6 for problem 6"<<endl;
    cout<<"Type 7 to exit \n"<<endl;
}

//Choose problem number function
int getN(){
    int inN;
    cin>>inN;
    return inN;
}

//Solution to problem 1
void problem1(){
    cout<<"In problem # 1"<<endl<<endl;
    //Declare Variables
    unsigned short LastNum=1;//last decrement of the counter
    unsigned short Countdown;//Counter
    char Space=' ';
    //Inputs
    cout<<"Input a number."<<endl;
    cin>>Countdown;
    //Calculations and Output
    while (Countdown>=LastNum)
    {
    cout<<string(Countdown, Space)<<Countdown<<endl;
    Countdown--; //decrement the counter.
    }
}

//Solution to problem 2
void problem2(){
    cout<<"In problem # 2"<<endl<<endl;
    //Declare Variables
    int FirstDig,SecondDig,ThirdDig,FourthDig;//1st digit, 2nd digit, 3rd digit, 4th digit
    char Star='*';
    //Inputs
    cout<<"Input a four digit number"<<endl;
    cin>>FirstDig>>SecondDig>>ThirdDig>>FourthDig;
    //Outputs
    cout<<FirstDig<<" ";
        if (FirstDig>0&&FirstDig<10){
            cout<<string(FirstDig, Star)<<endl;
        }else cout<<"?"<<endl;
    cout<<SecondDig<<" ";
        if (SecondDig>0&&SecondDig<10){
            cout<<string(SecondDig, Star)<<endl;
        }else cout<<"?"<<endl;
    cout<<ThirdDig<<" ";
        if (ThirdDig>0&&ThirdDig<10){
            cout<<string(ThirdDig, Star)<<endl;
        }else cout<<"?"<<endl;
    cout<<FourthDig<<" ";
        if (FourthDig>0&&FourthDig<10){
            cout<<string(FourthDig, Star)<<endl;
        }else cout<<"?"<<endl;
    cout<<endl;
}

//Solution to problem 3
void problem3(){
    cout<<"In problem # 3"<<endl<<endl;
    //Declare Variables
    unsigned short pin, balance, debits, credits;//initial balance, debits subtracted, credits added
    float endBal;//Balance at the end of the month with fees removed
    //Inputs
    //pin
    cout<<"Input 4-digit pin number."<<endl;
    cin>>pin;
    //balance
    cout<<"Input the initial balance in the account."<<endl;
    cin>>balance;
    //debits subtracted
    cout<<"Input the total value of debits charged to this account in dollars."<<endl;
    cin>>debits;
    //credits added
    cout<<"Input the total value of credits added back to this account in dollars."<<endl;
    cin>>credits;
    //Calculations
    endBal=balance-debits+credits;
    if (endBal<0){
        endBal-=27.75;
        cout<<"You have overdrawn your account and an addition $27.75 was ";
        cout<<"subtracted from the total balance."<<endl;
    }else endBal+=0;
    //Outputs
    cout<<"Your pin number is "<<pin<<endl;
    cout<<"Initial Balance $"<<balance<<endl;
    cout<<"Debits Subtracted $"<<debits<<endl;
    cout<<"Credits Added $"<<credits<<endl;
    cout.precision(2);
    cout<<fixed;
    cout<<"The total balance of your account is $"<<static_cast<float>(endBal)<<endl<<endl;
}

//Solution to problem 4
void problem4(){
    cout<<"In problem # 4"<<endl<<endl;
    //Define Variables
    char package;//type of package
    unsigned short hrsserv,moncharge;//hours of service, monthly charge

    //Inputs
    cout<<"What ISP package do you have: A, B, or C?"<<endl;
    cin>>package;
    cout<<"\nHow many hours of service did you use?"<<endl;
    cin>>hrsserv;

    //Calculate monthly charge and evaluate
    if (package==65||package==97){
        if (hrsserv<=5){
            moncharge=1995;
            cout<<setprecision(2)<<fixed<<"Your monthly charge is $"<<static_cast<float>(moncharge)/100<<endl;
            cout<<"You are using the optimal ISP Package."<<endl<<endl;
        }
        else if (hrsserv>5&&hrsserv<20){
            moncharge=1995+((hrsserv-5)*75);
            cout<<setprecision(2)<<fixed<<"Your monthly charge is $"<<static_cast<float>(moncharge)/100<<endl;
            if (hrsserv<=11){
                cout<<"You are using the optimal ISP Package."<<endl<<endl;
            }
            else if (hrsserv>11&&hrsserv<=20){
                cout<<"To save money, switch to ISP package B."<<endl<<endl;
            }
            else{
                cout<<"Invalid hours of service. Try again."<<endl<<endl;
            }
        }
        else if (hrsserv>20){
            moncharge=1995+((hrsserv-5)*75)+((hrsserv-20)*25);
            cout<<setprecision(2)<<fixed<<"Your monthly charge is $"<<static_cast<float>(moncharge)/100<<endl;
            if (hrsserv==21){
                cout<<"To save money, switch to ISP package B."<<endl<<endl;
            }
            else if (hrsserv>21){
                cout<<"To save money, switch to ISP package C."<<endl<<endl;
            }
            else{
                cout<<"Invalid hours of service. Try again."<<endl<<endl;   
            }
        }
        else{
            cout<<"Invalid hours of service. Try again."<<endl<<endl;
        }
    }
    else if (package==66||package==98){
        if (hrsserv<=11){
            moncharge=2495;
            cout<<setprecision(2)<<fixed<<"Your monthly charge is $"<<static_cast<float>(moncharge)/100<<endl;
            cout<<"To save money, switch to ISP package A."<<endl;
        }
        else if (hrsserv>11&&hrsserv<=15){
            moncharge=2495;
            cout<<setprecision(2)<<fixed<<"Your monthly charge is $"<<static_cast<float>(moncharge)/100<<endl;
            cout<<"You are using the optimal ISP Package."<<endl<<endl;
        }
        else if (hrsserv>15&&hrsserv<=21){
            moncharge=2495+((hrsserv-15)*75);
            cout<<setprecision(2)<<fixed<<"Your monthly charge is $"<<static_cast<float>(moncharge)/100<<endl;
            cout<<"You are using the optimal ISP Package."<<endl<<endl;
        }
        else if (hrsserv>21&&hrsserv<=25){
            moncharge=2495+((hrsserv-15)*75);
            cout<<setprecision(2)<<fixed<<"Your monthly charge is $"<<static_cast<float>(moncharge)/100<<endl;
            cout<<"To save money, switch to ISP package C."<<endl<<endl;
        }
        else if (hrsserv>25){
            moncharge=2495+((hrsserv-15)*75)-((hrsserv-25)*25);
            cout<<setprecision(2)<<fixed<<"Your monthly charge is $"<<static_cast<float>(moncharge)/100<<endl;
            cout<<"To save money, switch to ISP package C."<<endl<<endl;
        }
        else{
            cout<<"Invalid hours of service. Try again."<<endl<<endl;
        }
    }
    else if (package==67||package==99){
        moncharge=2995;
        cout<<setprecision(2)<<fixed<<"Your monthly charge is $"<<static_cast<float>(moncharge)/100<<endl;
        if (hrsserv<=11){
            cout<<"To save money, switch to ISP package A."<<endl<<endl;
        }
        else if (hrsserv>11&&hrsserv<=21){
            cout<<"To save money, switch to ISP package B."<<endl<<endl;
        }
        else if (hrsserv>21){
            cout<<"You are using the optimal ISP package."<<endl<<endl;
        }
        else{
            cout<<"Invalid hours of service. Try again."<<endl<<endl;
        }
    }
    else{
        cout<<"Invalid entry. Try again."<<endl<<endl;
    }
}

//Solution to problem 5
void problem5(){
    cout<<"In problem # 5"<<endl<<endl;
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
}

//Solution to problem 6
void problem6(){
    cout<<"In problem # 6"<<endl<<endl;
    //Declare variables
    float approxE=1.0f;
    int exponent,terms,factofi;//Power raising e, # of terms, factorial of i;
    //Input the value of x
    cout<<"Solve for e^x using infinite sequence"<<endl<<endl;
    cout<<"Input the value of x."<<endl;
    cout<<"Sequence = e^x = 1 + x + x^2/2! + x^3/3! + ............"<<endl;
    cin>>exponent;
    //Ask how man terms in the sequence
    cout<<"How many terms to approximate e^x"<<endl;
    cin>>terms;
    //Calculate using the infinite sequence
    char sign=-1;
    for(int i=1;i<=terms;i++){
        for (int p=1;p<=i;p++){
            factofi=factofi*p;
        }
        approxE+=(pow(exponent,i))/factofi;
    }
    //Output the approx ans
    cout<<setprecision(3)<<fixed<<"The approximate value of e^x is "<<static_cast<float>(approxE)<<endl<<endl;
}

void def(int inN){
    cout<<"You typed "<<inN<<" to exit the program"<<endl;
}