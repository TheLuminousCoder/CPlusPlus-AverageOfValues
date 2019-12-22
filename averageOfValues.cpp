/******************************************************************************/
/*  NAME: TheLuminousCoder                                                    */
/*  FILE: AverageOfValues.cpp                                                 */
/*  DATE: Dec 21st 2019                                                       */
/*  GOAL: Calculate the average of values in a list and print them to screen. */
/******************************************************************************/

//Preprocessor directives
#include <iostream>
using namespace std;

//Constant declarations and initializations
const int SIZE = 5;

//Main Function
int main()
{
    //Variable declarations and initializations
    double sum = 0;
    double average = 0;
    double arr[SIZE] = {28, 32, 37, 24, 33};
    
    //Printout the values in the list
    cout << "The values of the list are ";
    
    //Sum up all of the values in the list
    for(int i = 0; i < SIZE; i++){
        cout << arr[i] << " ";
        sum += arr[i];
    }
    cout << endl;
    
    //Printout the sum of the list values
    cout << "The sum of these values is " << sum << endl;
    
    //Calculate the average of the list values
    average = sum / SIZE;
    
    //Printout the average of the list values
    cout << "The average of these values is "<< average << endl;
    
    return 0;
}
