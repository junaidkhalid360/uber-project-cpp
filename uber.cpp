#include <iostream>
#include <string>
using namespace std;

int main() {

    char riderName[50];
    int choice;
    double totalFare;
    double surgeMultiplier = 1.0;
    int availableDrivers = 5;


    string locations[10] = {
        "Emporium Mall", "Liberty Market", "Fortress Stadium",
        "Packages Mall", "DHA Phase 5", "Gulberg Main Market",
        "Johar Town", "Wapda Town", "Model Town", "Allama Iqbal Airport"
    };

    double distances[10] = {
        8.5,   // Emporium Mall (km)
        6.2,   // Liberty Market
        9.1,   // Fortress Stadium
        7.8,   // Packages Mall
        5.5,   // DHA Phase 5
        4.8,   // Gulberg Main Market
        3.2,   // Johar Town
        4.5,   // Wapda Town
        6.8,   // Model Town
        12.3   // Allama Iqbal Airport
    };

    char driverNames[5][20] = { "Ali", "Ahmed", "Usman", "Hassan", "Bilal" };
    string carTypes[5] = { "Economy", "Premium", "SUV", "Bike", "Auto" };
    double ratings[5] = { 4.8, 4.9, 4.7, 4.6, 4.5 };

    double ratesPerKm[5] = {
        55.0,   // Economy
        85.0,   // Premium
        120.0,  // SUV
        25.0,   // Bike
        35.0    // Auto
    };

    while (true) {
        cout << "\n";
        cout << "#################################################\n";
        cout << "#                                               #\n";
        cout << "#                    U B E R                    #\n";
        cout << "#                                               #\n";
        cout << "#################################################\n";
        cout << "#  [1] Book a Ride                              #\n";
        cout << "#  [2] Calculate Fare                           #\n";
        cout << "#  [3] View Available Drivers                   #\n";
        cout << "#  [4] Exit                                     #\n";
        cout << "#################################################\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) {
            cout << "\n===============================================\n";
            cout << "                 BOOK A RIDE                   \n";
            cout << "===============================================\n";

            cout << "Your Name      : ";
            cin >> riderName;

            cout << "\n------------------ WHERE TO? -------------------\n";
            cout << "Pickup: University of Central Punjab, Lahore\n\n";
            cout << "Select Destination:\n";
            for (int i = 0; i < 10; i++) {
                cout << " [" << i + 1 << "] " << locations[i];
                int spaces = 25 - locations[i].length();
                for (int s = 0; s < spaces; s++) {
                    cout << " ";
                }
                cout << "(" << distances[i] << " km)\n";
            }
            cout << "------------------------------------------------\n";

            int locationChoice;
            cout << "Select destination (1-10): ";
            cin >> locationChoice;

            if (locationChoice < 1 || locationChoice > 10) {
                cout << "\n[ ERROR ] Invalid destination selection\n";
                continue;
            }

            double distance = distances[locationChoice - 1];

            if (availableDrivers < 3) {
                surgeMultiplier = 1.5;
                cout << "\n[ NOTICE ] Surge Pricing Active (1.5x)\n";
            }
            else {
                surgeMultiplier = 1.0;
            }

            cout << "\n---------------- DRIVER LIST ------------------\n";
            cout << " #  Driver    Vehicle    Rate/Km   Rating\n";
            cout << "--------------------------------------------\n";
            for (int i = 0; i < availableDrivers; i++) {
                cout << " " << i + 1 << "  ";
     
                cout << driverNames[i];
                int spaces1 = 10 - strlen(driverNames[i]);
                for (int s = 0; s < spaces1; s++) cout << " ";

                cout << carTypes[i];
                int spaces2 = 11 - carTypes[i].length();
                for (int s = 0; s < spaces2; s++) cout << " ";

                cout << "PKR " << ratesPerKm[i];
                if (ratesPerKm[i] < 100) cout << " ";

                cout << "      " << ratings[i] << "\n";
            }
            cout << "------------------------------------------------\n";

            int driverChoice;
            cout << "Choose Driver (1-5): ";
            cin >> driverChoice;

            if (driverChoice < 1 || driverChoice > availableDrivers) {
                cout << "\n[ ERROR ] Invalid driver selection\n";
            }
            else {
                totalFare = distance * ratesPerKm[driverChoice - 1] * surgeMultiplier;

                cout << "\n================ RIDE DETAILS =================\n";
                cout << " Pickup  : University of Central Punjab, Lahore\n";
                cout << " Dropoff : " << locations[locationChoice - 1] << endl;
                cout << " Distance: " << distance << " km\n";
                cout << " Rider   : " << riderName << endl;
                cout << " Driver  : " << driverNames[driverChoice - 1] << endl;
                cout << " Vehicle : " << carTypes[driverChoice - 1] << endl;
                cout << " Rate    : PKR " << ratesPerKm[driverChoice - 1] << " per km\n";
                cout << " Surge   : " << surgeMultiplier << "x\n";
                cout << " Fare    : PKR " << totalFare << endl;
                cout << "================================================\n";

                char confirm;
                cout << "Confirm Ride (Y/N): ";
                cin >> confirm;

                if (confirm == 'Y' || confirm == 'y') {
                    cout << "\n[ SUCCESS ] Ride Booked\n";
                    cout << driverNames[driverChoice - 1] << " in " << carTypes[driverChoice - 1];
                    cout << " is on the way to UCP!\n";
                }
                else {
                    cout << "\n[ CANCELLED ] Ride Cancelled\n";
                }
            }
        }

        else if (choice == 2) {
            cout << "\n===============================================\n";
            cout << "               FARE CALCULATOR                 \n";
            cout << "===============================================\n";

            cout << "\nFrom: University of Central Punjab, Lahore\n\n";
            cout << "Select Destination:\n";
            for (int i = 0; i < 10; i++) {
                cout << " [" << i + 1 << "] " << locations[i];
                int spaces = 25 - locations[i].length();
                for (int s = 0; s < spaces; s++) {
                    cout << " ";
                }
                cout << "(" << distances[i] << " km)\n";
            }

            int locationChoice;
            cout << "\nSelect destination (1-10): ";
            cin >> locationChoice;

            if (locationChoice < 1 || locationChoice > 10) {
                cout << "\n[ ERROR ] Invalid destination selection\n";
                continue;
            }

            double distance = distances[locationChoice - 1];

            cout << "\nDestination: " << locations[locationChoice - 1] << endl;
            cout << "Distance: " << distance << " km\n\n";

            char surge;
            cout << "Surge Pricing (Y/N): ";
            cin >> surge;

            if (surge == 'Y' || surge == 'y') {
                surgeMultiplier = 1.5;
            }
            else {
                surgeMultiplier = 1.0;
            }

            cout << "\n-------------- FARE DETAILS ------------------\n";
            cout << " From    : University of Central Punjab, Lahore\n";
            cout << " To      : " << locations[locationChoice - 1] << endl;
            cout << " Distance: " << distance << " km\n";
            cout << " Surge   : " << surgeMultiplier << "x\n\n";

            cout << " Estimated Fare:\n";
            cout << " Auto    : PKR " << distance * 35.0 * surgeMultiplier << endl;
            cout << " Bike    : PKR " << distance * 25.0 * surgeMultiplier << endl;
            cout << " Economy : PKR " << distance * 55.0 * surgeMultiplier << endl;
            cout << " Premium : PKR " << distance * 85.0 * surgeMultiplier << endl;
            cout << " SUV     : PKR " << distance * 120.0 * surgeMultiplier << endl;
            cout << "------------------------------------------------\n";
        }

        else if (choice == 3) {
            cout << "\n===============================================\n";
            cout << "              AVAILABLE DRIVERS                \n";
            cout << "===============================================\n";
            cout << "Current Location: University of Central Punjab\n\n";

            for (int i = 0; i < availableDrivers; i++) {
                cout << "Driver " << i + 1 << endl;
                cout << " Name    : " << driverNames[i] << endl;
                cout << " Vehicle : " << carTypes[i] << endl;
                cout << " Rate    : PKR " << ratesPerKm[i] << " per km\n";
                cout << " Rating  : " << ratings[i] << " ";

                for (int s = 0; s < 5; s++) {
                    if (s < (int)ratings[i]) {
                        cout << "*";
                    }
                    else {
                        cout << "-";
                    }
                }
                cout << "\n-----------------------------------------------\n";
            }
        }

        else if (choice == 4) {
            cout << "\n#################################################\n";
            cout << "#           THANK YOU FOR USING UBER             #\n";
            cout << "#  We hope to serve you again in Lahore!         #\n";
            cout << "#################################################\n";
            break;
        }

        else {
            cout << "\n[ ERROR ] Invalid choice\n";
        }
    }

    return 0;
}
