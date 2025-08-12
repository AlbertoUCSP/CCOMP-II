#include <iomanip>
#include <stdexcept>
#include <sstream>
#include <string>
#include "Time.h"

using namespace std;

void Time::setTime(int h, int m, int s) {
    if((h >= 0 && h < 24) && (m >= 0 && m < 60) && (s >= 0 && s < 60)){
        hour = h;
        minute = m;
        second = s;
    } else {
        throw invalid_argument("Hour, minute and/or second was out of range");
    }
}

string Time::toUniversalTime() const {
    ostringstream output; // crea un objeto de tipo ostringstream, que es un flujo de salida que se usa para construir cadenas de texto en memoria.
    output << "Universal time" << setfill('0') << setw(2) << hour << ":" << setw(2) << minute << ":" << setw(2) << second;
    return output.str();
}

string Time::toStandarTime() const {
    ostringstream output;
    output << ((hour == 0 || hour == 12) ? 12 : hour % 12) << "Standar time: " << setfill('0') << setw(2) << hour << ":" << setw(2) << minute << ":" << setw(2) << second << (hour < 12 ? " AM" : " PM");
    return output.str();
}
