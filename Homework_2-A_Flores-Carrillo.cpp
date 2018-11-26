// Flores-Carrillo, Pedro
// October 2, 2018
// COP 2000
// Homework Assignment 2-A
// Harverly's Room Calculator
// This program calculates the area of the room depending
// on the shape of the room.

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int choice;     // To hold menu choice.
    const double PI = 3.14159;  // Used to calculate the area of the room.
    
    // Constants for menu choice.
    const int SQUARE_CHOICE = 1;
    const int RECTANGLE_CHOICE = 2;
    const int ROUND_CHOICE = 3;
    const int QUIT_CHOICE = 4;
    
    float SquareWidth,      // Width of square room.
          RectangleLength,  // Length of rectangle room.
          RectangleWidth,   // Width of rectangle room.
          Radius,       // Radius of round room.
          SqRmArea,     // Square room's area.
          RctRmArea,    // Rectangle room's area.
          RoundRmArea;  // Round room's area.
          
    // Display the menu and get a choice.
    cout << "Haverly's Room Calculator\n\n";
    cout << "1. Square Room\n";
    cout << "2. Rectangle Room\n";
    cout << "3. Round Room\n";
    cout << "4. Quit\n\n";
    cout << "Please enter a menu item (1-4) \n\n";
    cin >> choice;
    
    // Setting up the numberic output formatting.
    cout << fixed << showpoint << setprecision (2);
    
    switch (choice)
    {
        case SQUARE_CHOICE: 
        cout << "What is the width of the room?";
        cin >> SquareWidth;
        while (SquareWidth <= 0)
        {
            cout << "Error, invalid value entered...Program Exiting...\n";
            
        }
            SqRmArea = SquareWidth * SquareWidth;
            cout << "Area of Room = " << SqRmArea << endl;
        break;
        
        case RECTANGLE_CHOICE:
        cout << "What is the width of the room?\n";
        cin >> RectangleWidth;
        cout << "What is the length of the room?\n";
        cin >> RectangleLength;
        while (RectangleWidth <= 0 && RectangleLength <= 0);
        { 
            cout << "Error, invalid value entered...Program Exiting...\n";
            
        }
            RctRmArea =  RectangleWidth * RectangleLength;
            cout << "Area of Room = " << RctRmArea;
        break;
        
        case ROUND_CHOICE:
        cout << "What is the radius of the room?\n";
        cin >> Radius;
        while (Radius <= 0)
        {
            cout << "Error, invalid value entered...Program Exiting...\n";
            
        }
            RoundRmArea = PI *Radius * Radius;
            cout << "Area of Room = " << RoundRmArea;
        break;
        
        case QUIT_CHOICE:
        cout << "Thank you for using Haverly's Room Calculator...\n";
        break;
        default:
        cout: "Invalid menu item entered...Program Exiting\n";
        
    
            
    }
   return 0;
}