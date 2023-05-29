#include <iostream>
#include <string>
using namespace std;

class Cricketer {
protected:
    string name;

public:
    // Function to input data
    void inputData() {
        cout << "Enter cricketer's name: ";
        getline(cin >> ws, name);
    }

    // Function to display data
    void displayData() {
        cout << "Cricketer's name: " << name << endl;
    }
};

class Batsman : public Cricketer {
private:
    int totalRuns;
    float averageRuns;
    int bestPerformance;

public:
    // Function to input data
    void inputData() {
        Cricketer::inputData();
        cout << "Enter total runs: ";
        cin >> totalRuns;
        cout << "Enter average runs: ";
        cin >> averageRuns;
        cout << "Enter best performance: ";
        cin >> bestPerformance;
    }

    // Function to calculate average runs
    void calculateAverageRuns() {
        averageRuns = static_cast<float>(totalRuns) / 5;
    }

    // Function to display data
    void displayData() {
        Cricketer::displayData();
        cout << "Total runs: " << totalRuns << ::endl;
        cout << "Average runs: " << averageRuns << endl;
        cout << "Best performance: " << bestPerformance << endl;
    }
};

int main() {
    Batsman batsman;
    batsman.inputData();
    batsman.calculateAverageRuns();
    batsman.displayData();

    return 0;
}
