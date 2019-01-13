/*
*************************************************************************************************
* A program that uses a while statement to input the miles driven and gallons used for each     *
* tankful of gas. The program will calculate and display the miles per gallon obtained for each *
* tankful and print the combined miles per gallon obtained for all tankfuls up to this point.   *
*************************************************************************************************
*/

#include <iostream>
#include <cstdlib>
using std::cout;
using std::cin;
using std::endl;

int main()
{
    // Declare and initialize variables
    double miles = 0.0, gallons = 0.0, tankfulMPG = 0.0;
    double totalMiles = 0.0, totalGallons = 0.0, overallMPG = 0.0;

    while(true)
    {
        // Get miles driven
        cout << "Enter miles driven <-1 to quit>: ";
        cin >> miles;

        // If statement to stop the loop if miles is -1
        if (miles == -1.0)
            break;

        // Get gallons used
        cout << "Enter gallons used: ";
        cin >> gallons;

        // Equations for calculations
        tankfulMPG = miles / gallons;
        totalMiles += miles;
        totalGallons += gallons;
        overallMPG = totalMiles / totalGallons;

        // Display tankful mpg and overall mpg
        cout << "Tankful MPG: " << tankfulMPG << endl;
        cout << "Overall MPG: " << overallMPG << endl;
        cout << endl;
    }

    return 0;
}
