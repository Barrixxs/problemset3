//Problem Set 3
//Kevin Barrios
//2001697903
#include <iostream> // cin cout
#include <iomanip> // setw setfill
#include <math.h> // pow
#include <cmath> // abs

//Standard Namespace is used in the program
using namespace std;

//Defining my functions at the top of the program
void manDist (double x1, double x2, double y1, double y2);
void eudDist (double x1, double x2, double y1, double y2);
void slope (double x1, double x2, double y1, double y2);

int main(){

//Defining Variables
  char menuchoice;
  double x1, x2, y1, y2;

//Display title of program
  cout << "**************************************" << endl
       << "* Welcome to the Distance Calculator *" << endl
       << "**************************************" << endl;

//Display menu neatly
  cout << fixed;
  cout << setw(20) << left << "Slope" << "-  (s/S)" << endl
       << setw(20) << left << "Manhattan Distance" <<  "-  (m/M)" << endl
       << setw(20) << left << "Euclidean Distance" << "-  (e/E)" << endl
       << setw(20) << left << "Quit" <<  "-  (q/Q)" << endl;

//Prompt and User Input
  cout << endl << "Chose an option: ";
  cin >> menuchoice;

//longggg if Statement for menu input
  if (menuchoice == 's' || menuchoice == 'S')
  {
    cout << endl; // skip a line

//Prompt and User Input
    cout << "Enter a x1 value: ";
    cin >> x1;
    if(cin.fail() || x1 > 1000)
    {                             //IF STATEMENT FOR
      cout << "INVALID INPUT..";  //INPUT VALIDATION
      return 0;                   //ON X AND Y VALUES
    }
//Prompt and User Input
    cout << "Enter a y1 value: ";
    cin >> y1;
    if(cin.fail() || y1 > 1500)
    {                             //IF STATEMENT FOR
      cout << "INVALID INPUT..";  //INPUT VALIDATION
      return 0;                   //ON X AND Y VALUES
    }
    cout << endl; // skip a line

//Prompt and User Input
    cout << "Enter a x2 value: ";
    cin >> x2;
    if(cin.fail() || x2 > 1000)
    {                             //IF STATEMENT FOR
      cout << "INVALID INPUT..";  //INPUT VALIDATION
      return 0;                   //ON X AND Y VALUES
    }
//Prompt and User Input
    cout << "Enter a y2 value: ";
    cin >> y2;
    if(cin.fail() || y2 > 1500)
    {                             //IF STATEMENT FOR
      cout << "INVALID INPUT..";  //INPUT VALIDATION
      return 0;                   //ON X AND Y VALUES
    }
//Takes values inputed and uses them in slope function
    slope (x1, x2, y1, y2);

  } else if (menuchoice == 'm' || menuchoice == 'M')
  {
    cout << endl; // skip a line

//Prompt and User Input
    cout << "Enter a x1 value: ";
    cin >> x1;
    if(cin.fail() || x1 > 100)
    {                             //IF STATEMENT FOR
      cout << "INVALID INPUT..";  //INPUT VALIDATION
      return 0;                   //ON X AND Y VALUES
    }
//Prompt and User Input
    cout << "Enter a y1 value: ";
    cin >> y1;
    if(cin.fail() || y1 > 150)
    {                             //IF STATEMENT FOR
      cout << "INVALID INPUT..";  //INPUT VALIDATION
      return 0;                   //ON X AND Y VALUES
    }
    cout << endl; // skip a line

//Prompt and User Input
    cout << "Enter a x2 value: ";
    cin >> x2;
    if(cin.fail() || x2 > 100)
    {                             //IF STATEMENT FOR
      cout << "INVALID INPUT..";  //INPUT VALIDATION
      return 0;                   //ON X AND Y VALUES
    }
//Prompt and User Input
    cout << "Enter a y2 value: ";
    cin >> y2;
    if(cin.fail() || y2 > 150)
    {                             //IF STATEMENT FOR
      cout << "INVALID INPUT..";  //INPUT VALIDATION
      return 0;                   //ON X AND Y VALUES
    }
//Takes values inputed and uses them in ManhattanDistance function
    manDist (x1, x2, y1, y2);
  } else if (menuchoice == 'e' || menuchoice == 'E')
  {
    cout << endl; // skip a line

//Prompt and User Input
    cout << "Enter a x1 value: ";
    cin >> x1;
    if(cin.fail() || x1 > 10000)
    {                             //IF STATEMENT FOR
      cout << "INVALID INPUT..";  //INPUT VALIDATION
      return 0;                   //ON X AND Y VALUES
    }
//Prompt and User Input
    cout << "Enter a y1 value: ";
    cin >> y1;
    if(cin.fail() || y1 > 15000)
    {                             //IF STATEMENT FOR
      cout << "INVALID INPUT..";  //INPUT VALIDATION
      return 0;                   //ON X AND Y VALUES
    }
    cout << endl; // skip a line

//Prompt and User Input
    cout << "Enter a x2 value: ";
    cin >> x2;
    if(cin.fail() || x2 > 10000)
    {                             //IF STATEMENT FOR
      cout << "INVALID INPUT..";  //INPUT VALIDATION
      return 0;                   //ON X AND Y VALUES
    }
//Prompt and User Input
    cout << "Enter a y2 value: ";
    cin >> y2;
    if(cin.fail() || y2 > 15000)
    {                             //IF STATEMENT FOR
      cout << "INVALID INPUT..";  //INPUT VALIDATION
      return 0;                   //ON X AND Y VALUES
    }
//Takes values inputed and uses them in EuclideanDistance function
    eudDist (x1, x2, y1, y2);
  } else if (menuchoice == 'q' || menuchoice == 'Q')
  {
    cout << "Thank you for using the Distance Calculator\n"; // Quit program (thank user)
    return 0;
  } else
  {
    //OUTPUTS WHEN INVALID INPUT IS ENTERED IN MENU
    cout << "INVALID INPUT ...\n";
    return 0;
  }
}

//Calculates and Outputs Slope and Y-Intercept
void slope (double x1, double x2, double y1, double y2)
{
  double slope = (y2 - y1) / (x2 - x1);
  double yintercept = y1 - (slope * x1);
  cout << endl
       << "Slope: " << slope << endl;
  cout << "Y-Intercept: " << yintercept << endl;
}

//Calculates and Outputs Manhattan Distance
void manDist (double x1, double x2, double y1, double y2)
{
  double manhattan = abs((x2-x1)) + abs((y2 -y1));
  cout << endl
       << "Manhattan Distande: " << manhattan << endl;
}

//Calculates and Outputs Euclidean Distance
void eudDist (double x1, double x2, double y1, double y2)
{
  double firstSquared = pow(x2-x1, 2);
  double secondSquared = pow(y2-y1, 2);
  double euclidean = sqrt(firstSquared + secondSquared);
  cout << endl
       << "Euclidean Distance: ";
  cout << fixed << setprecision(4) << euclidean << endl;
}
