// Steph's 5.10_3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>

using std::cout;
using std::endl;
using std::endl;
using std::string;
using std::setw;
using std::setprecision;
using std::fixed;

string Name = "Name ";
string Income = "Income ";
string GPA = "GPA ";
string Age = "Age ";

string JamieIncome = "$12,300.00";
string LindaIncome = "$14,500.00";
string BobIncome = "$9,400.00";
string MarieIncome = "$15,129.00";
string FrankIncome = "$19,129.00";

float JamieGPA = 3.40;
float LindaGPA = 3.92;
float BobGPA = 3.12;
float MarieGPA = 4.00;

float JamieAge = 19;
float LindaAge = 22;
float BobAge = 21;
float FrankAge = 51;


int main()
{
    //Part 1
    cout << "\n Income versus GPA \n";
        cout << Name << setw(30) << Income << setw(25) << GPA <<endl;
        cout << "Jamie" << setw(32) << JamieIncome << setw(22) << fixed << setprecision(2) << JamieGPA <<endl;
        cout << "Linda" << setw(32) << LindaIncome << setw(22) << LindaGPA <<endl;
        cout << "Bob" << setw(33) << BobIncome << setw(23) << BobGPA <<endl;
        cout << "Marie" << setw(32) << MarieIncome << setw(22) << MarieGPA <<endl;
        cout << "\n ** End of Report 1 ** \n\n";
//
//    //Part 2
        cout << "\n Income versus Age \n ";
        
        cout << Name;
        cout.width(30);
        cout << Income;
        cout.width(25);
        cout << Age << endl;

        cout << "Jamie";
        cout.width(33);
        cout << JamieIncome;
        cout.width(21);
        cout << fixed;
        cout << setprecision(0);
        cout << JamieAge << endl;

        cout << "Linda";
        cout.width(33);
        cout << LindaIncome;
        cout.width(21);
        cout << LindaAge << endl;

        cout << "Bob";
        cout.width(34);
        cout << BobIncome;
        cout.width(22);
        cout << BobAge << endl;

        cout << "Frank";
        cout.width(33);
        cout << FrankIncome;
        cout.width(21);
        cout << FrankAge << endl;

        cout << "\n ** End of Report 2 ** ";
  return 0;

}
//
//// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
//// Debug program: F5 or Debug > Start Debugging menu
//
//// Tips for Getting Started: 
////   1. Use the Solution Explorer window to add/manage files
////   2. Use the Team Explorer window to connect to source control
////   3. Use the Output window to see build output and other messages
////   4. Use the Error List window to view errors
////   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
////   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
