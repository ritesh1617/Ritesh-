#include <iostream>
#include <string>
using namespace std;

// Base class
class Cricketer {
protected:
    string playerName;
    int matchesPlayed;

public:
    void inputCricketerData() {
        cout << "Enter player name: ";
        cin >> playerName;
        cout << "Enter matches played: ";
        cin >> matchesPlayed;
    }

    void displayCricketerData() {
        cout << "Player Name: " << playerName;
        cout << "\nMatches Played: " << matchesPlayed;
    }
};

// Derived class
class Batsman : public Cricketer {
private:
    int totalRuns;
    double averageRuns;
    int bestPerformance;

public:
    void inputBatsmanData() {
        inputCricketerData(); // Call the base class function to input common data
        cout << "Enter total runs: ";
        cin >> totalRuns;
        cout << "Enter best performance: ";
        cin >> bestPerformance;

        calculateAverageRuns(); // Calculate the average runs
    }

    void calculateAverageRuns() {
        averageRuns = static_cast<double>(totalRuns) / matchesPlayed;
    }

    void displayBatsmanData() {
        displayCricketerData(); // Call the base class function to display common data
        cout << "\nTotal Runs: " << totalRuns;
        cout << "\nAverage Runs: " << averageRuns;
        cout << "\nBest Performance: " << bestPerformance;
    }
};

int main() {
    Batsman batsman;

    // Input data for the batsman
    batsman.inputBatsmanData();

    // Display data for the batsman
    batsman.displayBatsmanData();

    
}

