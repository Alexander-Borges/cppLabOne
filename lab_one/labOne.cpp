#include <iostream>
using namespace std;

int main(){
    // Initialize the values for the variables we need like income and user's monthly expenses
   float monthlyIncome = 0.0;
   float rent = 0.0;
   float groceries = 0.0;
   float utilities = 0.0;
   float dog = 0.0;
   
   //This section prompts the user to input their data
   cout << "What is your monthly income?" << endl;
   cin >> monthlyIncome;
   cout << "How much is your rent?" << endl;
   cin >> rent;
   cout << "How much are your monthly groceries?" << endl;
   cin >> groceries;
   cout << "How much are your monthly utilities?" << endl;
   cin >> utilities;
   cout << "What are your monthly expenses for your dog?" << endl;
   cin >> dog;

    // After data is collected. Add up all of users expenses to create an "expenses" container and print back to the user
   float expenses = rent + groceries + utilities + dog;
   cout << "Your total monthly expenses are: $" << expenses <<endl;
   // Print out total the user has left after their expenses have been paid.
   cout << "Your remaining balance is: $" << monthlyIncome - expenses;
   
    // Checks the program for errors
    return 0;
}

