#include <iostream>
using namespace std;
int main()
{
    // sensors
    short sensor1;
    short sensor2;
    short sensor3;

    // alerts
    string light1on = "light1 on";
    string light1off = "light1 off";
    string light2on = "light2 on";
    string light2off = "light2 off";
    string light3on = "light3 on";
    string light3off = "light3 off";

    // main loop
    while (true) {

        // --- SENSOR 1 ---
        do {
            cout << "Movement on sensor 1? (1-yes, 0-no): " << endl;
            cin >> sensor1;
            if (sensor1 != 0) {
                cout << light1on << endl;
            }
            else {
                cout << "no move" << endl;
            }
        } while (sensor1 != 1);

        // --- SENSOR 2 ---
        do {
            cout << "Movement on sensor 2? (1-yes, 0-no): " << endl;
            cin >> sensor2;
            if (sensor2 != 0) {
                cout << light1off << endl;
                cout << light2on << endl;
            }
            else {
                cout << light1on << " (still)" << endl;
            }
        } while (sensor2 != 1);

        // --- SENSOR 3 ---
        do {
            cout << "Movement on sensor 3? (1-yes, 0-no): " << endl;
            cin >> sensor3;
            if (sensor3 != 0) {
                cout << light1off << endl;
                cout << light2off << endl;
                cout << light3on << endl;
            }
            else {
                cout << light2on << " (still)" << endl;
            }
        } while (sensor3 != 1);

        cout << "--- Cycle complete! Returning to start ---" << endl;
    }

    return 0;
}
