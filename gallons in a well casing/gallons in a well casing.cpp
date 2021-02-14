// gallons in a well casing.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
// this program outputs the gallons of water stored in the well casing
// it does this by taking the users input of the radius and height of the well and does the following calculations
//  pi r squared h,  where r is radius and h is height
// this gives us the volume and 1 cubic foot is equal to 7.48 gallons of water
int main()
{
    double pi = 3.1415;
    double radiusOfWellInInches, volumeOfWell, WaterInWell, depthOfWell, radiusOfWellInFeet;
    cout << "Enter the radius of well in inches: ";
    cin >> radiusOfWellInInches;
    cout << "Enter the depth of the well in feet: ";
    cin >> depthOfWell;

    radiusOfWellInFeet = radiusOfWellInInches / 12;
    volumeOfWell = pi * (radiusOfWellInFeet * radiusOfWellInFeet) * depthOfWell;
 
    cout << "The cubic volume of the well is: ";
    cout << volumeOfWell << endl;
   
    WaterInWell = volumeOfWell * 7.48;

    cout << "The water in the well is: " << WaterInWell << " gallons";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
