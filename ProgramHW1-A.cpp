#include <iostream>
#include <iomanip> 
using namespace std;

int main()
{
   // The Purpose of this program is to caculate the correct recipe for the
   //number of pies Malachi's pie shop wishes to make.
  // Flores-Carrillo, Pedro
  // September 16th 2018
  // COP 2000
  
  //Constants for recipe.
  float FLOUR = 15.00;
  float SUGAR = 8.00;
  float SALT = 3.00;
  float BUTTER = 5.25;
  float EGGS = 6.00;
  
  // Variables
  float AmntOfPies;       // The desired amount of pies.
  float FlourForOne;     //Flour needed to make one pie crust.
  float SugarForOne;     //Sugar needed to make one pie crust.
  float SaltForOne;      // Salt needed to make one pie crust
  float ButterForOne;    // Butter needed to make one pie crust.
  float EggsForOne;      // Eggs needed to make one pie crust.
  
  float FlourForUser;  // Amount of flour for desired amount of pie.
  float SugarForUser; // Amount of sugar for desired amount of pie.
  float SaltForUser;  // Amount of Salt for desired amount of pie.
  float ButterForUser;// Amount of butter for desired amount of pie.
  float EggsForUser;  // Amount of Eggs for desired amount of pie.
  
  // Set the dsired output formatting for numbers.
  cout << setprecision(2) << fixed << showpoint;
  
  // Ask the user how many pies do they wish to make.
  cout << "How many pies do you wish to make?" << endl;
  cin >> AmntOfPies;// Store in input from user into AmntOfPies.
  
  // Caculate recipe for one pie.
  FlourForOne = FLOUR / 6;
  SugarForOne = SUGAR / 6;
  SaltForOne = SALT / 6;
  ButterForOne = BUTTER / 6;
  EggsForOne = EGGS / 6;
  
   //Caculate the recipe fot the amount of pie crusts the user wishes to make
  FlourForUser = FlourForOne * AmntOfPies;
  SugarForUser = SugarForOne * AmntOfPies;
  SaltForUser = SaltForOne * AmntOfPies;
  ButterForUser = ButterForOne * AmntOfPies;
  EggsForUser = EggsForOne * AmntOfPies;
  
  // Display results on screen.
  cout << " " << endl;
  cout << "You wish to make " << AmntOfPies << " pies." << endl;
  cout << " " << endl;
  cout << "Flour   " << FlourForUser << " cups" << endl;
  cout << "Sugar   " << SugarForUser << " tablespoons" << endl;
  cout << "Salt   " << SaltForUser << " tablespoons" << endl;
  cout << "Butter   " << ButterForUser << " cups"<< endl;
  cout << "Eggs   " << EggsForUser << " large eggs" << endl;
   return 0;
}