#include <iostream>
#include <string>
using namespace std;

class Time{
    private:
        unsigned int hour{0};
        unsigned int minute{0};
        unsigned int second{0};
    public:
        // Here shoulb be the constructor, but if we don't create it the compiler automatic
        // create one (Default constructor) and inicialize the objects with the atributes' values
        // Therefore, the default builder is responsible for initializing the attributes, but 
        // only based on what you have already established in your class

        // Here I declareted protypes functions wich exits, but they are not implemented here
        void setTime(int, int, int);
        string toUniversalTime() const;
        string toStandarTime() const;

};