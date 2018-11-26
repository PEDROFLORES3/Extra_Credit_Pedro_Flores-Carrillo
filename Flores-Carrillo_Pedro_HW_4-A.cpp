#include <iostream>
#include <string>
using namespace std;
 
void welcome();
void getRaceTimes(string &, double &);
void findWinner (string &,  double &);
void raceAverage(double &);
 
int main()
{
   const int NUMBER_OF_RACERS = 3;
   // declare array for names
   // double check below syntax please
   string racer_names = string[NUMBER_OF_RACERS];
   
   // declare array for times
   // double check below syntax please
   double racer_times = double[NUMBER_OF_RACERS];
 
 
   welcome();
   getRaceTimes(racer_names, racer_times);
   findWinner (racer_names,  racer_times);
   
   
   return 0;
   
}
 
void raceAverage(double rt)
{
   
}
void findWinner (string &n,  double &t)
{
   
}
 
void getRaceTimes(string &n, double &t)
{
   
}
void welcome()
{
  
}
