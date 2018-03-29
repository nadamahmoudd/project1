#include <iostream>

using namespace std;

int main()
{
// FCI – Programming 1 – 2018 - Assignment 2
// Program Name: individual task.cpp
// Last Modification Date: 1/3/2018
// Author1 and ID and Group: Nada Mohamed Mahmoud 20170370 G-14
// Author2 and ID and Group: Aya Amr Mohamed 20170359 G-14
// Teaching Assistant: Eng:
    const float increase=0.076;
    float a=0;
    float annual;
    float monthly;
    float new_monthly;
    string T="The first";
    string True="repeat";
    while (True=="repeat"){
    cout << "enter " << T << " Annual Income: ";
    cin >> annual;
    T="The other";
    monthly=annual/12.0;
    a=monthly*increase;
    new_monthly=monthly+a;
    cout << "The amount of increase: " << a << " EL" << endl;
    cout << "The new monthly salary for 6 months: " << new_monthly << " EL" << endl;
    cout << "The new annual salary: " << (6*new_monthly)+(6*monthly) << " EL" << endl;
    cout << " " << endl;
    cout << "done or no repeat: ";
    cin >> True;
          }
    return 0;
}
