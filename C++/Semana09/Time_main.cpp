#include <iostream>
#include <iomanip>
#include "time.h"

using namespace std;

void displayTime(string message, Time &t) {
    cout << message << "\nUniversal time: " << t.toUniversalTime() << "\nStandar time: " << t.toStandarTime() << endl;
}

int main() {
    Time t;
    displayTime("Initial time", t);
    t.setTime(13, 27, 6);
    displayTime("After setTime: ", t);

    try {
        t.setTime(99, 99, 99);
    } catch(invalid_argument& e)
    {
        cout << "Exception: " << e.what() << "\n\n";
    }
    displayTime("After attempting to set an invalid time: ", t);

}