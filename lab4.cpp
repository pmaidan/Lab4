// Polina Maidanova
// Programming Fundamentals
// CS 1436
// 005
// Due Date: 09/14/2024
// Date Completed: 09/10/2024
// Date Submitted: 09/10/2024


// This program calculates the theater's gross and net box office profit for a night.
#include <iostream> // Header file iostream allows the use of cin/cout objects.
#include <iomanip>  // Header file iomanip allows the output manipulation.
#include <string>   // Header file string provides support for manipulating strings.
using namespace std;    // Header string allows to work with string class.

int main()  // Main function is a starting point of the program execution.
{
    // Declare variables, constants and strings.
    string movieName;   // Declare a string hoding a movie name.
    const double NET_PERCENTILE = 0.2;  // Initialize the constant percent of gross income kept.
    int adultCount, childCount; // Declare the variables of integer type.
    int adultTicketPrice, childTicketPrice; // Declare the variables of integer type.
    double adultProfit, childProfit;    // Declare the variables or double type.
    double grossProfit, netProfit, distributorProfit;   // Declare the variables or double type.

    //Get the input.
    cout << "Enter the name of the movie: ";    // Display the string, requesting input.
    getline(cin, movieName);    // Get the string literal, including spaces, and store it in movieName.

    cout << "Enter the number of adults: "; // Display the string, requesting input.
    cin >> adultCount;  // Get input and store it in adultCount.

    cout << "Enter the number of children: ";   // Display the string, requesting input.
    cin >> childCount;  // Get input and store it in childCount.

    cout << "Enter the price of an adult ticket, "; // Display the string, requesting input.
    cout << "ranging from $9 to $12: "; // Display the string, requesting input.
    cin >> adultTicketPrice;    // Get input and store it in adultTicketPrice.

    cout << "Enter the price of a child ticket, ";  // Display the string, requesting input.
    cout << "ranging from $3 to $6: ";  // Display the string, requesting input
    cin >> childTicketPrice;    // Get input and store it in childTicketPrice.

    // Calculate the profit for each type of ticket.
    adultProfit = adultTicketPrice * adultCount;    // Assign the value to adultProfit.
    childProfit = childTicketPrice * childCount;    // Assign the value to childProfit.

    // Calculate the gross profit.
    grossProfit = adultProfit + childProfit;    // Assign the value to grossProfit.

    // Calculate the net profit.
    netProfit = grossProfit *  NET_PERCENTILE;  // Assign the value to netProfit.

    // Calculate the distributor's profit.
    distributorProfit = grossProfit - netProfit;    // Assign the value to distributorProfit.

    // Display the results.
    cout << "Movie Name: " << movieName << endl;    // Display the string literal and variable.
    cout << "Adult Tickets Sold: " << adultCount << endl;   // Display the string literal and variable.
    cout << "Child Tickets Sold: " << childCount << endl;   // Display the string literal and variable.
    cout << setprecision(2) << fixed;   // Manipulate the output to display the result to 2 decimal places.
    cout << "Gross Box Office Profit: $" << grossProfit << endl;    // Display the string literal and variable.
    cout << "Net Box Office Profit: $" << netProfit << endl;    // Display the string literal and variable.
    cout << "Amount Paid to Distributor: $";    //Display the string literal.
    cout << distributorProfit << endl;  // Display the variable.

    return 0;   // Return 0 to the operating system to indicate successful execution of the program.
}   // End of the main function.
