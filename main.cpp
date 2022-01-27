#include <iostream>
#include <iomanip>
using namespace std;

#include <cmath>

int main() {

   double yearlyRent;
    double estElectricityCost;
    double salaryOfEmployees;
    double totalCostOfMerch;

    cout  << "Enter total cost of merchandise: " << endl;
    cin >> totalCostOfMerch;

    cout  << "Enter total cost of yearly rent: " << endl;
    cin >> yearlyRent;

    cout  << "Enter total cost of salary of employees: " << std::endl;
    cin >> salaryOfEmployees;

    cout  << "Enter total cost of electricy: " << endl;
    cin  >> estElectricityCost;

    int totalExpenses = yearlyRent + estElectricityCost + salaryOfEmployees + totalCostOfMerch;

double markup = (totalExpenses + (.10 * totalCostOfMerch))/(.85 * totalCostOfMerch);

double markupResult  = markup * 100;

cout  << "The markup price is " << setprecision(2) << fixed << markupResult << endl;


}
