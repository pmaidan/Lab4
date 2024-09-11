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
#include <string>   // Header string allows to work with string class.
using namespace std;    // Use the names fir objects and variables from the std library.

int main()  // Main function is a starting point of the program execution.
{
    // Declare variables, constants and strings.
    string movieName;   // Declare a string holding a movie name.
    const double GROSS_PERCENT = 0.2;  // Initialize the constant percent of gross income kept.
    int adultCount, childCount; // Declare the variables for the number of adult and child tickets sold.
    double adultTicketPrice, childTicketPrice; // Declare the variables for the adult and child tickets price.
    double adultProfit, childProfit;    // Declare the variables for income from the adult and child tickets sold.
    double grossProfit, netProfit, distributorProfit;   // Declare the variables for profit.

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

    // Check if input is in the specified range.
    // "If" statement specifies a block of code to be executed if a condition is true.
    if (adultTicketPrice < 9 || adultTicketPrice > 12)  // Check if the input is out of range.
    {
        cout << "Invalid adult ticket price. Please enter a value between $9 and $12." << endl;    // Display an error statement.
        return -1;  // Return -1 to indicate an error in the input for adult ticket price.
    }

    // Get the input.
    cout << "Enter the price of a child ticket, ";  // Display the string, requesting input.
    cout << "ranging from $3 to $6: ";  // Display the string, requesting input
    cin >> childTicketPrice;    // Get input and store it in childTicketPrice.

    // Check if input is in the specified range.
    if (childTicketPrice < 3 || childTicketPrice > 6)   // Check if input is out of range.
    {
        cout << "Invalid child ticket price. Please enter a value between $3 and $6." << endl;    // Display an error statement.
        return -2;  // Return -2 to indicate an error in the input for child ticket price.
    }

    // Calculate the profit for each type of ticket.
    adultProfit = adultTicketPrice * adultCount;    // Calculate the profit from adult tickets sold.
    childProfit = childTicketPrice * childCount;    // Calculate the profit from child tickets sold.

    // Calculate the gross profit.
    grossProfit = adultProfit + childProfit;    // Calculate the gross profit.

    // Calculate the net profit.
    netProfit = grossProfit *  GROSS_PERCENT;  // Calculate the net profit.

    // Calculate the distributor's profit.
    distributorProfit = grossProfit - netProfit;    // Calculate the amount paid to the distributor.

    // Display the results.
    cout << "Movie Name: " << movieName << endl;    // Display the name of the movie.
    cout << "Adult Tickets Sold: " << adultCount << endl;   // Display the amount of adult tickets sold.
    cout << "Child Tickets Sold: " << childCount << endl;   // Display the amount of child tickets sold.
    cout << setprecision(2) << fixed;   // Display the output to 2 decimal places.
    cout << "Gross Box Office Profit: $" << grossProfit << endl;    // Display the gross profit.
    cout << "Net Box Office Profit: $" << netProfit << endl;    // Display the net profit.
    cout << "Amount Paid to Distributor: $";    //Display the amount paid to the distributor.
    cout << distributorProfit << endl;

    return 0;   // Return 0 to the operating system to indicate successful execution of the program.
}
