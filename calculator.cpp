#include <iostream>
using namespace std;

int main(){

    double dNum1 = 0;
    double dNum2 = 0;
    double dResult = 0;
    int    iChoice = 0;

    cout<<"\t\t\t\t*** Welcome to our Calculator V1 ***\n\n\n\n";

    CalculatorStartingPoint:

    cout<<"Please enter 2 numbers: ";
    cin>>dNum1>>dNum2;

    if (cin.fail())
    {
        cout<<"You should enter correct values\n\n";
        cin.clear();
        cin.ignore(10000,'\n');
        goto CalculatorStartingPoint;
    }

    MenuStartingPoint:

    cout<<"\n Menu Options:\n";
    cout<<"\tTo sum the numbers enter 1\n";
    cout<<"\tTo subtract the numbers enter 2\n";
    cout<<"\tTo multiply the numbers enter 3\n";
    cout<<"\tTo divide the numbers enter 4\n";
    cout<<"\tTo enter the 2 numbers again, enter 5\n";

    cout<<"\n\tEnter the choice: ";
    cin>>iChoice;

    if (cin.fail())
    {
        cout<<"\t\tYou should enter correct value\n\n";
        cin.clear();
        cin.ignore(10000,'\n');
        goto MenuStartingPoint;
    }
    
    if (iChoice ==1)
        dResult = dNum1 + dNum2;
    else if (iChoice == 2)
        dResult = dNum1 - dNum2;
    else if (iChoice == 3)
        dResult = dNum1 * dNum2;
    else if (iChoice == 4)
    {
        if (dNum2 == 0.0)
        {
            cout<<"\t\tWe can't divide by zero. Retry other numbers\n\n";
            goto CalculatorStartingPoint;
        }
        dResult = dNum1 / dNum2;
    }
    else if (iChoice == 5)
        goto CalculatorStartingPoint;
    else
    {
        cout<<"\t\tChoice must be from 1 to 5. Retry again\n\n";
        goto MenuStartingPoint;
    }
    cout<<"\nResult of opertation: "<<dResult<<"\n";
}