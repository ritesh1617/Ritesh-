#include <iostream>
#include <cmath>

using namespace std;

// Constants for cost calculation
const double CostPerHour = 18.50;
const double CostPerMinute = 0.40;
const double CostOfDinner = 20.70;
const int GuestsPerServer = 20;
const double DepositPercentage = 0.25;

class Event {
private:
    string eventName;
    string firstName;
    string lastName;
    int numberOfGuests;
    int numberOfMinutes;

public:
    // Constructor to initialize the event details
    Event(const string& eName) : eventName(eName) {}

    // Function to input participant details
    void inputDetails() {
        cout << "Enter your first name: ";
        cin >> firstName;
        cout << "Enter your last name: ";
        cin >> lastName;
        cout << "Enter the number of guests: ";
        cin >> numberOfGuests;
        cout << "Enter the number of minutes: ";
        cin >> numberOfMinutes;
    }

    // Function to calculate the cost estimation
    void calculateCost() {
        int numberOfServers = std::ceil(static_cast<double>(numberOfGuests) / GuestsPerServer);

        double cost1 = (static_cast<double>(numberOfMinutes) / 60) * CostPerHour;
        double cost2 = (numberOfMinutes % 60) * CostPerMinute;
        double costForOneServer = cost1 + cost2;

        double totalFoodCost = numberOfGuests * CostOfDinner;
        double averageCostPerPerson = totalFoodCost / numberOfGuests;
        double totalCost = totalFoodCost + (costForOneServer * numberOfServers);
        double depositAmount = totalCost * DepositPercentage;

        // Output the cost estimation
        cout << "\nEvent Cost Estimation for " << eventName << " event:\n";
        cout << "Total Food Cost: Rs" << totalFoodCost << "\n";
        cout << "Average Cost Per Person: Rs" << averageCostPerPerson << "\n";
        cout << "Total Cost: Rs" << totalCost << "\n";
        cout << "Deposit Amount (25%): Rs" << depositAmount << "\n";
    }
};

int main() {
    string eventName;
    
    cout<<"*********Event Mangement System**********";
    cout << "\n\nEnter the name of the event: ";
    getline(cin, eventName);

    // Create an Event object
    Event event(eventName);

    // Input participant details
    event.inputDetails();

    // Calculate and display the cost estimation
    event.calculateCost();

    
}

