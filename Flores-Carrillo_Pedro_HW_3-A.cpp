// Flores-Carrillo, Pedro
// October 25, 2018
// COP 2000
// Homework Assignment 3-A
// This program will show the membership fees for Rhonda's Strikeforce gym.

#include <iostream>
#include <iomanip>

using namespace std;

int main ()
{
    // Constants for menu choice.
    const int GOLD_CHOICE = 1,
              SILVER_CHOICE = 2,
              BRONZE_CHOICE = 3,
              QUIT_CHOICE = 4;
    
    // Constants for membership rates. 
    const double GOLD = .01,
                 SILVER = .02,
                 BRONZE = .04;
                 
    // Constants for minimum year and maximum year.
    const int minYEAR = 1,
              maxYEAR = 10;
    
    // Membership base fee.
    double total = 1200;    
    
    // Variables
    int choice, // Menu Choice
        year; // Number of months
    
    
    // set up numeric output formatting.
    cout << fixed << showpoint << setprecision (2);
    
    do 
    {
        // Display menu.
        cout << "\n\t\tWelcome to Ronda's Strikeforce Gym!\n"
             << "x---------------------------------------------x\n"
             << "Membership Fee Calculator\n"
             << "1. Gold\n"
             << "2. Silver\n"
             << "3. Bronze\n" 
             << "4. Quit\n\n"
            << "Please enter a your membership level (1-3 Enter 4 to Quit)> ";
    
        cin >> choice;
        
        // Validate the menu selection.
        while (choice < GOLD_CHOICE || choice > QUIT_CHOICE)
        {
            cout << "Please enter a valid menu choice: ";
            cin >> choice;
        }
        
        // Process the user's choice.
        if (choice != QUIT_CHOICE)
        {
            // Respond to the user's menu selection.
            switch (choice)
            {
                case GOLD_CHOICE
                    :for (year = minYEAR; year <= maxYEAR; year++)
                    {
                        double total = 1200;
                        total = + (total * GOLD);
                             
                        
                    }
                    break;
                
                case SILVER_CHOICE
                    :for (year = minYEAR; year <= maxYEAR; year++)
                    {
                        double total = 1200,
                        total = + (total * SILVER);
                             
                    }
                    break;
                    
                case BRONZE_CHOICE
                    :for (year = minYEAR; year <= maxYEAR; year++)
                    {
                        double total = 1200,
                        total = + (total * BRONZE);
                             
                             
                    }
                    break;
                    
                case QUIT_CHOICE
                    // display thank you message.
                    :cout << "Thank you for using Rhonda's Free Calculator!";
            }
                
        } 
        
    } while (choice != QUIT_CHOICE);
   return 0;
}
