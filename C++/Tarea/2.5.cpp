//Calcualte the product of three integres
#include <iostream>
using namespace std;

//Function main begins program execution 
int main(){

    int x{0};  //First integer to multiply
    int y{0};  //Second integer to multiply
    int z{0};  //Third integer to multiply
    int result{0};   //The product
    cout << "Enter three integres: "; //Prompt user for data 
    cin >> x >> y >> z;
    result = x * y * z;  //Product of the three integrets
    cout << "The product is: " << result << endl; //Print result; end line 
}//End function main 